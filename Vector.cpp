/* Vector : Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container.
Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators.

First line of the input contains an integer N denoting the number of integers.
Second line contains N space-separated integers. 
Third line contains an integer X denoting the index(0-based) of the N integers which needs to be deleted.

Your task is to print the N-1 integers in sorted order (ascending). Each integer in a new line.

Constraints

1 <= N <= 105  
0 <= X < N
Sample Input

5
10 5 2 3 10
2
Sample Output

3
5
10
10

*/


#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()  {
int N;
std::cin>>N;

std::vector<int>v(N);
for (int i=0; i<N; ++i){
    std::cin>>v[i];
}
     int X;
    std::cin >> X;

    v.erase(v.begin() + X);

    std::sort(v.begin(), v.end());

    for (int i = 0; i < N - 1; ++i) {
        std::cout << v[i] << std::endl;
    }
    return 0;
}