#include<iostream>
using namespace std;

int subsequences(string str, string output[]){
	
	if(str.length() == 0){
		output[0] = "";
		return 1;
	}
	int small_size = subsequences(str.substr(1),output);
	
	for(int i =0; i <small_size; i++){
		output[i + small_size] = str[0] + output[i];
	}
	return 2*small_size;
}
int main(){
	
	string s;
	cout<<"enter the string "<<endl;
	cin>>s;
	string output[1000];
	int output_size = subsequences(s, output);
	cout<<"your subsequences are  : "<<endl;
	 for(int i =0; i <output_size; i++){
	 	cout<<output[i]<<endl;
	 }
}