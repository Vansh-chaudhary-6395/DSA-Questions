#include<iostream>
 #include<bits/stdc++.h>
using namespace std;

// using two pointer approach

 vector<pair<int, int>> solve(vector<int>arr , int given_diff){
 	
 	vector<pair<int, int>>res;
		
		sort(arr.begin(), arr.end());
		int i =0;
		 int  j =1;
		 while(j <arr.size()){
		 	
		 	int my_diff =  arr[j] - arr[i];
		 	 if(my_diff ==  given_diff){
		 	 	
		 	 	pair<int, int>p;
		 	 	p.first = arr[i];
		 	 	 p.second  = arr[j];
		 	 	 res.push_back(p);
				   i++;
		 	 	 j++;
			  }
			  else if(my_diff >  given_diff){
			  	i++;
			  }
			else{
				j++;
			}			 	
		 } 	
 	
 	
 	
 	
 	
 	
 	return res;
 }

int main(){
	int n;
	 cout<<"enter the size of the vector "<<endl;
	 cin>>n;
	 
	 vector<int>arr;
	 int diff;
	  cout<<"enter the  difference which is checked"<<endl;
	  cin>>diff;
	 cout<<"enter the elements "<<endl;
	 for(int i =0; i <n; i++){
	 	 int ele ;
	 	  cin>>ele;
	 	  arr.push_back(ele);
	 }
	 
	 vector<pair<int, int>>res;
	 res = solve(arr , diff);
	
	cout<<"all pairs are "<<endl;
	for(auto i : res){
		cout<<i.first<<" "<<i.second<<endl;
	} 
	cout<<endl;
	
	
	set<pair<int, int>>st;
	 st.insert({1,2});
	 st.insert({2,1});
	 cout<<"set size is "<<st.size();
	 
	
	
	
	 
	 
}