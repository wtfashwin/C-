/*Math library
You are given two float variables A and B, perform the operations defined in comments in the editor below.
    // Calculate the sum of the cube of A and B, and store it in "cube_val"
    // Calculate the square root of "cube_val" and store it in "sq_val"
    // Calculate the sine of "sq_val" and print the result
*/

#include<iostream>
#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main()  {
    float A = 12.56, B = 5.12;
    
    float cube_val = pow(A, 3) + pow(B, 3);
    cout << cube_val << endl;

    float sq_val = sqrt(cube_val);
    cout << sq_val << endl;


    cout << sin(sq_val) << endl;

    return 0;
}
