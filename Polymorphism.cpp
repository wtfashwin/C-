/*The term Polymorphism means the ability to take many forms. It occurs if there is a hierarchy of classes which are all related to each other by inheritance.

Your task is to create two functions with same name “compute” and return type int. One will take two integer parameters and return absolute difference between them. Other will take one integer parameter and return the square of that number.


*/

/*
#include<iostream>
using namespace std;
*/

int compute(int a, int b){

     int x = abs(a-b);
     return x;
}
int compute(int c){
      int z = c*c;
      return z;
}


/*
int main()  {
    int x,y;
    cin>>x>>y;
    cout<<compute(x,y)<<endl;
    int z;
    cin>>z;
    cout<<compute(z)<<endl;
    return 0;
}
*/