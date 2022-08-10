#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<string>

bool isPresent(string s1, string s2){
	
	cout<<"s1 is "<<s1<<endl;
	cout<<"s2 is "<<s2<<endl;
	for(int i =0; i <= s1.size() - s2.size();i++){
		string temp = s1.substr(i,s2.size());
		if(temp == s2){
			return true;
		}
		
	}
	return false;
}	
 int main(){
 	string s1,s2;
 	cout<<"enter string 1"<<endl;
 	cin>>s1;
 	 cout<<"enter string 2 "<<endl;
 	 cin>>s2;
 	 
	
	 int l1 = s1.length();
	 int l2 = s2.length();
	 if(l1 != l2){
	 	cout<<"NO";
	 }
//	 logic one
else{
			
				string temp = s1+s2;

	 	bool res  = isPresent(temp, s2);
		  if(res == 1){
		  	cout<<"yes"<<endl;
		  }
		  else{
		  	cout<<"no"<<endl;
		  }
}

// LOGIC 2
	 
//if(temp.find(s2) != string::npos){
//	cout<<"yes";
//}
//else{
//	cout<<"no";
//}
 	 
 	 return 0;
 }