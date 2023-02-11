// check if tfirst string is the subsequemce of second string or not 


#include<iostream>
using namespace std;
 
 int solve(int*arr, int n, int curr , int prev){
 	// base case
 	if(curr == n){
 		return 0;
	 }
	 
	 
	 //if we find math character 
	 int ans =0;
	if(prev == -1 || arr[curr] > arr[prev]){
		ans = 1 + solve(arr, n, curr+1, curr);
	}

	int not_pick = 0 + solve(arr, n, curr+1, prev);
	
	return max(ans, not_pick);
 	
 }
 
 
 int main(){
 	
 int n;
  cout<<"enter the size of the array "<<endl;
  cin>>n;
  
  int* arr = new int [n];
  
  cout<<"enter array elements "<<endl;
  for(int i =0; i<n; i++){
  	cin>>arr[i];
  } 
 	
 	
 	int curr =0;
 	int prev =-1;
 	
 	int ans = solve(arr,n,curr,prev);
	 
	cout<<"length of longest commaon subsequence of an array is "<<ans <<endl;
	 
	 
 	
 }