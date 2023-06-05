#include "EQ_Sys.h"
//дополнительные функции
bool choice(){
    char n;
    do{
        cout<<"Y/N:\t";
        cin>>n;
        switch(n){
            case 'Y': case 'y': case '1':
                cin.clear();
                cin.ignore(100, '\n'); 
                return true;
                break;
            case 'N': case 'n': case '0':
                cin.clear();
                cin.ignore(100, '\n'); 
                return false;
                break;
            default: cout<<"Ошибка распознавания, повторите ввод\t"; break;
        }
        cin.clear();
        cin.ignore(100, '\n'); 
    }while(true);
}
int inputInt(int min, int max){
    int code;
    do{
        cin>>code;
        if(cin.fail()){
            cout<<"Ошибка ввода";
        }else if((code>=min)&&(code<=max)){
            cin.clear();
            cin.ignore(100, '\n'); 
            return code;
        }else
            cout<<"Неверное значение";
        cout<<", повторите ввод:\n->\t";
        cin.clear();
        cin.ignore(100, '\n'); 
    }while(true);
}
int inputQuantity(){
    cout<<"Введите новое количество оборудования: ";
    int newQuantity=inputInt(0, 65535);
    return newQuantity;
}
string inputString(){
    cout<<"Введите новое значение: ";
    string newString;
    getline(cin, newString, '\n');
    return newString;
}

