#include<iostream>
using namespace std;
void sort012(int arr[], int n){
    int cnt1=0; int cnt2=0;
    int cnt0=0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            cnt0++;
        }
        else if(arr[i] == 1){
            cnt1++;
        }
        else{
            cnt2++;
        }

    }
    int p;
    for(p=0; p<cnt0; p++){
        arr[p]= 0;
    }
    for(p = cnt0; p<cnt0 +cnt1; p++ ){
        arr[p] = 1;
    }
    while(cnt2--){
        arr[p] = 2;
        p++;
    }
}
int main(){
    int n;
    cout<<"enter the size of the array "<<endl;
    cin>>n;
    // int k ;
    // cout<<"enter the number of element of which you want to find the smallest and maximum "<<endl;
    // cin>>k;
    int arr[n];
    cout<<"enter the size of the array "<<endl;
    for(int i=0; i<n; i++ ){
        cin>>arr[i];

    }
    cout<<"unsorted array is "<<endl;
    for(int i=0; i<n;i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    sort012(arr,n);
    cout<<"sorted array is "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}