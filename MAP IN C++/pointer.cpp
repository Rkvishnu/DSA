#include <bits/stdc++.h>
using namespace std;

int lol(){
    int n;
        cin >> n;vector<int>kaka; map<int,int>mhu;  
        for(int i = 0 ; i < n; i++){int j;cin >> j;mhu[j]++;}
        for(auto i : mhu) {kaka.push_back(i.second);}
        
        if(kaka.size() == 1) {
             cout << "YES" << endl;return 0;
        }
        sort((kaka).begin(), (kaka).end());
        if(kaka[kaka.size() -1 ] > kaka[kaka.size()-2]) cout << "NO" << endl;
        else cout << "YES" << endl;
        return 0;
}


int main() {
    int t;
	cin>>t;
	while(t--) lol();
}