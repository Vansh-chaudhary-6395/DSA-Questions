#include<iostream>

// here we use kadanes algorithm to make our code time complexity better 

using namespace std;
int solve(int arr[], int n){
	int maxi= INT_MIN;
	int max_till_here = 0;
	for(int i=0; i<n; i++){
		max_till_here = max_till_here + arr[i];
		
		if(max_till_here > maxi ){
			maxi = max_till_here;
		}
		if(max_till_here < 0){
			max_till_here = 0;
		}
	}
	return maxi;
}
int main(){
	int n;
	 cout<<"enter the size of n "<<endl;
	 cin>>n;
	int arr[n];
	cout<<"enter array elements "<<endl;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	int maxi = solve(arr, n);
	cout<<"your maximum sum of continious sub array is  ";
	cout<<maxi;
}