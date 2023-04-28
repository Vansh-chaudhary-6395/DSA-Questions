#include<iostream>
using namespace std;
void solve(int n){
	if(n <= 0){
		return;
	}
	
	solve(n/10);
	int digit = n%10;
	cout<<digit<<endl;
	
}
 int main(){
 	int n;
 	 cout<<"enter the number"<<endl;
 	cin>>n;
	  solve(n);
 }