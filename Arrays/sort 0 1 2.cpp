void sort012(int arr[], int n)
    {
        // code here 
        int c0=0,c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                c0++;
            }
            if(arr[i]==1){
                c1++;
            }
            else{
                c2++;
            }
        }
        
        for(int i=0;i<n;i++){
            if(c0>0){
                arr[i]=0;
                c0--;
            }
            else if(c1>0){
                arr[i]=1;
                c1--;
            }
            else{
                arr[i]=2;
                c2--;
            }
        }
    }
