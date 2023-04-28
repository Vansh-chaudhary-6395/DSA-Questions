#include<iostream>
using namespace std;
 void solve( string res , int index , char ch , int& output ){
 	if(index == res.size()){
// 		return output;
		return;
 		
	 }
//	   int output =0;
	 if(res[index] == ch){
	 	output = index;
	 }
		
	 solve(res , index+1, ch , output);		 
	 
 }
 
  void first_occurence(string res , int index , char ch , int& output){
  	
  	if(index == res.size()){
// 		return output;
		return;
 		
	 }
//	   int output =0;
	 if(res[index] == ch){
	 	output = index;
	 	return;
	 }
		if(output == -1){
		
	 first_occurence(res , index+1, ch , output);		 
  }
  }
 
 int main(){
 	string str;
 	 char ch;
 	 cout<<"enter the string"<<endl;
 	  cin>>str;
 	  cout<<"enter the character"<<endl;
 	  cin>>ch;

 int output =-1;
		 solve(str ,0 , ch , output);
		cout<<" the last occurence is "<<output<<endl;
		
		
//		 to get the first occurence 
int res = -1;
 int cnt =0; 
 first_occurence(str, 0 , ch , res);
 	cout<<"first occurence of enteredacter is "<<res<<endl;
 }