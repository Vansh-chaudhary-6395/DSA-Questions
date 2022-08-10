#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(string s ){
	int start;
	 vector<int> ans;
	  int n = s.length();
	   int cnt;
	for(int i =0; i< n; i++){
			cnt =1;
		while(s[i] == s[i+1]){
			cnt++;
			i++;
		}
		cout<<s[i]<<" "<<cnt<<" "<<endl;
		ans.push_back(cnt);
	}
}
int main(){
	string a;
	cout<<"enter your string   ";
	getline(cin,a);
	
	
	solve(a);
}