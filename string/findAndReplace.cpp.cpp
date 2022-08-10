#include<iostream>
using namespace std;
#include<bits/stdc++.h>

#include<string>

int isPresent(string s, string t){
	
	int st = -1;
	int n = t.size();
	for(int i =0; i <s.size() - t.size(); i++){
		string temp = s.substr(i,t.size());
		if(temp == t){
			st =i;
		}
	}
	return st;
}
int main(){
	
	string s, t;
	cout<<"enter the string"<<endl;
	 cin>>s;
	 string fi= "avnic";
	 string seeen = "mahak";
	int st;
	 int n = fi.size();
	 for(int i =0; i < s.size(); i++){
	 	
	 	st= isPresent(s,fi);
	 	
	 }
	 if(st == -1){
	 	cout<<s<<endl;
	 }
	 else{
	 	s.replace(st,n,seeen);
	 	cout<<s<<endl;
	 }
	
	
}