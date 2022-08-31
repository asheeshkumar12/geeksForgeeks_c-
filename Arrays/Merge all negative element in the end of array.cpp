void segregateElements(int arr[],int n)
    {
        // Your code goes here
        stack<int> s1,s2;
        for(int i=n-1;i>=0;i--){
            if(arr[i]<0){
                s2.push(arr[i]);
            }
            else{
                s1.push(arr[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(!s1.empty()){
                arr[i]=s1.top();
                s1.pop();
            }
            else{
                arr[i]=s2.top();
                s2.pop();
            }
        }
    }
