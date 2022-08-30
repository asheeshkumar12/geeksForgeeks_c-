//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int arr[], int n) 
    { 
      int i,j,md=-1;
      int *arrL=new int[n];
      int *arrR=new int[n];
      arrL[0]=arr[0];
      for(i=1;i<n;i++){
          arrL[i]=min(arr[i],arrL[i-1]);
      }
      arrR[n-1]=arr[n-1];
      for(j=n-2;j>=0;j--){
          arrR[j]=max(arr[j],arrR[j+1]);
      }
      i=0;j=0;
      while(i<n&& j<n){
          if(arrL[i]<=arrR[j]){
              md=max(md,j-i);
              j++;
          }
          else{
              i++;
          }
      }
      return md;
    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends
