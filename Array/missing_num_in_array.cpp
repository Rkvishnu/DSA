
#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        
        //Solution-1
       /* int sum1 =(n*(n+1))/2;
        int sum2=0;
        for(int i=0;i<n-1;i++){
            sum2+=array[i];
        }
        int missing = sum1-sum2;
        return missing;
        
        */
        
        // solution-2
        int a,b=0;
        for(int i=1;i<=n;i++){
            a=a^i;
        }
        for(int i=0;i<n-1;i++){
            b=b^array[i];
        }
        return a^b;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}
 