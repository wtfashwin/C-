/*Structures : Structure is a collection of variables of different data types under a single name. It is similar to a class in that, both holds a collecion of data of different data types.

Create a structure named ‘student’, containing three members: name (string), rollno(int) and marks(int).

Set name to "Robin"
Set rollno to 11
Set marks to 86
Note: Variable name for structure ‘student’ should be s1.

*/



/*
#include<iostream>
#include<string>
using namespace std;
*/
struct student
{
   string name;
   int rollno;
   int marks;
};

// Create Structure named 'student'
int main()  {
    // Your code goes here
    student s1;
    s1.name = "Robin";
    s1.rollno = 11;
    s1.marks = 86;
    // Don't change the below code
    cout<<s1.name<<endl;
    cout<<s1.rollno<<endl;
    cout<<s1.marks<<endl;
    return 0;
}