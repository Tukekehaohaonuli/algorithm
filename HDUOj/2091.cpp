#include<cstdio>
int main(){
	char c;
	int n;
	int value =0;
	while(scanf("%c",&c),c!='@'){
		scanf("%d%*c",&n);	
		if(value==0)
		value++;
		else
		printf("\n");
		for(int i=1;i<=n;i++){
			for(int j=1;j<=2*n-1;j++){
				if(i==n)
				printf("%c",c);
				else if((i+j==n+1)||(j==n+i-1)){
					printf("%c",c);
				}
				else
				printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}
