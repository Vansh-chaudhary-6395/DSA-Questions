#include<iostream>
#include<bits/stdc++.h>
#include<limits.h>
using namespace std;


int solve(vector<int>&arr, int target ){
	// bvc
	if(target ==0){
		
		return 0;
	}
	if(target <0){
		
		return INT_MAX;
	}
	int mini = INT_MAX;
	for(int i=0; i <arr.size(); i++){
		int ans = solve(arr, target-arr[i]);
		if(ans != INT_MAX){
				mini = min(mini,ans+1);		
		}
	
	}
	return mini;
	
}

int solve(vector<int>&arr, int target , int output ){
	// bvc
	if(target == output){
		
		return 0;
	}
	if(output > target){
		
		return INT_MAX;
	}
	int mini = INT_MAX;
	for(int i=0; i <arr.size(); i++){
		int ans = solve(arr, target-arr[i]);
		if(ans != INT_MAX){
				mini = min(mini,ans+1);		
		}
	
	}
	return mini;
	
}


 int main(){
 	
 	int n;
 	cout<<"enter the size of the array"<<endl;
 	cin>>n;
 	
 	int tr;
 	 cout<<"enter the target "<<endl;
 	 cin>>tr;
 	vector<int>arr;
 	cout<<"enter the array elements "<<endl;
 	 for(int i =0; i <n; i++){
 	 	int ele;
 	 	 cin>>ele;
 	 	 arr.push_back(ele);
	  }
//	  cout<<"your vector is "<<endl;
//	  for(auto j : arr){
//	  	cout<<arr[j]<<" ";
//	  }
	  cout<<endl;
	  
	  int res = solve(arr , tr);
	   int res2 =  solve(arr , tr , 0);
	   cout<<"minimum number of coins required  are "<<res2<<endl;
 }