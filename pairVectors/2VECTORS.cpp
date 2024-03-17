#include<bits/stdc++.h>
using namespace std;
void printV(vector<int> &v)
{
    cout<<"\nsize: "<<v.size()<<endl;//O(1)
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<int> v;
    // int n,x;
    // cout<<"enter size(n)";
    // cin>> n;

    // for(int i=0;i<n;i++)
    // {
    //     printV(v);
    //     cout<<"enter element";
    //     cin>>x;

    //     v.push_back(x);
    // }
    v.push_back(7);
    v.push_back(9);
    printV(v);
    vector<int>v1=v;//O(n)
    vector<int>&v2=v;//O(n)
    v2.push_back(10);
    printV(v1);
    printV(v2); 
    printV(v);
    return 0;
}