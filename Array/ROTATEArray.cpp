#include<bits/stdc++.h>
using namespace std;
void reverse(int * &arr, int start , int end){
	int s = start;
	int e = end;
	while(s<=e){
		swap(arr[s], arr[e]);
		s++;
		e--;
		
	}
}

void rotate(int* &arr, int n , int k ){
	
	reverse(arr, 0  ,k-1);
	reverse(arr, k, n-1);
	reverse(arr, 0 , n-1);
}

int main(){
		
		int n,k;
		cout<<"enter the size of array "<<endl;
		cin>>n;
		
		cout<<"enter the values upto which you want to rotate "<<endl;
		cin>>k;
		int * arr = new int[n]; // here we created the array in the heap
		
		cout<<"enter the array elements "<<endl;
		for(int i=0; i<n; i++){
			cin>>arr[i];
		} 
	
	rotate(arr,  n, k );
	
	cout<<"your rotated  array is "<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<< " ";
	}
	return 0;
}