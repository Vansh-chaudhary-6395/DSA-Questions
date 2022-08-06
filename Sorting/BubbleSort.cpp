#include<iostream>
using namespace std;
void BubbleSort(int arr[], int n){
    bool flag = false; 
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = true;
            }
        }
        if(flag == false){
            break;
        }
        
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
    
    BubbleSort(arr, n);
    cout<<"sorted array using bubble sort  is "<<endl;
    printArray(arr,n);
    return 0;
}