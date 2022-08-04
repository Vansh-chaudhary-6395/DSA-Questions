#include<bits/stdc++.h>
using namespace std;
vector<int> LeadersElement(vector<int> &v){
	int size = v.size();
	
	int lst = v[size-1];
	
	vector<int> ans;
	ans.push_back(lst);
	for(int i= size-2; i>=0; i--){
		if(lst < v[i]){
			lst = v[i];
			ans.push_back(lst);		
		}
	}
	reverse(ans.begin(), ans.end());
	return ans;
}
int main(){
	int n;
	 cout<<"enter the size of vector "<<endl;
	 cin>>n;
	 vector<int >v;
	 vector<int> ans;
	 
	 cout<<"enter the elements of vector"<<endl;
	 for(int i=0; i<n; i++){
	 	int ele;
	 	 cin>>ele;
	 	v.push_back(ele);	 
	 }
	 ans = LeadersElement(v);
	 
	 cout<<"your leaders element are "<<endl;
	 for(int i =0; i< ans.size(); i++){
	 	cout<<ans[i]<< " ";
	 	
	 }
	 
}