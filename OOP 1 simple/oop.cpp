#include <iostream>
using namespace std;

class Employee{

public :
 string Name;
 string Comapny;
 int Age;
// Model for employee;


    void IntroduceYourSelf(){
        cout << "Name -" << Name << endl;
        cout << "Age -" << Age << endl;
        cout << "company -" << Comapny << endl;

    }
 

    Employee(string name, int age , string company){
        Name=name;
        Age = age;
        Comapny = company;

    }

};

int main(){


 Employee employee1 = Employee("Srijith yaparathna", 23,"Apple");


employee1.IntroduceYourSelf();



    return 0;
}