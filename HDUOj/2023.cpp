#include<cstdio>
int temp[51][5];
int main(){
	int n,m,i,j;
	int num=0;
	while(scanf("%d%d",&n,&m)!=EOF){
		float kScore[5]={0};
		float stuScore[51]={0};		
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				scanf("%d",&temp[i][j]);
				stuScore[i]+=temp[i][j];
			}
		}
		
		for(i=0;i<n;i++){
			printf("%.2f%c",stuScore[i]*1.0/m,i<(n-1)?' ':'\n');
		}
		for(j=0;j<m;j++){
			for(i=0;i<n;i++){
				kScore[j]+=temp[i][j];
			}
		}
		for(j=0;j<m;j++)
		printf("%.2f%c",kScore[j]*1.0/n,j<(m-1)?' ':'\n');
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(temp[i][j]<kScore[j]*1.0/n)
				break;
			}
			if(j==m)
			num++;
		}
		printf("%d\n\n",num);
		num=0;
	}
	return 0;
}
