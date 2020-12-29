#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int d;
    cin>>d;
    int a=100,b=120,c=80,a1=100,b1=120,c1=80;
    for(int i=2;i<=d;i++)
    {
        a1=a1+a+10*(i-1);
        b1=b1+b+5*(i-1);
        c1=c1+c+20*(i-1);
        
    }
    cout<<a1<<endl<<b1<<endl<<c1;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
