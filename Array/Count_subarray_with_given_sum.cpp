#include<iostream>
#include<unordered_map>
using namespace std;


int cntSubarrayWithZeroSum(int* arr, int n, int sum){
		
		unordered_map<int, int>mp;
		int curr_sum =0;
		int cnt =0;
		for(int i =0; i <n; i++){
			curr_sum += arr[i];
			if(curr_sum == 0){
				cnt++;
			}	
			if(mp.find(curr_sum - sum) != mp.end()){
				
				cnt += mp[curr_sum - sum ];
			}

			mp[curr_sum]++;
		}
			
		return cnt;
}
int main(){
	
	int n , given_sum;
	cout<<"enter the siz of the array "<<endl;
	cin>>n;
	cout<<"enter the given sum"<<endl;
	cin>>given_sum;
	int *arr = new int[n];
	
	cout<<"enter  array elements "<<endl;
	for(int i =0; i<n; i++){
		cin>>arr[i];
	}
//	10, 2, -2, -20, 10
	cout<<"your array elements  : ";
	for(int i =0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	int ans = cntSubarrayWithZeroSum(arr, n, given_sum);
	cout<<endl;
	cout<<"total number of subarray with zero sum are : "<<ans<<endl;
	
	

}