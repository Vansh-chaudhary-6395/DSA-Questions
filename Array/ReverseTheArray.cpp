#include<iostream>
using namespace std;

int main(){
        int n;
        cout<<"enter the size of array :"<<endl;
        cin>>n;
        int arr[n];
        cout<<"enter the array elements : "<<endl;
        for(int i=1; i<=n; i++){
            cin>>arr[i];
        }
cout<<"entered elements ao array are : "<<endl;
    for(int i=1; i<=n; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    // reverse the array 
    int i=1; 
    int j=n;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
cout<<"reverse array is : "<<endl;
for(int i=1; i<=n; i++){
    cout<<arr[i]<<" ";
}
       return 0;
}