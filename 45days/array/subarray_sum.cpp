#include<bits/stdc++.h>
using namespace std;

int subarray(int arr[], int n, int sum)
    {
        for(int i=1;i<=n;i++){
            int curr_sum= arr[i];

            for(int j=i+1;j<=n;j++){
               
                if(curr_sum==sum){
                    cout<<i<<" "<<j-1<<endl;
                    return 1;
                }
                else if(curr_sum >sum || j==n){
                    break;
                }
                curr_sum =curr_sum + arr[i];
            }
        }
        return 0;    
    }

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
 sum = sum +arr[i];
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