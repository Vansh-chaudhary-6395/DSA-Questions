
#include<iostream>
#include<vector>
#include<map>
#include<bits/stdc++.h>
using namespace std;
void odd_occuring_elements(int *arr , int n ){

     vector<int> ans;

     map<int, int>mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;

    }

    for(auto it : mp){
        if(it.second % 2 != 0 ){
            ans.push_back(it.first);

        }

    }

    cout<<" odd occuring elements are "<<endl;
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<< " ";
    }
    
}

int main(){
    int n;
    cout<<"enter the size of the array "<<endl;
       cin>>n;
    int* arr = new int[n];
   
    cout<<"enter array elements "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    odd_occuring_elements(arr, n);
   

    return 0;

}