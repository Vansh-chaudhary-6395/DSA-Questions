#include<iostream>
#include<bits/stdc++.h>
using namespace std;


	void solve(string&str1  , string&str2 , int index1 , int index2 , string&ans , int carry){
		
		// bc
		if(index1 <0 && index2 <0 ){
			
			if(carry != 0){
				ans.push_back(carry +'0');
			}
			else{
				return;
			}
		}
		
		int n1 = (index1 >=0 ?  str1[index1] :'0')-'0' ;
		 int n2 = (index2 >=0 ?str2[index2] : '0')-'0';
		 int digit = n1 + n2 + carry;
		 
		  carry = digit/10;
		  int val = digit%10;
		  ans.push_back(val +'0');
		  
		  solve(str1 , str2 , index1-1 , index2-1 , ans, carry);
		
		
		
	}

 int main(){
 		
 		string ans ="";
 		string str1, str2;
 		 cout<<"enter the string one "<<endl;
 		  cin>>str1;
 		  cout<<"enter the string two "<<endl;
 		  cin>>str2;
 		  int carry =0;
 		  solve(str1 , str2 , str1.size()-1 , str2.size()-1,ans , carry);
 		  reverse(ans.begin() ,ans.end());
 		  cout<<"your  final  string  after added two string is "<<ans<<endl;
 	
 	return 0;
 }