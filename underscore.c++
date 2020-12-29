Mr. RAM developed a logic in JavaScript but client requested him to channge his logic in C++, so he decided to write a logic to Convert
a JavaScript variable into C++ variable as per specified condition(s), C++ variables allow underscore whereas Javascript variables do not allow underscore. 
if a variable in Javascript is defined as- myJavascriptVariable convert into C++ (insert _ before any capital letter and convert the capital letter into small letter) 
my_javascript_variable

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin>>s;
    string word = "";
    int l = s.length();
    for(int i=0;i<l;i++)
    {
        char c = s.at(i);
        if( (int)c > 90)
        {
            word = word + c;
        }
        else
        {
            word = word + '_' + (char)((int)c + 32);
        }
    }
    cout<<word<<'\n';  
    return 0;
}
