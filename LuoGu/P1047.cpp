#include<iostream>
#define f(i,j,n) for(int i=j;i<n;i++)
int temp[10001]={0};
int start[101];
int end1[101];
int main(){
	using namespace std;
	int l,m;
	cin >> l>>m;
	f(i,0,m){
		cin>>start[i]>>end1[i];
		f(j,start[i],end1[i]+1){
			temp[j]=1;
		}
	}
	int sum=0;
	f(i,0,l+1)
		if(temp[i]==1){
			sum++;
		}
	cout<<l-sum+1;
	return 0;	
}
