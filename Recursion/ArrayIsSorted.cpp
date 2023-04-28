#include<iostream>
using namespace std;

bool isSorted(int arr[] , int size , int index){
	if(size <= 1 ||  index == size-1){
		return true;
	}
//	bool ans ;
	if(arr[index] >arr[index+1]){
		return false;
	}
	return  isSorted(arr, size-1 , index+1);	
}

int main(){
	
	int n;
	 cout<<"enter the size of the array "<<endl;
	 cin>>n;
	 
	 int arr[n];
	  cout<<"enter the array elements "<<endl;
	  for(int i =0; i <n; i++){
	  	cin>>arr[i];
	  }
	  int i =0;
	   int j =1;
	  bool ans = isSorted(arr, n,i);
	if(ans == true){
		cout<<"array is sorted "<<endl;
	}
	else{
		cout<<"array is not sorted "<<endl;
	}
}