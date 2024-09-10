/*Pointers: special kind of variable that stores the address in memory of another variable and can be used to manipulate that variable.

You are given a function solve which has the following parameters:

int *A: an integer
int *B: an integer
The function is declared with a void return type, so there is no value to return.
Modify the values in memory so that A contains their sum and B contains their absolute difference.

*/

/*
#include<iostream>
using namespace std;
*/

void solve(int *A, int *B){
    *A=*A+*B;

    *B=abs(*A-2*(*B));
}



/*
int main()  {
    int A, B;
    int *pA = &A, *pB = &B;
    cin>>A>>B;
    solve(pA, pB);
    cout<<A<<endl;
    cout<<B<<endl;
    return 0;
}
*/