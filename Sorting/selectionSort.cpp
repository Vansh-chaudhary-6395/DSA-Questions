#include <bits/stdc++.h>
#include<iostream>
using namespace std;


void selectionSort(int arr[], int n){

  
    for(int i=0; i<n-1; i++){
        int min_index = i;
        for(int j=i+1; j<n; j++){
                if(arr[j] < arr[min_index]){
                    min_index = j;
                }
//                cout<<arr[j]<<" ";
                
               
        }


        
//        cout<<endl;
         swap(arr[min_index], arr[i]);
    }

   
    
}
void printArray(int arr[], int n){
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}



int main(){

    int n;
    cout << "enter the size of array :" << endl;
    cin >> n;
    cout << "enter the elements of array :" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<<"unsorted array  :  ";
    printArray(arr, n);   
cout<<endl;
    selectionSort(arr,n);
    cout<<"sorted array is : ";

    
     printArray(arr, n); 
     
    return 0;
}