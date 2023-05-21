#include "EQ_Sys.h"
//Меню выбора задачи
int Menu(int size);

int main(){
    ConsoleProgram App;
    do{
        switch(Menu(App.list.size())){
            case 0 : {  //Закрытие программы
                cout<<"Работа программы завершена. Нажмите любую клавишу для закрытия окна консоли.";
                cin.clear();
                cin.ignore(100, '\n');//Задержка закрытия консоли    
                return 0;
            }
            case 1 : App.listLoad(); break;
            case 2 : App.listSave(); break;
            case 3 : App.listPrint(); break;
            case 4 : App.listClear(); break;
            case 5 : App.employeeInsert(); break;
            case 6 : App.employeeDelete(); break;
            case 7 : App.employeeInfo(); break;
            case 8 : App.employeeEdit(); break;
            case 9 : App.checkLadder(); break;
            case 10: App.checkDrill(); break;
        }
    }while(true);
    return 1;
}

int Menu(int size){
    cout<<"Программа для работы со списками оборудования сотрудников\n"
        "Текущий список содержит "<<size<<" сотрудник"
        //Подбор суффикса числительного
        <<((size>10&&size<20)?"ов":size%10>4?"ов":size%10==0?"ов":size%10>1?"а":"")<<"\n"
        "Команды:\t1-Загрузить список из файла\t2-Сохранить список в файл\n"
        "\t\t3-Отобразить список сотрудников\t4-Очистить список\n"
        "\t\t5-Добавить сотрудника\t\t6-Удалить сотрудника\n"
        "\t\t7-Просмотр данных сотрудника\t8-Редактировать данные сотрудника\n"
        "\t\t9-Проверка выдачи лестницы\t10-Проверка выдачи перфоратора\n"
        "Для завершения работы введите 0\n-> ";
    int menu=inputInt(0, 10);
    return menu;
}