#include<cstdio>
#include<cmath>
int main(){
	int m,n;
	int max=0;
	int maxi,maxj,score;
	while(scanf("%d%d",&m,&n)!=EOF){
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				scanf("%d",&score);
				if((abs(score))>(abs(max))){
					maxi=i;maxj=j;max=score;
				}
			}
		}
		printf("%d %d %d\n",maxi+1,maxj+1,max);
		max=0;
	}
	return 0;
}