//оболочка консольного приложения
void ConsoleProgram::listLoad(){
    string filename;
    cout<<"Введите название/путь файла (с расширением): ";
    getline(cin, filename, '\n');   //принимает название файла (путь к файлу) с пробелами
    //сообщение пользователю о корректности ввода
    cout<<"Вы ввели: \""<<filename<<"\""<<endl;
    //загрузка файла
    list.listLoad(filename);
    cout<<"Файл загружен.\n\n";
}
void ConsoleProgram::listSave(){
    string filename;
    cout<<"Введите название/путь файла (с расширением): ";
    getline(cin, filename, '\n');   //принимает название файла (путь к файлу) с пробелами
    //сообщение пользователю о корректности ввода
    cout<<"Вы ввели: \""<<filename<<"\""<<endl;
    //проверка существования данных в файле
    char isexist; //метка проверки
    fstream Checkingfile(filename, ios::in);
    if(Checkingfile>>isexist){
        cout<<"Обнаружен существующий файл, дописать в конец?\t";
        if(!choice()){ //если нет, очистка файла
            fstream Cleanfile(filename, ios::out);
            Cleanfile.close();
        }
    }
    Checkingfile.close();
    //сохранение файла
    list.listSave(filename);
    cout<<"Файл сохранен.\n\n";
}
void ConsoleProgram::listPrint(){
    vector<int> Ids=list.getNumbers();
    if(Ids.size()!=0){
        cout<<"Список всех сотрудников:\n";
        for(int id: Ids){
            cout<<id<<' '<<list.getNameById(id)<<'\n';
        }
    }else{
        cout<<"Список сотрудников пуст.\n";
    }
    cout<<'\n';
}
void ConsoleProgram::listClear(){
    list.listClear();
    cout<<"Список очищен.\n\n";
}
void ConsoleProgram::employeeInsert(){
    cout<<"Введите номер нового сотрудника от 1 до 65535: ";
    int id=inputInt(1, 65535);
    if(list.idExist(id)){ //проверка уникальности номера сотрудника
        cout<<"Сотрудник с таким номером уже есть в списке.\n\n";
        return ;
    }
    cout<<"Введите ФИО нового сотрудника: ";
    string name;
    getline(cin, name, '\n');   //принимает имя с пробелами
    //сообщение пользователю о корректности ввода
    cout<<"Вы ввели: \""<<name<<"\"\n";
    //добавление нового сотрудника
    list.employeeInsert(id, name);
    cout<<"Новый сотрудник добавлен.\n\n";
}
void ConsoleProgram::employeeDelete(){
    cout<<"Введите номер удаляемого сотрудника от 1 до 65535: ";
    int id=inputInt(1, 65535);
    //удаление сотрудника
    if(list.idExist(id)){
        list.employeeDelete(id);
        cout<<"Сотрудник удален.\n\n";
    }else{
        cout<<"Сотрудника с таким номером нет в списке.\n\n";
    }
}
void ConsoleProgram::employeeInfo(){
    cout<<"Введите номер сотрудника от 1 до 65535: ";
    int id=inputInt(1, 65535);
    if(list.idExist(id)){
        SEquipment equip=list.employeeInfo(id);
        cout<<"Оборудование, закрепленное за сотрудником "<<list.getNameById(id)<<" :"
            <<"\nКоннекторы:\t\t"<<equip.connectors
            <<"\nИзолента:\t\t"<<equip.insulation
            <<"\nПереходники RJ45-RJ45:\t"<<equip.RJ45
            <<"\nСкобы:\t\t\t"<<equip.clips
            <<"\nБольшие стяжки:\t\t"<<equip.large_ties
            <<"\nМаленькие стяжки:\t"<<equip.small_ties
            <<"\nБатарейка крона:\t"<<equip.battery
            <<"\nПерчатки:\t\t"<<equip.gloves
            <<"\nБахилы:\t\t\t"<<equip.shoe_covers
            <<"\nКабель:\t\t\t"<<equip.cable;
        if(equip.sim.size()==0){
            cout<<"\nСим-карты не выдавались.";
        }else{
            cout<<"\nНомера выданных сим-карт:";
            for(string serial: equip.sim){
                cout<<"\n\t"<<serial;
            }
        }
        if(equip.router.size()==0){
            cout<<"\nРоутеры не выдавались.";
        }else{
            cout<<"\nСерийные номера выданных роутеров:";
            for(string serial: equip.router){
                cout<<"\n\t"<<serial;
            }
        }
        if(equip.box.size()==0){
            cout<<"\nПриставки не выдавались";
        }else{
            cout<<"\nНомера выданных приставок:";
            for(string serial: equip.box){
                cout<<"\n\t"<<serial;
            }
        }
        if(equip.ladder)
            cout<<"\nлестница";
        if(equip.drill)
            cout<<"\nперфоратор";
        cout<<"\n\n";
    }else{
        cout<<"Сотрудника с таким номером нет в списке.\n\n";
    }
}
void ConsoleProgram::employeeEdit(){
    cout<<"Введите номер редактируемого сотрудника от 1 до 65535: ";
    int id=inputInt(1, 65535);
    if(list.idExist(id)){
        int code, newQuantity;
        vector<string> currentSerials;
        do{
            cout<<"Выберите, что изменить:\n"
                "\t1-коннекторы\t2-изолента\t3-переходники\t4-скобы\n"
                "\t5-большие стяжки\t6-маленькие стяжки\t7-батарейки\t8-перчатки\n"
                "\t9-бахилы\t10-кабель\t11-сим-карта\t12-роутер\n"
                "\t13-приставка\t14-лестница\t15-перфоратор\n"
                "\t16-изменить имя\t0-завершить редактирование\n-> ";
            code=inputInt(0, 16);
            switch(code){
                case 0: cout<<"Завершено.\n\n"; return ;
                case 1: list.employeeEditEquipQuantity(id, 1, inputQuantity()); cout<<"Количество изменено\n\n"; break;
                case 2: list.employeeEditEquipQuantity(id, 2, inputQuantity()); cout<<"Количество изменено\n\n"; break;
                case 3: list.employeeEditEquipQuantity(id, 3, inputQuantity()); cout<<"Количество изменено\n\n"; break;
                case 4: list.employeeEditEquipQuantity(id, 4, inputQuantity()); cout<<"Количество изменено\n\n"; break;
                case 5: list.employeeEditEquipQuantity(id, 5, inputQuantity()); cout<<"Количество изменено\n\n"; break;
                case 6: list.employeeEditEquipQuantity(id, 6, inputQuantity()); cout<<"Количество изменено\n\n"; break;
                case 7: list.employeeEditEquipQuantity(id, 7, inputQuantity()); cout<<"Количество изменено\n\n"; break;
                case 8: list.employeeEditEquipQuantity(id, 8, inputQuantity()); cout<<"Количество изменено\n\n"; break;
                case 9: list.employeeEditEquipQuantity(id, 9, inputQuantity()); cout<<"Количество изменено\n\n"; break;
                case 10: list.employeeEditEquipQuantity(id, 10, inputQuantity()); cout<<"Количество изменено\n\n"; break;
                case 11: {
                    do{
                        currentSerials=list.employeeInfo(id).sim;
                        cout<<"Текущий список сим-карт сотрудника:";
                        if(currentSerials.size()==0){
                            cout<<"\nСим-карты не выдавались";
                        }else
                            for(int i=0;i<currentSerials.size();i++){
                                cout<<'\n'<<i+1<<'\t'<<currentSerials[i];
                            }
                        cout<<"\nВыберите действие: 0-завершить, 1-добавить сим-карту, 2-удалить сим-карту: ";
                        code=inputInt(0, 2);
                        if(code==0){
                            cout<<"Список сим-карт сохранен. Возврат к сотруднику.\n\n";
                            break;
                        }else
                            switch(code){
                                case 1: {
                                    list.employeeAddEquipSerialNumber(id, 11, inputString());
                                    cout<<"Сим-карта добавлена.\n\n";
                                    break;
                                }
                                case 2: {
                                    cout<<"Введите позицию удаляемой сим-карты: ";
                                    list.employeeRemEquipSerialNumber(id, 11, inputInt(1, currentSerials.size())-1);
                                    cout<<"Сим-карта удалена.\n\n";
                                    break;
                                }
                            }
                    }while(true);
                    break;
                }
                case 12:{
                    do{
                        currentSerials=list.employeeInfo(id).router;
                        cout<<"Текущий список роутеров сотрудника:";
                        if(currentSerials.size()==0){
                            cout<<"\nРоутеры не выдавались";
                        }else
                            for(int i=0;i<currentSerials.size();i++){
                                cout<<'\n'<<i+1<<'\t'<<currentSerials[i];
                            }
                        cout<<"\nВыберите действие: 0-завершить, 1-добавить роутер, 2-удалить роутер: ";
                        code=inputInt(0, 2);
                        if(code==0){
                            cout<<"Список роутеров сохранен. Возврат к сотруднику.\n\n";
                            break;
                        }else
                            switch(code){
                                case 1: {
                                    list.employeeAddEquipSerialNumber(id, 12, inputString());
                                    cout<<"Роутер добавлен.\n\n";
                                    break;
                                }
                                case 2: {
                                    cout<<"Введите позицию удаляемого роутера: ";
                                    list.employeeRemEquipSerialNumber(id, 12, inputInt(1, currentSerials.size())-1);
                                    cout<<"Роутер удален.\n\n";
                                    break;
                                }
                            }
                    }while(true);
                    break;
                }
                case 13: {
                    do{
                        currentSerials=list.employeeInfo(id).box;
                        cout<<"Текущий список приставок сотрудника:";
                        if(currentSerials.size()==0){
                            cout<<"\nПриставки не выдавались";
                        }else
                            for(int i=0;i<currentSerials.size();i++){
                                cout<<'\n'<<i+1<<'\t'<<currentSerials[i];
                            }
                        cout<<"\nВыберите действие: 0-завершить, 1-добавить приставку, 2-удалить приставку: ";
                        code=inputInt(0, 2);
                        if(code==0){
                            cout<<"Список приставок сохранен. Возврат к сотруднику.\n\n";
                            break;
                        }else
                            switch(code){
                                case 1: {
                                    list.employeeAddEquipSerialNumber(id, 13, inputString());
                                    cout<<"Приставка добавлена.\n\n";
                                    break;
                                }
                                case 2: {
                                    cout<<"Введите позицию удаляемой приставки: ";
                                    list.employeeRemEquipSerialNumber(id, 13, inputInt(1, currentSerials.size())-1);
                                    cout<<"Приставка удалена.\n\n";
                                    break;
                                }
                            }
                    }while(true);
                    break;
                }
                case 14: {
                    cout<<"Выдать сотруднику лестницу? ";
                    list.employeeEditEquipQuantity(id, 14, int(choice()));
                    cout<<"Статус изменен\n\n";
                    break;
                }
                case 15: {
                    cout<<"Выдать сотруднику перфоратор? ";
                    list.employeeEditEquipQuantity(id, 15, int(choice()));
                    cout<<"Статус изменен\n\n";
                    break;
                }
                case 16: list.employeeEditName(id, inputString()); cout<<"Имя изменено\n\n"; break;
            }
        }while(true);
    }else{
        cout<<"Сотрудника с таким номером нет в списке.\n\n";
    }
}
void ConsoleProgram::checkLadder(){
    vector<int> ladderkeepers=list.checkLadder();
    if(ladderkeepers.size()==0){
        cout<<"Лестниц ни у кого нет\n\n";
    }else{
        cout<<"Сотрудники с лестницами:\n";
        for(int id: ladderkeepers){
            cout<<id<<' '<<list.getNameById(id)<<'\n';
        }
        cout<<'\n';
    }
}
void ConsoleProgram::checkDrill(){
    vector<int> drillkeepers=list.checkDrill();
    if(drillkeepers.size()==0){
        cout<<"Перфоратора ни у кого нет\n\n";
    }else{
        cout<<"Сотрудники с перфораторами:\n";
        for(int id: drillkeepers){
            cout<<id<<' '<<list.getNameById(id)<<'\n';
        }
        cout<<'\n';
    }
}