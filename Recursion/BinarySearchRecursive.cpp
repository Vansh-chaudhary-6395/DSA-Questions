#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 
 
 int binarySearch(vector<int>&arr, int& key , int start , int end){
 	
 	if(start > end){
 		return -1;
	 }
	 int mid = (start +end)/2;
	 if(arr[mid] == key){
	 	return mid;
	 }
	 else if(arr[mid] > key ){
//	 	end = mid-1;
	 	return binarySearch(arr, key , start , mid-1);
	 }else{
//	 	start = mid+1;
	 	return binarySearch(arr, key , mid+1 , end);
	 }
	 
 	
 }
  int main(){
  	int n;
  	 cout<<"enter the size of the vector "<<endl;
  	 cin>>n;
  	  
  	  vector<int>arr;
  	   int key;
  	  cout<<"enter the vector elements  in sorted order"<<endl;
  	   
		 
		 for(int i =0; i <n; i++){
  	   	int ele ;
  	   	cin>>ele;
  	   	 arr.push_back(ele);
		 }
		 
		 
		 cout<<"enter the key to be searched "<<endl;
		 cin>>key;
	
		int res =  binarySearch(arr ,key ,0 , n-1);
		if(res == -1){
			cout<<"key is not present in the vector"<<endl;
		}else{
				cout<<"the index at which key is present is "<<endl;	 
		 cout<<res<<endl;	
			
		}
		
		
				 
  }