#include<iostream>
#include<vector>
using namespace std;
void solve(string& output, int curr_open, int rem_open, int curr_close , int rem_close, vector<string>&ans ){
	
	// baes case
	if(rem_open == 0 && rem_close ==0){
		ans.push_back(output);
		return;
	}
	
	if(rem_open >0){
		output.push_back('(');
		solve(output,curr_open+1, rem_open-1, curr_close, rem_close, ans);
		output.pop_back();
	}
	if(rem_close >0 &&curr_open > curr_close ){
		output.push_back(')');
			solve(output,curr_open, rem_open, curr_close+1, rem_close-1, ans);
		output.pop_back();		
	}
	

}
int main(){
	
	int n;
 	cout<<"enter the max length of the string "<<endl;
 	cin>>n;
 
	string output = "(";
	int curr_open = 1;
	 int rem_open = n-1;
	  int curr_close=0;
	   int rem_close = n;
	   vector<string>ans;
	    solve(output,curr_open, rem_open,curr_close, rem_close, ans );
	   cout<<"total strings  we can build the valid string are "<<endl;
	   for(int i =0; i < ans.size(); i++){
	   	cout<<ans[i]<<" ";
	   }
	   cout<<endl;
	   
		 cout<<"total ways in we can build the valid string are "<<ans.size()<<endl;
}