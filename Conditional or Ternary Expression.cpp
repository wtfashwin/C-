/*Conditional or Ternary Expression
Given two integer x and y, using Conditional or Ternary expression, print “Robin” if the value of x is less than or equal to y else print “Rahul” (without quotes).
Sample Input:

x = 10
y = 9
Sample Output:

Rahul
 */

#include<iostream>

using namespace std;

int main()  {
    int x, y;
    cin >> x >> y;

    cout << (x <= y ? "Robin" : "Rahul") << endl;
    
    return 0;
}
