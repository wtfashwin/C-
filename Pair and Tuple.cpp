/* Pair and Tuple : You are given two functions findMaxMin and compute. Return the values as described in the comments in the editor below.
*/

#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

pair<int, int> findMaxMin(vector<int> &A){
    int Max = A[0];
    int Min = A[0];
    for (int i = 1; i < A.size(); i++){
        if (Max < A[i]){
            Max = A[i];
        }
        if (Min > A[i]){
            Min = A[i];
        }
    }
   
    pair<int, int> ans(Max, Min);
    return ans;
}

tuple<int, int, int> compute(vector<int> &A){
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;

    for (int i = 0; i < A.size(); i++){
        sum1 += A[i];
    }
    for (int i = 0; i < A.size(); i++){
        if (A[i] % 2 == 0){
            sum2 += A[i];
        }
    }
    for (int i = 0; i < A.size(); i++){
        if (A[i] % 2 != 0){
            sum3 += A[i];
        }
    }
   
    tuple<int, int, int> ans(sum1, sum2, sum3);
    return ans;
}