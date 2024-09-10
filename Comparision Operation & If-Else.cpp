/* Comparision Operation & If-Else
    Given an integer num denoting percentage of a student, calculate the grade according to the below rules:

If num >= 90, grade A.
If num >= 80, grade B.
If num >= 70, grade C.
If num >= 60, grade D.
If num >= 50, grade E.
Else grade will be F.
Print a string consisting of single character denoting the grade.

Sample Input

59
Sample Output
E
*/

#include<iostream>

using namespace std;

int main()  {
    int num;
    cin>>num;
    if(num >= 90){
        cout<<'A'<<endl;
    }
    else if(num >= 80){
        cout<<'B'<<endl;
    }
    else if(num >= 70){
        cout<<'C'<<endl;
    }
    else if(num >= 60){
        cout<<'D'<<endl;
    }
    else if(num >= 50){
        cout<<'E'<<endl;
    }
    else{
        cout<<'F'<<endl;
    }
    return 0;
}