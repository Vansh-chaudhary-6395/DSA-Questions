#include<iostream>
using namespace std;
int partition (int arr[], int s, int e){
    int pivot = arr[s];
    int cnt =0;
     for(int i= s+1; i<=e; i++){
         if(arr[i] < pivot ){
             cnt++;
         }

     }
//    cout<<"count is "<<cnt<<endl;
     int pivotIndex = s + cnt;
     swap(arr[pivotIndex], arr[s]);
    // check conditions for smaller and greater elements 

    int i=s,  j=e;

        while(i < pivotIndex && j > pivotIndex){
            while(arr[i] < arr[pivotIndex] ){
                i++;
            }
            while(arr[j] > arr[pivotIndex]){
                j--;
            }
            if(i < pivotIndex && j > pivotIndex){
                swap(arr[i++] , arr[j--] );
            }
        }
        return pivotIndex;
}
void quickSort(int arr[], int s, int e){
    // base case
    if(s >= e){
        return; 
    }

    // partition kra hai
    // this return the index of right place of first selected element 
    int p  = partition(arr, s,e);


    // sort the left part
    quickSort(arr, s, p-1);

    // sort right part
    quickSort(arr, p+1, e);

}
int main(){
    int n;
     cout<<"enter the size of the array "<<endl;
     cin>>n;

    int arr[n];

    cout<<"enter the array elements "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    quickSort(arr,0,n-1);

    cout<<"your sorted array is "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    return 0;
}