//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int *t=new int[2];
        for(int i=0;i<n;i++)
        {
            int z=abs(arr[i]);
            if(arr[z-1]<0){
                t[0]=z;
            }
            else{
                arr[z-1]=-arr[z-1];
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                t[1]=i+1;
                break;
            }
        }
        return t;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
