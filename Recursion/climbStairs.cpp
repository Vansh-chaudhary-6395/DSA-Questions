#include<iostream>
using namespace std;
 int solve(int n){
 	if(n ==0 ||n==1){
 		return 1;
	 }
	 
	 int ans = solve(n-1) + solve(n-2);
	 return ans;
 }
 int main(){
 	int n;
 	cout<<"enter the value of n ";
 	cin>>n;
 	
 	int ans = solve(n);
 	 cout<<"total number of ways of reach nth stairs is "<<ans<<endl; 
 }