#include<iostream>
#include<vector>
using namespace std;

int merge(int* arr, vector<int>&temp , int start , int mid ,  int end ){
	
	int c=0;
	int i =start;
	 int j = mid+1;
	  int k =start;
	  while(i <= mid && j <= end ){
	  	
	  	if(arr[i] <= arr[j] ){
	  		temp[k] = arr[i];
	  		k++;
	  		i++;
		  }
		  else{
		  	c +=  mid-i+1;
		  	temp[k] = arr[j];
		  	 k++;
		  	  j++;
		  }
	  }
	  
	  
	  while(i <= mid){
	  	temp[k++] = arr[i++];
	  } 
		
	while(j <= mid){
	  	temp[k++] = arr[j++];
	  }
	  
	  
//	   now make original array sorted by copying temp elements
//		for(int i = 0 ; i <temp.size(); i++){
//			arr[i] =  temp[i];
//		}

while(start <= end){
	arr[start] = temp[start];
	 ++start;
}	  
	  
	  return c;
	   	
}



int CountInversions(int* arr, vector<int>&temp,int start , int end){
	
	if(start >= end){
		return 0;
	}
	
	int mid = start + (end -start)/2;
	
	int c=0;	
	c += CountInversions(arr , temp , start , mid);
	c += CountInversions(arr , temp , mid+1 , end);
	
	c += merge(arr, temp , start , mid , end);
	return c;
}


 int main(){
 	
 		int n;
 	cout<<"enter the size of the array "<<endl;
 	cin>>n;
 	
 	
 	int * arr =  new int[n];
 
 	cout<<"enter the array elements "<<endl;
 	for(int i =0; i <n; i++){
 		cin>>arr[i];  
	 }
	 vector<int>temp(n , 0);
 	
 	
 	int ans =CountInversions(arr, temp , 0 , n-1 );
 	cout<<"sorted array is "<<endl;
 	for(int i =0; i < n; i++){
 		cout<<arr[i]<<" ";
	 }
	 cout<<"total number of inverisions are "<<ans<<endl;
 }