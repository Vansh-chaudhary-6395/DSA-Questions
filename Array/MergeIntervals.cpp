#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
 
 void print(vector<vector<int>> &arr){
 	for(int i =0; i <arr.size(); i++){
 		for(int j =0; j <<arr[i].size(); j++){
 			cout<<arr[i][j]<< " ";
		 }
		 cout<<endl;
	 }
 }
 int main(){
 		int n,m;
 		cout<<"enter number of rows"<<endl;
		 cin>>n;
		 cout<<"enter number of columns always 2 "<<endl;
		 cin>>m;
		 
		 
//		 int arr[n][m];
		vector<vector<int>>arr;
		 
		 cout<<"enter vector elements "<<endl;
		 int a;
		 for(int i =0; i <n; i++){
		 	vector<int> temp;
		 	for(int j =0; j <m; j++){
		 		
			 	cin>>a;
			 	temp.push_back(a);
		 		
			 }
			 arr.push_back(temp);
			 
		 }
		 
		 
		 cout<<"your vector before sort is "<<endl;
		 for(int i =0; i <n; i++){
		 	for(int j =0; j <m; j++){
		 		cout<<arr[i][j]<<" ";
			 }
			 cout<<endl;
		 }
//		 print(arr);
		 sort(arr.begin(), arr.end());
//		 print(arr);

cout<<"your vector after sort is "<<endl;
for(int i =0; i <n; i++){
	for(int j =0; j <m; j++){
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
}		 	
		 	
 }