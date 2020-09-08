#include<cstdio>
#include<cmath>
int score[21][21];
int main(){
	int m,n,k;
	scanf("%d%d%d",&m,&n,&k);
	int ans=0,max=0,maxi=0,maxj=0;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&score[i][j]);
			if(score[i][j]>max){
			max=score[i][j];maxi=i;maxj=j;
			}
		}
	}
	int nowi=0,nowj=0,value=0;
	int distance=(maxi-nowi)*2+1;
	while(distance<=k){
		if(!value){
			k=k-maxi-1;
			value=1;
		}
		else
		k=k-(abs(maxi-nowi)+abs(maxj-nowj))-1;
		ans+=score[maxi][maxj];
		nowi=maxi,nowj=maxj;
		score[maxi][maxj]=0;
		maxi=maxj=max=0;
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
				if(score[i][j]>max){
					maxi=i;maxj=j;max=score[i][j];
				}
				
			}
		}
		distance=abs(maxi-nowi)+abs(maxj-nowj)+maxi+1;
	}
	printf("%d",ans);
	return 0;
}
