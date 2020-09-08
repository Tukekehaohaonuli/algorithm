#include<stdio.h>
#define f(i,j,n) for(int i=j;i<=n;i++)
int main(){
	int n;
	scanf("%d",&n);
	f(i,4,n){
		f(j,2,i){
			if(i%j==0&&(j+i/j)==i){
				printf("%d=%d+%d\n",i,j,i/j);
			}
		}
	}
}
