/* An array is a collection of similar data types under the same name.

    Complete the given function named ‘reverseArray’ containing an integer array ‘arr’ and length of arr N. Reverse the array ‘arr’.


*/

/*
#include<iostream>
using namespace std;
*/

void reverseArray(int arr[], int N){
    for(int i=0,j=N-1; i<=j; i++, j--)
    {
        swap(arr[i],arr[j]);
    }
    
}


/*
int main()  {
    int N;
    cin>>N;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin>>arr[i];
    }
    reverseArray(arr, N);
    for(int i = 0; i < N; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
*/