#include<iostream>
using namespace std;
void printLeaders(int arr[], int n){
    int max_from_right= arr[n-1];
    cout<<"ledaers element are : "<< " ";
    cout<<max_from_right<<" ";
    for(int i=n-2; i>=0; i--){
        if(arr[i] > max_from_right){
            max_from_right = arr[i];
            
            cout<<max_from_right<<" ";
        }
        
        
    }
}
int main(){
    int n;
    cout<<"enter the size of array"<<endl;    
     cin>>n;
     int arr[n];

     cout<<"enter array elements "<<endl;
     for(int i=0; i<n; i++){
         cin>>arr[i];
     }
     printLeaders(arr, n);


    return 0;
}