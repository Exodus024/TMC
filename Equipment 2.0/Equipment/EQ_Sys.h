#pragma once
#include <iostream>
#include <fstream>
#include <vector>
//#include <bits/stdc++.h>
#include <string>

#include <sstream>
#include <algorithm>

using namespace std;
//дополнительные функции консоли
bool choice(); //дополнительная функция - вопрос к пользователю Yes или No
int inputInt(int min, int max); //дополнительная функция - ввод числа с проверкой ошибок от min до max
int inputQuantity(); //дополнительная функция - запрос ввода количества
string inputString(); //дополниетльная функция - запрос ввода строки

struct SEquipment{ //список оборудования сотрудника (со значениями по умолчанию)
    int connectors=0;
    int insulation=0;
    int RJ45=0;
    int clips=0;
    int large_ties=0;
    int small_ties=0;
    int battery=0; 
    int gloves=0;
    int shoe_covers=0;
    int cable=0;
    vector<string> sim;
    vector<string> router;
    vector<string> box;
    bool ladder=false;
    bool drill=false;
};
class Employee{ //объект сотрудник
    public:
        int id; //уникальный номер сотрудника
        string name; //строка ФИО
        SEquipment equipment_list; //список оборудования
        Employee(int newId, string newName){ //конструктор создания нового сотрудника
            id=newId;
            name=newName;
        }

        void SetEquipment(SEquipment e) { equipment_list = e; }
        SEquipment GetEquipment() { return equipment_list; }
};

class EmployeeList{ //список сотрудников
    private:
        vector<Employee> employee_list;
        Employee & getEmployeeById(int id); //найти ссылку на сотрудника по номеру
        Employee getEmployeeById(int id) const;// найти сотрудника по имени
    public:
        int size() const; //количество сотрудников
        bool idExist(int id) const; //Проверка существования сотрудника с таким номером
        void listLoad(string filename); //загрузить список из файла
        void listSave(string filename) const; //сохранить список в файл
        vector<int> getNumbers() const; //выдать список номеров всех сотрудников
        string getNameById(int id) const; //Получить имя сотрудника по номеру
        void listClear(); //стереть список внутри программы
        void employeeInsert(int id, string name); //добавить сотрудника в список
        void employeeDelete(int id); //удалить сотрудника из списка по номеру
        SEquipment employeeInfo(int id) const; //показать оборудование сотрудника
        void employeeEditEquipQuantity(int id, int type, int quantity); //редактировать данные расходного оборудования сотрудника
        void employeeAddEquipSerialNumber(int id, int type, string serial); //добавить оборудование с серийным номером
        void employeeRemEquipSerialNumber(int id, int type, int position); //удалить оборудование с серийным номером с заданной позиции
        void employeeEditName(int id, string newName); //редактировать имя сотрудника
        vector<int> checkLadder() const; //выдать номера сотрудников с лестницей
        vector<int> checkDrill() const; //выдать номера сотрудников с перфоратором

        vector<Employee>& Data() { return employee_list; }
        Employee& operator [] (int i) { return employee_list[i]; }
};

class ConsoleProgram{ //консольная оболочка
    public:
        EmployeeList list;
        void listLoad();
        void listSave();
        void listPrint();
        void listClear();
        void employeeInsert();
        void employeeDelete();
        void employeeInfo();
        void employeeEdit();
        void checkLadder();
        void checkDrill();
};