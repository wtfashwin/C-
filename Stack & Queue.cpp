/* Stack & Queue : 
    Given an array of integers A. There is a sliding window of size B which is moving from the very left of the array to the very right.
 You can only see the B numbers in the window. Each time the sliding window moves rightwards by one position.
 You have to find the maximum for each window and print it in a new line.
Return an array C, where C[i] is the maximum value in the array from A[i] to A[i+B-1].
Refer to the given example for clarity.

Constraints

1 <= B <= |A|<= 106
Input Format

The first argument given is the integer array A.
The second argument given is the integer B.
Output Format

Return an array C, where C[i] is the maximum value of from A[i] to A[i+B-1].
Sample Input

A = [1, 3, -1, -3, 5, 3, 6, 7]
B = 3
Sample Output

[3, 3, 5, 5, 6, 7]
*/

/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
*/

// Complete the given function
vector<int> solve(vector<int> &A, int B){
    vector<int> C;
    int maxVal;
    for(int i=0;i<A.size()+1-B;i++){
        maxVal=A[i];
        for(int j = 1; j<B;j++){
            if(A[i+j]>maxVal){
                maxVal=A[i+j];
            }
        }
        C.push_back(maxVal);
    }
    return C;
    
}


/*
int main()  {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for(int i = 0; i < n; i++){
            cin>>A[i];
        }
        int B;
        cin>>B;
        vector<int> ans = solve(A, B);
        for(int i = 0; i < ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/