/*Passing parameters
Create a function named “compute” which takes three arguments A, B, C passed by reference and has a return type void. 
Update the value of each integer to its respective cube i.e  A = A3, B = B3, C = C3.
*/

#include<iostream>
using namespace std;
void compute(int &A, int &B, int &C) {
    A = A * A * A;
    B = B * B * B;
    C = C * C * C;
}