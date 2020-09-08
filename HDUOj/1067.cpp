#include<cstdio>
int main(){
	int n;
	scanf("%d",&n);
	int t;
	for(int i=n;i>=0;i--){
		scanf("%d",&t);
		if(t!=0){
			if(i==0){
				if(t>0)
				printf("+%d",t);
				else
				printf("%d",t);
			}
			else if(i==1){
				if(t==1)
				printf("+x");
				else if(t==-1)
				printf("-x");
				else if(t>0)
				printf("+%dx",t);
				else
				printf("%dx",t);
			}
			else if(i==n){
				if(t==1){
					printf("x^%d",i);
				}
				else if(t==-1)
				printf("-x^%d",i);
				else if(t>0)
				printf("%dx^%d",t,i);
				else
				printf("%dx^%d",t,i);
				 
			}
			else{
				if(t==1)
				printf("+x^%d",i);
				else if(t==-1)
				printf("-x^%d",i);
				else if(t>0)
				printf("+%dx^%d",t,i);
				else
				printf("%dx^%d",t,i);
			}
		}
	}
	return 0;
} 
