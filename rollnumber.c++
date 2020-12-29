Suzy’s old friend ,Lucy, has come to meet her while she is in school. However, Lucy is only aware of Suzy’s roll number.
Suppose A1, A2 … AN is the max roll number of Students in 1st, 2nd… Nth rooms respectively. So, students with roll number 1 to A1 are in room 1,,
similarly in 2nd room students having roll number A[1] + 1 to A[2] … and 
students having roll number in Nth room will be from A[N-1] + 1 to A[N]. Help Lucy find out the room number where she can find Suzy.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, query;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
     cin>>query;
    while(query > 0)
    {
        int rol;
        cin>>rol;
        int sum = 0, roomNo=0;
        for(int i=0;i<n;i++)
        {
            sum = sum + a[i];
            if(rol <= sum)
            { roomNo = i + 1;
               break;
            }
        }
        query--;
        cout<<roomNo<<'\n';
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
