#include<iostream>
using namespace std;
 bool solve(string s,char ch, int index ){
 	if(index >= s.size()){
 		return false;
	 }
	 
	 if(s[index] == ch){
	 	return true;
	 }
	 
	bool res = solve(s, ch , index+1);
	return res;
 }
 int main(){
 	
 	string s;
 	 cout<<"enter the string"<<endl;
 	 cin>>s;
 	 
 	 char ch;
 	  cout<<"enter the character"<<endl;
 	  cin>>ch;
 	  
 	  bool ans = solve(s, ch, 0);
 	  if(ans == true){
 	  	cout<<"yes character is present"<<endl;
	   }
	   else{
	   	cout<<"character is not present"<<endl;
	   }
 }