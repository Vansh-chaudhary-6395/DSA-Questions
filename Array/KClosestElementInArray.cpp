#include<iostream>
 #include<bits/stdc++.h>
using namespace std;

// using two pointer approach

 vector<int> solve(vector<int>arr , int x , int k ){
 	
 			vector<int>res;
 		
 			
			 int low =0;
			  int high =  arr.size()-1;
			
			  while(high -low >= k){
			  	
			  		if( x - arr[low] > arr[high] -x){
//			  			high--;
						low++;
					  }  
					  else{
//					  	low++;
					  high--;
					  }
			  	
			  }
			  
			  for(int k = low ; k <= high; k++){
			  	res.push_back(arr[k]);
			  }
 					

 	return res;
 }

int main(){
	int n;
	 cout<<"enter the size of the vector "<<endl;
	 cin>>n;
	 
	 vector<int>arr;
	 int x;
	  cout<<"enter the  value of x"<<endl;
	  cin>>x;
	  
	  int k ;
	   cout<<"enter how many closest elements you want "<<endl;
	   cin>>k;
	 cout<<"enter the elements "<<endl;
	 for(int i =0; i <n; i++){
	 	 int ele ;
	 	  cin>>ele;
	 	  arr.push_back(ele);
	 }
	 vector<int>res;
	 
	 res = solve(arr , x , k);
	 cout<<"k closest elemnt to the given value are "<<endl;
	  for(auto j : res){
	  	cout<<j <<" ";
	  }
	  cout<<endl;
	 
	
	
	 
	 
}