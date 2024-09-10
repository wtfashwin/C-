#include <iostream>
using namespace std;
int main() {

    int a, b;
    cout << " Enter 2 numbers: ";
    cin >> a >> b;

    if(a > b){
        cout << a << "is large" << b;
    }
    else if(b > a){
        cout << b << "is large" << a;
    }
    else{
        cout << "Equal";
    }
}
