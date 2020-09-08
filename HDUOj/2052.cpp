#include<cstdio>
int main(){
	int n,m;
	while(scanf("%d%d",&m,&n)!=EOF){
		for(int i=0;i<n+2;i++){
			for(int j=0;j<m+2;j++){
				if(i==0&&(j==0||j==m+1)||i==n+1&&(j==0||j==m+1))
				printf("+");
				else if(j==0||j==m+1)
				printf("|");
				else if(i==0||i==n+1)
				printf("-");
				else
				printf(" ");
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
