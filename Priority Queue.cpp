/* Priority Queue: In priority queue, each element in the queue has its own priority. When we insert item into queue, we have to assign priority value with it.

Given an array of integers A representing the length of ropes.

You need to connect these ropes into one rope. The cost of connecting two ropes is equal to the sum of their lengths.

Find and return the minimum cost to connect these ropes into one rope.

Constraints

1 <= length of the array <= 100000
1 <= A[i] <= 1000
Input Format

The only argument given is the integer array A.
Output Format

Return an integer denoting the minimum cost to connect these ropes into one rope.
Sample Input

A = [1, 2, 3, 4, 5]
Sample Output

33
*/

int solve(vector<int> &A){
    priority_queue<int, vector<int>, greater<int>> pq(A.begin(),A.end());
    int res =0;
    while(pq.size()>1){
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();
        res += first+second;
        pq.push(first+second);
    }
    return res;
}
