#include<stdio.h>
void get3int(int n,int *a,int *b,int *c){
	*a=n/100;
	*b=n%10000;
	*b=*b/10;
	*c=n%1000;
}
//boolean isyes(int *a,int k){
//	if()
//}
int main(){
	int q,w,e;
	q=w=e=0;
	int *a=&q,*b=&w,*c=&e;
	int k,t=0;
//	get3int(12000,a,b,c);
//	printf("%d %d %d",*a,*b,*c);
	scanf("%d",&k);
	for(int i=10000;i<=30000;i++){
		get3int(i,a,b,c);
		if(*a%k==0&&*b%k==0&&*c%k==0){
		//	printf("%d %d %d",*a,*b,*c);
			if(t==0)
			printf("%d",i);
			else
			printf("\n%d",i);
			t++;
		}
	}
	if(t==0) printf("NO");
	return 0;
} 
