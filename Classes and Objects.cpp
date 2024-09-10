/*Classes and Objects : 
Classes are the building blocks of programs built using the object-oriented methodology. 
Such programs consist of independent, self-managing modules and their interactions. 
An object is an instance of such module, and a class is its definition.

We have a class defined for Student. Create a function set_variable which takes three parameters name(string), age(int), rollno(int) and assign values to the member variables. Also, create a function print_variable which prints name, age, rollno each in new line.


*/

/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
*/

class Student{
    string name;
    int age;
    int rollno;
public:
    // Create funtions here with the name given
    void set_variable(string nam, int ag, int roll){
        name = nam;
        age = ag;
        rollno = roll;
    }
    void print_variable(){
        cout << name << endl;
        cout << age << endl;
        cout << rollno << endl; 
    }
};



/*
int main()  {
    Student obj1;
    obj1.set_variable("Robin", 15, 10);
    Student obj2;
    obj2.set_variable("Rahul", 20, 14);
    obj1.print_variable();
    obj2.print_variable();
    return 0;
}
*/