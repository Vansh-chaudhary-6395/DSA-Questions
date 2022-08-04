#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<unordered_map>
// function to find element  occuring odd number of times 
void solve(int *arr, int n, int ans[]){
	
unordered_map<int, int>mp;
for(int i =0; i<n; i++){
	mp[arr[i]]++;
	
}
int k =0;
for (auto i : mp){
	if(i.second%2 != 0){
		ans[k++] = i.first;
	}
}
	
//	return ans;
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
		
		int ans[2] = {0,0};
		solve(arr, n, ans);
		cout<<"your odd occuring  elements are "<<endl;
		for(int i =0; i<2; i++){
			cout<<ans[i]<< " ";
		} 
		
		
		
		
}