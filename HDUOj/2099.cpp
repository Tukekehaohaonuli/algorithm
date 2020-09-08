#include<cstdio>
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b),a||b){
		for(int i=a*100;i<a*100+99;i++){
			if(i%b==0)
			printf("%d ",i%100);
		}
		printf("\n");
	}
	return 0;
}
