#include<iostream>
using namespace std;

class Node{
	public :
		int data;
		 Node* left;
		  Node*right;
		  
		  Node(int x){
		  	this->data =x;
		  	this->left = NULL;
		  	this->right = NULL;
		  }
		  
};

Node* takeInput(Node* root){
	int data;
	 cout<<"enter the data "<<endl;
	 cin>>data;
	 
	 root = new Node(data);
	 
	 if(data ==-1){
	 	return NULL;
	 }
	 
	 
cout<<"enter the data of left of "<<data<<" "<<endl;
root->left =  takeInput(root->left);

cout<<"enter the data of right of the "<<data<<" "<<endl;
root->right = takeInput(root->right);
	
	return root;	  
	 
}

void print(Node* root){
	
	if(root == NULL){
		return;
	}
	cout<<root->data<<" ";
	print(root->left);
	 print(root->right);
}

void solve(Node* root, vector<string>&ans, string s){
	if(root->left == NULL && root->right == NULL){
		ans.push_back(s);
		return;
		
	}
	
	
	
	int data = root->data;
	 s +=  to_string(data);
	 s += "->";
	 solve(root->left, ans,s);
	 solve(root->right, ans, s);
	 s.pop_back();
	 s.pop_back();
	
	
}
vector<string> paths(Node* root){
	
	
	vector<string>res;
	solve(root, res);
	 return res;
	
}
int main(){
	
	Node* root = NULL;
	 Node* res = takeInput(root);
	 cout<<"print the tree "<<endl;
	 print(res);
			
	return 0;
}