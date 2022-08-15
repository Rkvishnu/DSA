#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n;
        cin>>n;
int count=0;
int arr[n];
    for(int i=0;i<n;i++)
{
    int x; 
    cin>>arr[x];

    if(arr[i]==arr[i+1]){
        count++;
        if(count>=2){
            count = count-1;
        }
        else cout<<count<<endl;
    }
    
}
    // cout<<count<<endl;
    
    }
    return 0;
}
