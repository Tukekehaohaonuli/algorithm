#include<stdio.h>
#define N 100001
#define f(i,j,n) for(int i=j;i<n;i++)
int main(){
	int n;
	int temp[N];
	scanf("%d",&n);
	f(i,0,n)
	scanf("%d",&temp[i]);
	int last=0,now=0,num=0,next;
//	printf("%d",num);
	f(i,1,n){
		next=temp[i];
		if(next>now&&last>now){
			num++;
			last=next;
			now=next;
		}
		else if(next==now){
			continue;
		}
		else{
			now=next;
			last=next;
		}
	}
	printf("%d",num);
}
