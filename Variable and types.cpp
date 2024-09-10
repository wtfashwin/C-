/*You have to input 5 space-separated values: int, long, char, float and double respectively. 
Print each value on a new line in the same order it is received as input. 
Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.
Example Input:
5 1234567891231 z 24.23 1214523.028352 

Example Output:
5
1234567891231
z
24.230
1214523.028352000
*/

#include<iostream>
#include <iomanip> 
using namespace std;

int main()  {
    int i; 
    long l;
    char c; 
    float f; 
    double d; 
    
    cin >> i >> l >> c >> f >> d >> endl;   
    
    cout << i << endl;
    cout << l << endl;
    cout << c << endl;
    cout<< fixed << setprecision(3) << f << endl;
    cout << fixed << setprecision(9) << f << endl; 
    
    return 0;
}