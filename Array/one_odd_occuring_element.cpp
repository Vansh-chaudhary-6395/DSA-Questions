#include<iostream>
using namespace std;
// function to find element  occuring odd number of times 
int solve(int arr[], int n){
	
	int res =0;
	for(int i =0; i<n; i++){
		res = res^arr[i];
	}	
	
	return res;
}
int main(){
	int n;
	 cout<<"enter the size of the array "<<endl;
	 cin>>n;
	 
		int * arr = new int[n];
		cout<<"enter the array elements"<<endl;
		cout<<"enter the elements in the way like in all array elements we have only one element that occur odd number of times "<<endl;
		for(int i =0; i<n; i++){
			cin>>arr[i];
		}
		
//		int ans[2] = {0,0};
		
	int fin =	solve(arr,n);
	cout<<"your odd occuring element is "<<endl;
	cout<<fin;
		
		
		
}