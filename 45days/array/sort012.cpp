#include<bits/stdc++.h>

using namespace std;
void swap(int arr[],int i, int j){
    int temp= arr[i];
    arr[i]= arr[j];
    arr[j]= temp;
}
void sort012(int arr[], int n){
      int l=0;
    int m=0;
    int h= n-1;
    while(m<=h){
        if(arr[m]==0){
            swap(arr,l,m);
            l++;
            m++;
        }
        else if(arr[m]==1){
            m++;

        }
        else if(arr[m]==2){
            swap(arr,m,h);
            h--;
        }
    }
}
int main(){
    int arr[]= {0,1,1,2,2,0,1};
    sort012(arr,7);
for(int i=0;i<7;i++){
    cout<<arr[i]<<" ";
}
  
    return 0;
}