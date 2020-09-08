#include<stdio.h>
#define f(i,j,n) for(i=j;i<=n;i++)
int number(int n){
	int t=0;
	int j;
	while(n>10){
		j=n%10;
		if(j==2)
		t++;
		n=n/10;
	}
	if(n==2) t++;
	return t;
}
int main(){
	int l,r,i;
	int num=0;
	scanf("%d%d",&l,&r);
	f(i,l,r){
		num+=number(i);
	}
	printf("%d",num);
}
