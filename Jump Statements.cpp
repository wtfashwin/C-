/*Jump Statements
 You are given an integer N, print all the odd values, for all i, where 0 <= i < N. Print each values on a seperate line.
Note: Use continue statement
*/

#include<iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            continue; 
        }
        cout << i << endl;
    }

    return 0;
}
