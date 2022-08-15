#include<iostream>
#include<set>
using namespace std;


int main(){
    multiset<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    s.insert(2);
    for(auto i: s)
    cout<<i<<" ";
    cout<<"\n";
   
   /* case 1*/
    // s.erase(2);   // will eRASSE ALL the 2s in multiset
    // for(auto i:s)
    // cout<<i<<" ";
    // cout<<"\n";

/* case2*/
// s.erase(s.find(2)); // willl erasse only one two 2
// for(auto i:s)
//     cout<<i<<" ";
//     cout<<"\n";

// case3
s.erase(s.lower_bound(2));
for(auto i:s)
    cout<<i<<" ";
    cout<<"\n";
}