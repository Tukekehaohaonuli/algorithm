#include<stdio.h>
#define f(i,j,n) for(int i=j;i<n;i++)
#define N 10001
int main(){
	int n;
	scanf("%d",&n);
	int temp[N];
	f(i,0,n)
	scanf("%d",&temp[i]);
	int num=1,last=temp[0],max=0;
//	printf("%d",last);
	f(i,1,n){
		if(temp[i]==last+1) num++;
		else {
			if(num>max)
			max=num;
			num=1;
		}
		last=temp[i];
	}
	printf("%d",max);
	return 0;
}
