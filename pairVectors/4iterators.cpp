// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    vector<int> v={2,3,5,7,11};
    vector<int> :: iterator it = v.begin();
    for(auto i=v.begin();i!=v.end();i++)
    {
        printf("%u\n",*i); 
    }
    // cout<<endl;
    // cout<<(*it+1)<<endl;
    vector<pair<int,int>>v_p={{1,2},{3,4},{5,6}};
    vector<pair<int,int>>::iterator iti;
    for( iti=v_p.begin();iti!=v_p.end();iti++)
    {
        printf("%u\t%u\n",(*iti).first,(*iti).second); 
    }
    return 0;
}
