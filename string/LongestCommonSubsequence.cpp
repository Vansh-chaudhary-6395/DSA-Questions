// check if tfirst string is the subsequemce of second string or not 


#include<iostream>
using namespace std;
 
 int solve(string s1, string s2, int i , int j ){
 	// base case
 	if(i== s1.size() || j == s2.size()){
 		return 0;
	 }
	 
	 
	 //if we find math character 
	 if(s1[i] == s2[j]){
	 	return 1 + solve(s1,s2,i+1, j+1);
	 }
	 
	 else {
	 	return 0 + solve(s1,s2,i, j+1);
	 }
 	
 }
 
 
 int main(){
 	
 	string s1,s2;
 	cout<<"enter first string "<<endl;
 	cin>>s1;
 	
 	cout<<"enter second string "<<endl;
 	cin>>s2;
 	
 	
 	int i =0;
 	int j =0;
 	
 	int ans = solve(s1,s2,i,j);
	 
	 if(ans == s1.size()){
	 	cout<<"your string s1 is the subsequence of string s2"<<endl;
	 } 
	 else{
	 	cout<<"your string s1 is not the subsequence of the string s2 "<<endl;
	 	
	 }
	 
	 
 	
 }