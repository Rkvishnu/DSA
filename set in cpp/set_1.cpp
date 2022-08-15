#include<iostream>
#include<set>
using namespace std;


int main(){
    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(2);

    for(auto i: s)
    
        cout<<i<<" "; //1,2,3
        cout<<"\n";
        cout<<s.size()<<"\n";
        s.erase(2);
 for(auto i: s)
        cout<<i<<" ";
        cout<<"\n";

}