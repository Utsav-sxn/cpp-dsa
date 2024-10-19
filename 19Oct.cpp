//Geeks for geeks Recursive bubble sort
void bubbleSort(int arr[], int n) 
{
        if(n==1) return;
        else{
        for(int i = 0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
        bubbleSort(arr,n-1);
    }
}

//GFG Recursive Insertion sort
void insert(int arr[], int i,int n)
    {
        if(i==n) return;
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
        insert(arr,i+1,n);
    }