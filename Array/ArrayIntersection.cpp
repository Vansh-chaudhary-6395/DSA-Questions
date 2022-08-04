#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<map>

vector<int> ArrayIntersection(int arr1[], int n , int arr2[], int m){
	
	unordered_map<int, int> mp;
	vector<int> ans;
	for(int i =0; i<n; i++){
		mp[arr1[i]]++;
	}
	for(int j =0; j<m; j++){
		mp[arr2[j]]++;
	}
	
	for(auto i: mp){
		if(i.second >1){
			ans.push_back(i.first);
		}
	}
	return ans;
	
}

int main(){
	int n,m;
	 cout<<"enter the size of array one"<<endl;
	 cin>>n;
	 cout<<"enter the size of array two "<<endl;
	 cin>>m;
	 
	 
	 int arr1[n];
	 int arr2[m];
	 
	 cout<<"enter the elements of first array "<<endl;
	 for(int i =0; i<n; i++){
	 	cin>>arr1[i];
	 }
	 cout<<"enter the elements of the second array "<<endl;
	 
	 for(int j =0; j<m; j++){
	 	cin>>arr2[j];
	 }
	 
	 vector<int> res = ArrayIntersection(arr1,n,arr2,m);
	 cout<<"your intersection of array  is ";
	 for(int j =0; j< res.size(); j++){
	 	cout<<res[j]<< " ";
	 }
}