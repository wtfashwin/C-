/*Custom Comparator are used to compare the objects of user-defined classes.
    You are given a function sortArray which takes an array of pairs, sort the given array in ascending order of their sum.
*/

#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)

bool comp(pair<int, int> a, pair<int, int> b){
if((a.first + a.second) < (b.first + b.second)){
return true;
}
return false;
}

void sortArray(vector<pair<int, int>> &A){
sort(A.begin(), A.end(), comp);
}