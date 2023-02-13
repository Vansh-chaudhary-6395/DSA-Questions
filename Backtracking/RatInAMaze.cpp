#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
bool isSafe(int newx, int newy,vector<vector<int>>& board, vector<vector<int>>&vis){
	
//	if(newx >= 0 && newy <board.size()) && newy >=0 && newx < board.size() && vis[newx][newy] == false && board[newx][newy] == 1 ){
//		return true;
//	}
if(  (newx >=0 && newx <board.size()) &&(newy >=0 && newy<= board[0].size()) && (vis[newx][newy] == 0) && (board[newx][newy] == 1)){
	return true;
}
	return false;
}
 bool solve(int srcx , int srcy,int destx, int desty, vector<vector<int>>&board, vector<vector<int>>& vis, string& output, vector<string>& path){
 	
 	// bc case
 	if(srcx == destx && srcy == desty){
 		path.push_back(output);
 		return true;
	 }
	 

	
	
	
	
	// for down
	bool downAns = false;
	int newx = srcx+1;
	int newy = srcy;
	if(isSafe(newx, newy, board, vis)){
		vis[newx][newy]=  1;
		output.push_back('D');
	downAns= 	solve(newx, newy, destx, desty,board, vis ,output , path);
	output.pop_back();
		vis[newx][newy] = 0; // backtracking
		
	}

	// for up
	bool upAns = false;
	 newx = srcx - 1;
	 newy = srcy;
	if(isSafe(newx, newy, board, vis)){
		vis[newx][newy]=  1;
		output.push_back('U');
	upAns = 	solve(newx, newy, destx, desty,board, vis, output  , path);
	output.pop_back();
		vis[newx][newy] = 0; // backtracking
	}	
	
	// for left
	
	bool leftAns = false;
	 newx = srcx;
	newy = srcy-1;
	
	if(isSafe(newx, newy, board, vis)){
		vis[newx][newy]=  1;
		output.push_back('L');
		leftAns = solve(newx, newy, destx, desty,board, vis, output , path);
		output.pop_back();
		vis[newx][newy] = 0; // backtracking
	}
	
	
	// for right
	bool rightAns = false;
	 newx = srcx;
	 newy = srcy +1;
	if(isSafe(newx, newy, board, vis)){
		vis[newx][newy]=  1;
		output.push_back('R');
	rightAns = 	solve(newx, newy, destx, desty,board, vis, output , path);
	output.pop_back();
		vis[newx][newy] = 0; // backtracking
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
if(downAns || upAns||leftAns|| rightAns){
	return true;
}else{
	return false;	
}
	

 }
 
 
int main(){
 
 int n,m;
  cout<<"enter the number or rows "<<endl;
  cin>>n;
   cout<<"enter the number of columns "<<endl;
   cin>>m;
   
   vector<vector<int>> board;
   cout<<"enter the values of your baord"<<endl;
   
   for(int i =0; i <n; i++){
   	
   	vector<int >temp;
   	for(int j =0; j < m; j++){
   		int value;
   		 cin>>value;
   		 temp.push_back(value);
	   }
	   
	   board.push_back(temp);
   }   
   
//   board[2][0] = 0	;
   
   cout<<"your baord is "<<endl;
   for(int i =0; i <n; i++){
   
   for(int j =0; j <m; j++){
   	cout<<board[i][j]<<" ";
  		 }
   	cout<<endl;
   }
 	
 	
vector<vector<int>> vis;
//vis[0][0] =1;

for(int i =0; i <n; i++){
	vector<int>temp;
	for(int j =0; j <m; j++){
		temp.push_back(0);
	}
	vis.push_back(temp);
}

vis[0][0] = 1;
cout<<"your visited board  is "<<endl;
   for(int i =0; i <n; i++){
   
   for(int j =0; j <m; j++){
   	cout<<vis[i][j]<<" ";
  		 }
   	cout<<endl;
   } 	


		string output= ""; 
		vector<string>path;	
 	bool ans = solve(0,0 , n-1, m-1, board, vis , output, path);
 	if(ans == true){
 		cout<<"path is present "<<endl;
	 }
	 else{
	 	cout<<"path is not present "<<endl;
	 }
	 
	 
	 cout<<"all paths are "<<endl;
	 for(int i =0; i < path.size(); i++){
	 	cout<<path[i]<<" ";
	 }
 	
 }