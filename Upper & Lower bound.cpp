/* Upper & Lower bound : lower_bound() method in C++ is used to return an iterator pointing to the first element in the range [first, last) which has a value not less than val.
 This means that the function returns the index of the next smallest number just greater than or equal to that number. If there are multiple values that are equal to val, lower_bound() returns the index of the first such value.

ou are given N integers in sorted order not necessarily distinct. Also, you are given Q queries. In each query, you will be given an integer X and you have to tell whether that integer is present in the array. If so, you have to tell at which index (leftmost) it is present and if it is not present, you have to tell the rightmost index at which the current integer can be inserted such that the array remains sorted.

NOTE: You are not required to insert the value in the array. Array is not changed at any point.

Input Format

First line contains an integer N.
Second line contains N space-separarted integer in sorted order.
Third line contains an integer Q, the number of queries. 
Each of the next Q lines contain a single integer X.

Output Format

For each query, print the index as described.

Sample Input

6
5 15 21 21 22 22
5
10
21
23
3
22
Sample Output

1
2
6
0
4
 */


#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int main()  {
    int N;
    std::cin >> N;

    std::vector<int> sortedArray(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> sortedArray[i];
    }

    int Q;
    std::cin >> Q;

    for (int i = 0; i < Q; ++i) {
        int X;
        std::cin >> X;

        auto lower = std::lower_bound(sortedArray.begin(), sortedArray.end(), X);

        if (lower != sortedArray.end() && *lower == X) {
            std::cout << (lower - sortedArray.begin()) << std::endl;
        } else {
            std::cout << (lower - sortedArray.begin()) << std::endl;
        }
    }

    return 0;
}