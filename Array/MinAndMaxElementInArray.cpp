#include<iostream>
using namespace std;
void min_and_max(int arr[], int n){

    int mn = INT_MAX;
     int mx = INT_MIN;
     for(int i=0; i<n; i++){
         if(mn > arr[i]){
             mn = arr[i];
         }
     }

     for(int i=0; i<n; i++){
         if(mx < arr[i]){
             mx = arr[i];
         }
     }
    cout<<"minimum element is : "<<mn<< " "<<" and maximum element is :"<<mx<<endl;
}
int main(){
    int n;
    cout<<"enter the size of the array "<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter the size of the array "<<endl;
    for(int i=0; i<n; i++ ){
        cin>>arr[i];

    }

    min_and_max(arr,n);
    return 0;
}