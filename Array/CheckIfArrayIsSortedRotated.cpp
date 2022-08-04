#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int> v, int n){
    int count =0;
    for(int i=1; i<n; i++){
        if(v[i-1] > v[i]){
            count++;
        }
        if(v[n-1] > v[0]){
            count++;
        }

    }
    if(count <= 1){
        return true;
    }
    return false;
}
int main(){
    int n;
 cout<<"enter the size of vector"<<endl;
  cin>>n;


  vector<int> v(n);
cout<<"enter the elements of the vector "<<endl;
  for(int i=0;i<n; i++){
      cin>>v[i];
  }
  if(check(v,n)){
      cout<<"array is sorted and rotated "<<endl;
  }
  else{
        cout<<"vector is not sorted rotated "<<endl;
  }
  
    return 0;
}