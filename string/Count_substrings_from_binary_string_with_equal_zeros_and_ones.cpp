#include<iostream>
using namespace std;
int cntSubstrings(string s){
	int n = s.length();
	 int cnt =0;
	  int x =0; //  store the cnt of zeros
	   int y =0 ; // store the cnt of ones
	for(int i =0; i <n; i++){
		if(s[i] == '0'){
			x++;
		}
		else if(s[i] == '1'){
			y++;
		}
		if(x==y){
			cnt++;
		}
	}
	if(x != y){
		return -1;
	}
	else{
		return cnt;
	}
}
int main(){
	
	string s ;
	cout<<"enter the binary string only "<<endl;
	cin>>s;
	
	int cnt = cntSubstrings(s);
	cout<<"total substrings  with equal nymber of zeros and ones are :  "<<cnt<<endl;
}
