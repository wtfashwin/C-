/* Maps : 

Maps are associative containers that store elements formed by a combination of a key value and a mapped value, following a specific order.

There are some boxes and each having a unique id. You are given Q queries of three types to be performed on the boxes.

1 X Y : Add the Y balls to the box whose id is X.
2 X : Remove all balls from the box whose id is X.
3 X : Print the number of balls in the box id X.
Input Format

The first line of the input contains Q where Q is the number of queries.
The next Q lines contain 1 query each. The first integer, type of each query is the type of the query.
If query is of type 1, it consists of two integer X and Y.
If query is of type 2 or 3, it consists of a single integer X where X is the id of box.
Constraints

1 <= Q <= 105 
1 <= Y <= 104 
1 <= X <= 109
Sample Input

7
1 3 5
1 2 1
2 4
3 3
2 3
3 3
3 2
Sample Output

5
0
1
*/

#include<iostream>
#include<map>
using namespace std;

int main()  {    
    int q;
    cin>>q;
    map<int,int>m;
     while(q--){
        int type,x,y;
        cin>>type>>x;
        if(type==1){
            cin>>y;
            m[x]+=y;
        }
        else if(type==2){
            m.erase(x);
        }else{
            cout<<m[x]<<endl;
        }
    }
    
    return 0;
}