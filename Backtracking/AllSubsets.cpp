#include<iostream>
#include<vector>
using namespace std;
void solve(vector<string>&ans, int index, string& s, string& output){
	
	if(index >= s.size()){
		ans.push_back(output);
		return;
	}
	output.push_back(s[index]);
	solve(ans, index+1, s, output);
	output.pop_back();
	
	solve(ans, index+1, s, output);	
}
int main(){
	
	string s;
	cout<<"enter the string "<<endl;
	cin>>s;
	
	vector<string> ans;
	string output= "";
	solve(ans, 0,s,output);
	cout<<"all subsets of the given string are  "<<endl;
	for(int i =0;i < ans.size(); i++){
		if(ans[i] == ""){
			cout<<"{}";
		}
		else{
			cout<<ans[i]<<" ";
		}
	
	}
	cout<<"size of the ans vector is "<<ans.size();
	
}