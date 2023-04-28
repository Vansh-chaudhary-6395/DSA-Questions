#include<iostream>
using namespace std;

int solve(int arr[], int n, int index){
	if(index ==  n){
		return 0;
	}
	int ans=0;
	 ans = arr[index] +  solve(arr, n, index+1);
	 return ans;
}


void findMax(int arr[], int n, int index, int &maxi){
	if(index >= n){
		return;
	}
	if(arr[index] >  maxi){
		maxi = arr[index];
	}
	findMax(arr, n , index+1 , maxi);
}
 int main(){
 	
 	int n;
 	 cout<<"enter the size of the array "<<endl;
 	 cin>>n;
 	  int arr[n];
 	  cout<<"enter the array elements "<<endl;
 	  for(int j =0; j <n; j++){
 	  	cin>>arr[j];
	   }
	   
	   int maxi = INT_MIN;
	   int res = solve(arr, n , 0);
	   cout<<"the sum of the array is "<<res<<endl;
	   
	   
	   findMax(arr, n, 0 , maxi);
	   cout<<"maximum in the array is "<<maxi<<endl;
 }