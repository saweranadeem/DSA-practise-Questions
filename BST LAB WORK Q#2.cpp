#include<iostream>
using namespace std;
struct node{      //Structure For BST
	int data;
	node*left;
	node*right;
	node(int value) //Constructor
	{
		data=value;
		left=NULL;
		right=NULL;
	}
};
node*insert(node*root,int value){ // by using the values we create a tree
	if(root==NULL){     //base case     
		return new node(value);// here, we create a node for value
	}
	if(value>root->data){
	 root->right=insert(root->right,value);
}
	else{            //value<root->data
		root->left=insert(root->left,value);
	}
	return root;
}
void inorder(node*root){
	if(root==NULL){
	return ;
		
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
node*search(node*root,int key){
	if(root==NULL)
	{
		return NULL;
	}
	if(root->data==key){
		return root;
		
	}
	if(root->data>key){
		return search(root->left,key);
	}
	else{    //root->data<key
		return search(root->right,key);
	}
}
int main(){
	int key;
     node*root=NULL;
      root=insert(root,15);
   insert(root,21);
   insert(root,33);
   insert(root,40);
   insert(root,12);
   insert(root,17); 
   //prints in ascending order
   cout<<"Tree in order is:"<<endl;
	inorder(root);
   cout<<endl;
   // for search 
   cout<<"\nEnter the key which you want to Search:";
	cin>>key;
	if(search(root,key)!=NULL)
	{
		cout<<"\nThe value exist";
	}
	else
	{ 
	cout<<"\nThe value does not exist";
   }
   cout<<endl;


	return 0;
}

