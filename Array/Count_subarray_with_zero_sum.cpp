#include<iostream>
#include<unordered_map>
using namespace std;


int cntSubarrayWithZeroSum(int* arr, int n){
		
		unordered_map<int, int>mp;
		int sum =0;
		int cnt =0;
		for(int i =0; i <n; i++){
			sum += arr[i];
			if(sum == 0){
				cnt++;
			}	
			if(mp.find(sum) != mp.end()){
				
				cnt += mp[sum];
			}

			mp[sum]++;
		}
			
		return cnt;
}
int main(){
	
	int n;
	cout<<"enter the siz of the array "<<endl;
	cin>>n;
	
	int *arr = new int[n];
	
	cout<<"enter  array elements "<<endl;
	for(int i =0; i<n; i++){
		cin>>arr[i];
	}
	
	cout<<"your array elements "<<endl;
	for(int i =0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	int ans = cntSubarrayWithZeroSum(arr, n);
	cout<<"total number of subarray with zero sum are "<<ans<<endl;
	
	

}