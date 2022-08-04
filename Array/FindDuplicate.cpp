/*
Q) you are given an array of size n . containing each no. btw 1 and n-1. at least once.his is a single integer value 
        that is present in the array twice. Your task is to find the duplicate integer value present in the array 
*/


/*
Approach step 1-> given array must have 1 to n element once remaining element is answer
    step2-> so if we XOR of all array elements with 1 to N-1; numbers then they cancil each other and remaininng element is the answer
*/
#include<iostream>
using namespace std;
int FindDuplicate(int arr[], int n){
    int ans =0;
    // here we do xor of all array elements
    for(int i=0; i<n; i++){
        ans = ans^arr[i];
    }

    // here we did xor with 1 to n-1 numbers of all array elements
    for(int i=1; i<n; i++){
        ans = ans^i;
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
    int ans = FindDuplicate(arr,n);
    cout<<"duplicate element in the array is "<<ans<<endl;

    return 0;
}