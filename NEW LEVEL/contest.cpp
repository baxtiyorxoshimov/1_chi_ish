#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,b,c=0, d=999999;
    cin>>a;
    vector<long long> vc;
    vector<long long> :: iterator it;
    for(int i=0; i<a; i++)
    {
        cin>>b;
        if(b<2) c=1;
        if(b==2){ cout<<2; return 0; }
        for(int i=3; i<b; i++)
        {
            if(b%i==0) c=1;
            else c=0;
        }
        if(c==0) vc.push_back(b);
    }
    if(vc.empty()) cout<<-1;
    else {
    for(it=vc.begin(); it!=vc.end(); it++)
    {
        if(*it<d) d=*it;
    }
    cout<<d;
    }
}
    

