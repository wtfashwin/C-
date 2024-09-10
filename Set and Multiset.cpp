/* Set and Multiset : 

You will be given Q queries. Each query is one of the following three types:

1 x : Add an element x to the set.
2 x : Delete an element x from the set. (If the number x is not present in the set, then do nothing).
3 x : If the number x is present in the set, then print "Yes"(without quotes) else print "No"(without quotes).
Alfter processing all queries, if the size of set is greater than 0, print each element (sorted order) in the new line.

Input Format:

First line of the input contains an integer Q denoting the number of queries.
 Next Q lines consists of two integers y and x where y is the type of the query and x is an integer.

Constraints

1 <= Q <= 105    
1 <= y <= 3
1 <= x <= 109
Sample Input

7  
1 5
1 4
1 6
1 5
3 4
2 4
3 4
Sample Output

Yes
No
5
6
*/

#include<iostream>
#include<set>
#include<iterator>
using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    set<int> s;
    int Q;
    cin>>Q;
    while(Q){
        int choice,input;
        cin>>choice;
        cin>>input; //x
        if(choice==1){
            s.insert(input);
        }
        else if(choice==2){
            auto itr=s.find(input);
            if(itr!=s.end()){
                 s.erase(itr);
            }
        }
        else if(choice==3){
            auto  itr = s.find(input);
            if(itr!=s.end()){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
        --Q;
    }
    if(s.size()!=0){
        for(auto i:s){
     cout<<i<<endl;
     }
    }
   
    return 0;
}