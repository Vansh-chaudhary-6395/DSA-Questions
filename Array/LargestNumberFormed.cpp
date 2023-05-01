#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(string a , string b){
	string t1 = a+b;
	 string t2 = b+a;
	 return t1 > t2;
}

string solver(vector<int>arr){
	vector<string>temp;
	 string ans = "";
	for(auto i : arr){
		temp.push_back(to_string(i));
		
	}
	
	sort(temp.begin(), temp.end() , cmp);
	
	for(auto j : temp){
		ans += j;
	}
	return ans;
	
	
	
	
}

 int main(){
 	
 	int n;
 	 cout<<"enter the size of the array "<<endl;
 	 cin>>n;
 	 
 	 vector<int>arr;
 	  cout<<"enter the elements of the vector "<<endl;
	   for(int i =0; i < n; i++){
 	  	int ele ;
 	  	 cin>>ele;
 	  	  arr.push_back(ele);
	   }
	   
	   
	   string largest  = solver(arr);
	   cout<<"largest number formed with the help of the array elements in the form of string is "<<largest<<endl;
	   
	   
	   
	   
 }