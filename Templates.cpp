/*Templates : mechanism by which C++ implements the generic concept.

define a Template Class type function index_of_largest that will generalize the function such that it finds maximum value index for both int and double type array input values.

The function code for finding the index of the largest value in an array:

Takes two values:

Array of values
Size of array
Note: All values in the array will be distinct

Sample Input

int array[] = {4, 2, 10, 13, 2}
double array[] = {2.4, 5.2, 3.1, 1.5}
Sample Output

// You have to return the index
3
1*/

#include <iostream>
using namespace std;

template <class T>
int index_of_largest(T a[], int sze)
{
    T max = a[0];
    int index_of_max = 0;
    for (int index = 1; index < sze; index++){
        if (a[index] > max)
        {
            max = a[index];
            index_of_max = index;
        }
    }
    return index_of_max;
}




/*
int main()  {
    int n;
    cin>>n;
    int arr_int[n];
    for(int i = 0; i < n; i++){
        cin>>arr_int[i];
    }
    int res = index_of_largest<int>(arr_int, n);
    cout<<res<<endl;
    
    cin>>n;
    double arr_double[n];
    for(int i = 0; i < n; i++){
        cin>>arr_double[i];
    }
    res = index_of_largest<double>(arr_double, n);
    cout<<res<<endl;
    return 0;
}
*/