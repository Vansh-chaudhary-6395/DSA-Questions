#include<iostream>
#include<vector>
using namespace std;

void printPermutation(int index,  string &s, vector<string>&ans){
	if(index >= s.size()){
//		output = s;
//		cout<<output<<" ";
ans.push_back(s);
		return;
	}
	
	
	for(int j =index; j<s.size(); j++){
		swap(s[index], s[j]);
		printPermutation(index+1, s, ans);
		swap(s[index], s[j]);
	}
}
int main(){
	
	string s ;
	cout<<"enter the string"<<endl;
	
	cin>>s;
	string output = "";
	vector<string>res;
int	index =0;
	
	printPermutation(index,  s, res);
	
	cout<<"all permutations are "<<endl;
	for(int i =0; i <res.size();i++){
		cout<<res[i]<<" ";
	}
	
	
	
}