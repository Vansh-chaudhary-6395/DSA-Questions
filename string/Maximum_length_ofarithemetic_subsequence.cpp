#include<iostream>
using namespace std;

int solve(int j , int*arr, int diff, int n ){
	
//	if(i <0){
//		return 0;
//	}
//	

	if(j == n){
		return 0;
	}
		
	
	// backward check  approack one
//	 int res =0;
//	for(int k = i-1; k >=0 ; k--){
//		if(arr[i] - arr[k] == diff){
//			res = 1+solve(k,arr, diff);
//		}
//	}
	
	
	// forward check approach two
		int res =0;
	for(int k = j+1; k <n ; k++){
		if(arr[k] - arr[j] == diff){
			res = 1+solve(k,arr, diff,n);
		}
	}	
	
	
	
	return res;
	
	
}

int main(){
	
//	
//	int n ;
//	cout<<"enter the size of the array "<<endl;
//	cin>>n;
//	
//	
//	int * arr = new int[n];
//	cout<<"enter the array elements "<<endl;
//	
//	for(int i =0; i <n; i++){
//		cin>>arr[i];
//	}
//	
//	
//	
//	//code
//	 int ans =0;
//	for(int i =0; i <n; i++){
//		for(int j = i+1; j<n; j++){
//			int diff = arr[j] -  arr[i];
//			ans = max(ans, 2+solve(j,arr,diff, n));
//			
//		}
//	}
//	cout<<"maximum length of arithemetic subsequence "<<ans<<endl;
	

int a =10;
 float a=20.2;
 cout<<a;
 


	 
}