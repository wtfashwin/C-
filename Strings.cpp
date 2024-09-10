/*C++ provides a nice alternative data type to manipulate strings, and the data type is conveniently called string.

You are given two strings, A and B, separated by a new line. Each string will consist of lower case Latin characters (‘a’-‘z’).

Output three lines:

First line print two space-separated integers, representing the length of A and B respectively.
Second line print the string produced by concatenating A and B (A+B).
Third line print two strings separated by a space, A' and B'. A' and B' are the same as A and B, respectively, except that their first characters are swapped.

Sample input:
abcd
ef

Sample Output:
4 2
abcdef
ebcd af

*/

/*
#include<iostream>
#include<string>
using namespace std;
*/

int main()  {
    string A, B;
    cin>>A>>B;
    cout<<A.size()<<" "<<B.size()<<endl;
    cout<<A+B<<endl;
    swap(A[0], B[0]);
    cout<<A<<" "<<B<<endl;
    return 0;
}
