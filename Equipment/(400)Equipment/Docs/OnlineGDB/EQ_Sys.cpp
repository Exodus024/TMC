#include "EQ_Sys.h"
//список сотрудников
Employee & EmployeeList::getEmployeeById(int id){ //возвращает сотрудника по ссылке
    for(Employee &elem: employee_list){
        if(elem.id==id)
            return elem;
    }
    Employee voidEmployee(0, "");
    return voidEmployee; //при незащищенной версии вернет пустого сотрудника
}
Employee EmployeeList::getEmployeeById(int id) const{ //возвращает сотрудника по значению
    for(Employee elem: employee_list){
        if(elem.id==id)
            return elem;
    }
    Employee voidEmployee(0, "");
    return voidEmployee; //при незащищенной версии вернет пустого сотрудника
}
int EmployeeList::size() const{
    return employee_list.size();
}
bool EmployeeList::idExist(int id) const{
    for(Employee elem: employee_list){
        if(elem.id==id)
            return true;
    }
    return false;
}
void EmployeeList::listLoad(string filename){
    //удаление текущего списка
    listClear();
    //открытие и считывание файла
    int id, ladderStatus, drillStatus;
    string name, serialData, number;
    fstream Datafile(filename, ios::in);
    while(!Datafile.eof()){ //считать по одной все записи
        //считать номер сотрудника
        Datafile>>id;
        //переход к строке с именем
        Datafile.get();
        //считать строку с именем
        getline(Datafile, name, '\n');
        Employee elem(id, name);
        //считать значения оборудования
        Datafile>>elem.equipment_list.connectors
            >>elem.equipment_list.insulation
            >>elem.equipment_list.RJ45
            >>elem.equipment_list.clips
            >>elem.equipment_list.large_ties
            >>elem.equipment_list.small_ties
            >>elem.equipment_list.battery
            >>elem.equipment_list.gloves
            >>elem.equipment_list.shoe_covers
            >>elem.equipment_list.cable
            >>ladderStatus
            >>drillStatus;
        elem.equipment_list.ladder=bool(ladderStatus);
        elem.equipment_list.drill=bool(drillStatus);
        //переход к строкам серийных номеров
        Datafile.ignore(100, '\n');
        //считать и обработать три строки серийных номеров сим-карт, роутеров и приставок
        getline(Datafile, serialData, '\n');
        istringstream serialSim(serialData);
        while(serialSim>>number){
            elem.equipment_list.sim.push_back(number);
        }
        getline(Datafile, serialData, '\n');
        istringstream serialRouter(serialData);
        while(serialRouter>>number){
            elem.equipment_list.router.push_back(number);
        }
        getline(Datafile, serialData, '\n');
        istringstream serialBox(serialData);
        while(serialBox>>number){
            elem.equipment_list.box.push_back(number);
        }
        //если файл закончился или с ошибкой, прекратить обработку
        if(Datafile.fail()){
            break;
        }
        //записать считанного сотрудника в список
        employee_list.push_back(elem);
    }
    Datafile.close();
}
void EmployeeList::listSave(string filename) const{
    fstream Storefile(filename, ios::app);
    //записать сотрудников по одному
    for(Employee elem: employee_list){
        Storefile<<elem.id<<' '<<elem.name<<'\n'
            <<elem.equipment_list.connectors<<' '
            <<elem.equipment_list.insulation<<' '
            <<elem.equipment_list.RJ45<<' '
            <<elem.equipment_list.clips<<' '
            <<elem.equipment_list.large_ties<<' '
            <<elem.equipment_list.small_ties<<' '
            <<elem.equipment_list.battery<<' '
            <<elem.equipment_list.gloves<<' '
            <<elem.equipment_list.shoe_covers<<' '
            <<elem.equipment_list.cable<<' '
            <<int(elem.equipment_list.ladder)<<' '
            <<int(elem.equipment_list.drill)<<'\n';
        //запись значений номеров оборудования без пробелов (замена на _ )
        for(string serial: elem.equipment_list.sim){
            replace(serial.begin(), serial.end(), ' ', '_');
            Storefile<<serial<<' ';
        }
        Storefile<<'\n';
        for(string serial: elem.equipment_list.router){
            replace(serial.begin(), serial.end(), ' ', '_');
            Storefile<<serial<<' ';
        }
        Storefile<<'\n';
        for(string serial: elem.equipment_list.box){
            replace(serial.begin(), serial.end(), ' ', '_');
            Storefile<<serial<<' ';
        }
        Storefile<<'\n';
    }
    Storefile.close();
    cout<<"Список сохранен.\n\n";
}
vector<int> EmployeeList::getNumbers() const{
    vector<int> Ids;
    for(Employee elem: employee_list){
        Ids.push_back(elem.id);
    }
    return Ids;
}
string EmployeeList::getNameById(int id) const{
    string name=getEmployeeById(id).name;
    return name; //при незащищенной версии вернет пустую строку в случае ошибки
}
void EmployeeList::listClear(){
    employee_list.clear();
}
void EmployeeList::employeeInsert(int id, string name){
    if(idExist(id)){
        return ;
    }
    Employee newEmployee(id, name);
    employee_list.push_back(newEmployee);
}
void EmployeeList::employeeDelete(int id){
    for(int i=0;i<employee_list.size();i++){
        if(id==employee_list[i].id){
            employee_list.erase(employee_list.begin()+i);
            return ;
        }
    }
}
Equipment EmployeeList::employeeInfo(int id) const{
    return getEmployeeById(id).equipment_list; //при незащищенной версии вернет нулевой список
}
void EmployeeList::employeeEditEquipQuantity(int id, int type, int quantity){
    Employee &elem=getEmployeeById(id);
    switch(type){
        case 1: elem.equipment_list.connectors=quantity; break;
        case 2: elem.equipment_list.insulation=quantity; break;
        case 3: elem.equipment_list.RJ45=quantity; break;
        case 4: elem.equipment_list.clips=quantity; break;
        case 5: elem.equipment_list.large_ties=quantity; break;
        case 6: elem.equipment_list.small_ties=quantity; break;
        case 7: elem.equipment_list.battery=quantity; break;
        case 8: elem.equipment_list.gloves=quantity; break;
        case 9: elem.equipment_list.shoe_covers=quantity; break;
        case 10:elem.equipment_list.cable=quantity; break;
        case 14:elem.equipment_list.ladder=bool(quantity); break;
        case 15:elem.equipment_list.drill=bool(quantity); break;
        default: break;
    }
}
void EmployeeList::employeeAddEquipSerialNumber(int id, int type, string serial){
    Employee &elem=getEmployeeById(id);
    switch(type){
        case 11: elem.equipment_list.sim.push_back(serial); break;
        case 12: elem.equipment_list.router.push_back(serial); break;
        case 13: elem.equipment_list.box.push_back(serial); break;
        default: break;
    }
}
void EmployeeList::employeeRemEquipSerialNumber(int id, int type, int position){
    Employee &elem=getEmployeeById(id);
    switch(type){
        case 11: {
            if((position>=0)&&(position<elem.equipment_list.sim.size())){
                elem.equipment_list.sim.erase(elem.equipment_list.sim.begin()+position);
            }
            break;
        }
        case 12: {
            if((position>=0)&&(position<elem.equipment_list.router.size())){
                elem.equipment_list.router.erase(elem.equipment_list.router.begin()+position);
            }
            break;
        }
        case 13: {
            if((position>=0)&&(position<elem.equipment_list.box.size())){
                elem.equipment_list.box.erase(elem.equipment_list.box.begin()+position);
            }
            break;
        }
        default: break;
    }
}
void EmployeeList::employeeEditName(int id, string newName){
    getEmployeeById(id).name=newName;
}
vector<int> EmployeeList::checkLadder() const{
    vector<int> ladderkeepers;
    for(Employee elem: employee_list){
        if(elem.equipment_list.ladder)
            ladderkeepers.push_back(elem.id);
    }
    return ladderkeepers;
}
vector<int> EmployeeList::checkDrill() const{
    vector<int> drillkeepers;
    for(Employee elem: employee_list){
        if(elem.equipment_list.drill)
            drillkeepers.push_back(elem.id);
    }
    return drillkeepers;
}