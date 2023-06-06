void swap(int *a, int *b){
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;
    }
    void zigZag(int arr[], int n) {
        // code here
        int flag=1;
        int i=0;
        while(i!=n){
            if(flag==1){
                if(arr[i]>arr[i+1]){
                    swap(&arr[i],&arr[i+1]);
                }
            }
            else if(flag==0){
                if(arr[i]<arr[i+1]){
                    swap(&arr[i],&arr[i+1]);
                }
            }
            flag=!flag;
            i++;
        }
        
    }
