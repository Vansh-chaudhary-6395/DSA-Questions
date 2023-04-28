#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 void solve(string s , string& output , int index , vector<string>&res){
 	if(index >= s.size()){

//		cout<<output<<endl;
		res.push_back(output);
 		return;
	 }
	 

 	


	output.push_back(s[index]);
 	solve(s , output ,index+1 , res);
 	output.pop_back();
 	
 	solve(s, output , index+1 ,res );
 	

 }
 int main(){
 	
 	string s;
 	 cout<<"enter the string "<<endl;
 	 cin>>s;
 	 
 	 string output = "";
 	
	
 	 int  i=0;
	 	vector<string>res;
	 solve(s ,output , i, res);
	  
	 cout<<"all subsequences are"<<endl;
	  for(auto i : res){
	  	cout<<i<<" ";
	  
	  }
	  cout<<endl;
 }