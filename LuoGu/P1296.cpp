#include<stdio.h>
#define N 100000000
#define f(i,j,n) for(i=j;i<n;i++) 
int main(){
	int n,d,i,last=0,num=0;
	scanf("%d%d",&n,&d);
	int temp[N]={0};
	int a[N]={0};
	f(i,0,n)
	scanf("%d",&temp[i]);
	f(i,0,n)
	a[temp[i]]=1;
	f(i,0,N){
		if(last!=0&&(i-last)<=d){
			num++;
			last=i;
		}
	}
	printf("%d",num);
	return 0;
} 
