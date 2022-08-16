class Solution{
    int BS(int arr[],int n,int target){
        // implementation

        int low=0;int high= n-1;
        while(low<=high){
            int mid = low+ (high-low)/2;

            if(arr[mid]==target) return mid;
            else if(arr[mid]<target) low= mid+1;
            else high = mid-1;
        }
        return low;
        
    }
}