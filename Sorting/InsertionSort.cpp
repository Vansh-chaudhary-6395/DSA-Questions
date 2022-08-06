#include<iostream>
using namespace std;
void insertionSort(int arr[], int n){
    
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j;
        for(j= i-1; j>=0; j--){
            if(temp < arr[j]){
                // shift 
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
//        cout<<j+1<<"  is";
        arr[j+1] = temp;
    }
}

void printArray(int arr[], int n){
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int n;
    cout<<"enter the size of array "<<endl;
    cin>>n;   
    int arr[n];
    cout<<"enter array elements "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    
    insertionSort(arr, n);
    cout<<"sorted array using insertion sort  is "<<endl;
    printArray(arr,n);
    return 0;
}