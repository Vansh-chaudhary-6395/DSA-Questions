#include<iostream>
using namespace std;
bool isPrime(int n){
    bool flag = true;

    for(int i=2; i<n; i++){
        if((n%i) == 0){
            flag = false;
        }
    }
    return flag;
}

int main(){
    int n;
    cout<<"enter a number "<<endl;
    cin>>n;   
    if(isPrime(n)){
        cout<<"yes it is prime; "<<endl;
    }   
    else{
        cout<<"no it is not a prime number "<<endl;
    }

    
    return 0;
}