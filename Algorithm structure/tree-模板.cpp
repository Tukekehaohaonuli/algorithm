#include<cstdio>
#include<queue>
struct node {
	int data;
	int layer;
	node *lchild;
	node *rchild;
};
node *newNode(int v){
	node *Node =new node;
	Node->data=v;
	Node->lchild=Node->rchild=NULL;
	return Node;
}
void search (node *root,int x,int newdata){
	if(root==NULL)
	return ;
	if(root->data==x)
	root->data=newdata;
	search(root->lchild,x,newdata);
	search(root->rchild,x,newdata);
}
void insert(node*&root,int x){
	if(root==NULL){
		root=newNode(x);
		return ;
	}
	if(root->data>x){
		insert(root->lchild,x);
	}
	else{
		insert(root->rchild,x);
	}
}
node * Create(int data[],int n){
	node*root=NULL;
	for(int i=0;i<n;i++){
		insert(root,data[i]);
	}
	return root;
}
void Layorder(node *root){  //层次遍历 
	queue <node*>q;
	root->layer=1;
	q.push(root);
	while(!q.empty()){
		node*now=q.front():
		q.pop();
		printf("%d",now->data);
		if(now->lchild!=NULL){
			now->lchild->layer=now->layer+1;
			q.push(now->lchild);
		} 
		if(now->rchild!=NULL){
			now->rchild->layer=now->layer+1;
			q.push(now->rchild);
		}
	}
}
//先序和中序建立二叉树
node*create(int preL,int preR,int inL,int inR){
	if(preL>preR)
	return NULL;
	node*root=new node;
	root->data=pre[preL];
	int k=inL;
	while(in[k]!=pre[preL])
	k++;
	int numLeft=k-inL;
	root->lchild=create(preL,preL+numLeft,inL,k-1);
	root->rchild=create(prel+numLeft+1,preR,k+1,inR);
	return root;
} 

struct node {
	int data;
	int lchild;
	int rchild;
}Node[maxn];
int index=0;
int newNode(int v){
	Node[index].data=v;
	Node[index].lchild=-1;
	Node[index].rchild=-1;
	return index++;
}
void search(int root,int x,int newdata){
	if(root==-1){
		return ;
	}
	if(Node[root].data==x)
	Node[root].data=newdata;
	search(Node[root].lchild,x,newdata);
	search(Node[root].rchild,x,newdata);
}
void insert(int &root,int x){
	if(root==-1){
		root=newNode(x);
		return ;
	}
	if(root->data>x){
		insert(Node[root].lchild,x);
	}
	else{
		insert(Node[root].rchild,x);
	}
}
int Create(int data[],int n){
	int root=-1;
	for(int i=0;i<n;i++)
	insert(root,data[i]);
	return root;
}
void preorder(int root){
	if(root==-1){
		return ;
	}
	printf("%d\n",Node[root].data);
	preorder(Node[root].lchild);
	preorder(Node[root].rchild);
}
void deleteNode(node*&root,int x){
	if(root==NULL) return ;
	if(root->data==x){
		if(root->lchild==NULL&&root->rchild==NULL)
		root=NULL;
		else if(root->lchild!=NULL){
			node*pre=findMax(root->lchlid);
			root->data=pre->data;
			deleteNode(root->lchild,pre->data);
		}
		else{
			node*next=findMin(root->rchild);
			root->data=next->data;
			deleteNode(root->rchild,next->data);
		}
	}
	else if(root->data>x){
		deleteNode(root->lchild,x);
	}
	else{
		deleteNode(root->rchild,x);
	}
}
























int main(){
	
}
