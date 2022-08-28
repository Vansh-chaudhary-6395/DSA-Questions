#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include <string.h>
#include<algorithm>
using namespace std;
string longest_palindromic(string s){
	int n = s.length();
	if(n <= 1){
		return s;
	}
	
	int st =0;
	 int end =0;
	  int max_len =1;
	  // for odd
	  for(int i =0; i <n-1; i++){
	  	int l = i, r=i;
	
		while(l >= 0 && r < n){
				if(s[l] == s[r]){
					l--;
					r++;
			}
			else{
				break;
			}
			
		}	
		int len = r-l-1;
		if(len > max_len ){
			max_len = len;
			 st = l+1;
			  end = r-1;
		}
	  }
	  
	  
	    // for even
	  for(int i =0; i <n-1; i++){
	  	int l = i, r=i+1;
	
		while(l >=0 && r < n){
			if(s[l] == s[r]){
					l--;
				r++;
			}
			else{
				break;
			}
		
		}	
		int len = r-l-1;
		if(len >max_len ){
			max_len = len;
			 st = l+1;
			  end = r-1;
		}
	  }
	  
return s.substr(st, max_len);
}
int main(){
	
	string s ;
	cout<<"enter the string "<<endl;
	cin>>s;
	
	string res = longest_palindromic(s);
	cout<<"longeest palindromic substring is "<<res<<endl;
}
