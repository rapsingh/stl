#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,string>p={10,"abcd"};
    //shallow copy
    pair<int,string>p1=p;
    p1.first=100;
    cout<<"p.first = "<<p.first<<" \t"<<"p1.first = "<<p1.first<<endl;
    //deep copy
    pair<int,string>&p2=p;
    p2.first=200;
    
    cout<<"p.first = "<<p.first<<" \t"<<"p1.first = "<<p2.first<<endl;
    return 0;
}