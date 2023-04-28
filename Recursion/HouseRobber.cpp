#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>arr , int index , vector<int>&dp){
	
	if(index >= arr.size()){
		return 0;
	}
	if(dp[index] != -1){
		return dp[index];
	}
	
//	 include th current index
		
	int ans1 = arr[index] + solve(arr , index+2 , dp);
	 int ans2 = 0 + solve(arr , index+1 , dp);
	 
	 dp[index] = max(ans1 , ans2);
	 return dp[index];
//	  return max(ans1 , ans2);s
}

 int main(){
 	
 	int n;
 	 cout<<"enter the size of the array "<<endl;
 	 cin>>n;
 	 
 	 vector<int>arr;
 	 cout<<"enter the array elements "<<endl;
	  for(int i =0; i<n; i++){
 	 	int ele ;
 	 	 cin>>ele;
 	 	 arr.push_back(ele);
 	 	 
	  }
	  vector<int> dp(n+1 ,-1);
	  
	  int max_amount =  solve(arr, 0 , dp);
	  cout<<"max amount can we rob is "<<max_amount;
	  
 }