#include<stdio.h>
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int sum=n;
	while(n>k){
		n-=k;
		sum+=1;
		n+=1;
	}
	printf("%d",sum);
	return 0;
}
