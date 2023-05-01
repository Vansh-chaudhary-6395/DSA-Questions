#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//
//void helper(string str , vector<string>&ans , int i , int j){
//	
//	while(str[i] ==  str[j]){
//		
//		
//	}
//}
//
//void solver(string str , vector<string>&ans){
//	
//	for(int i =0; i < str.size(); i++){
//		
//		// odd
//		int j =i;
//		while(i >=0 && j < str.size() && str[i] == str[j] ){
//			
//				helper(str , ans , i ,i);
//		}		
//		
//		// even	
//		while(i >=0 && j < str.size() && str[i] == str[j] ){
//			
//				helper(str , ans , i ,i+1);
//		}	 
//		
//	}
//}

int main(){
	
//	string str ;
//	cout<<"enter the string"<<endl;
//	cin>>str;
//	 
//	 vector<string> s;
//	 solver(str , s);
//	 cout<<"all palindromic substrinigs are "<<endl; 
//	  
//	  for(auto j : s){
//	  	cout<<j<<" ";
//	  }
//	  cout<<endl;
//

int num;
 cout<<"enter the numebr which you want to convert into binary"<<endl;
 cin>>num;
 
 string ans = bitset<2>(num).to_string();
 cout<<"binary number of "<<num<<" is "<<ans<<endl;


}