#include<bits/stdc++.h>
using namespace std;
void printV(vector<pair<int,int>> &v)
{
    cout<<"\nsize: "<<v.size()<<endl;//O(1)
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<pair<int,int>> v;
    printV(v);
    int n;
    cout<<"size: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cout<<"enter i: "<<i<<"\n";
        cin>>x>>y;
        v.push_back({x,y});
         printV(v);
    }
    


    
    return 0;
}