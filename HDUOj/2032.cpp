#include<cstdio>
int temp[30][30];
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++){
			for(int j=0;j<=i;j++){
				if(j==0||j==i)
				temp[i][j]=1;
				else
				temp[i][j]=temp[i-1][j-1]+temp[i-1][j];
				printf("%d ",temp[i][j]);
			}
			printf("\n\n");
		}
		
	}
	return 0;
}
