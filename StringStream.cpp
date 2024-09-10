/*Stringstream is a stream class to operate on strings. It implements input/output operations on memory (string) based streams.
Given a string A of comma delimited integers, print each integer in a separate line.

Sample Input:

A = 33,7,65

Sample Output:
33
7
65
*/



/*
#include<iostream>
#include<sstream>
using namespace std;
*/

int main()  {
    string A;
    cin>>A;
    
    istringstream ss(A);
    string number;
    while(getline(ss,number,',')){
        cout << number << endl;
    }
    
    return 0;
}
