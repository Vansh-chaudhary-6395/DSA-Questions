#include<iostream>
using namespace std;
string removeConsecutive(string s){
	int i =0;
	string res =" ";
	while(s[i]){
		if(s[i] != s[i+1]){
			res += s[i];
			i++;
		}
		
		if(s[i+1] && s[i] == s[i+1]){
			while( s[i+1] && s[i] == s[i+1]){
			//	res +=s[i]; 
				i++;
			}
		//	i++;
		}
		i++;
	}
	cout<<"you "<<res<<endl;
	return res;
}
int main(){
	
	cout<<"enter the string "<<endl;
	string s ;
	 getline(cin,s);
	  
	  string ans = removeConsecutive(s);
	cout<<"your final string is "<<ans<<endl;
}