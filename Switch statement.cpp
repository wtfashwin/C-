/*Switch statement
Given the weekday number, print the weekday name corresponding to it.

Note: Day 1 is Monday. First letter is always Capital.

Sample Input

4
Sample Output

Thursday

*/

#include<iostream>

using namespace std;

int main()  {
    int weekday;
    cin>>weekday;
    switch (weekday) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
    }
        return 0;
}