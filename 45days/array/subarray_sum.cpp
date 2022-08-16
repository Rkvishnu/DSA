#include<bits/stdc++.h>
using namespace std;

 

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;

        int start=0, flag=0, sum=0;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        for(int i=0;i<n;i++){
        
        sum = sum + arr[i];
       while(sum>s){
    sum= sum-arr[start];
    start++;
 }
 if(sum==s){
    cout<<start+1<<" "<<i+1<<endl;
    flag=1; // because e have found the subarray with given sum
    break;
 }

        }
        if(flag==0) cout<<-1<<endl;

    }
    return 0;
}