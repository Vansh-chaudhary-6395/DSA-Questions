#include<iostream>
using namespace std;
int findUnique(int arr[], int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = ans^arr[i];

    }
    return ans;
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
    int ans = findUnique(arr,n);
    cout<<"Unique element in the array is "<<ans<<endl;

    return 0;
}