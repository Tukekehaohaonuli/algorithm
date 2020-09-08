#include<cstdio>
int temp[10000][4];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d%d%d",&temp[i][0],&temp[i][1],&temp[i][2],&temp[i][3]);
	}
	int x,y;
	scanf("%d%d",&x,&y);
	int ans=-1;
	for(int i=0;i<n;i++){
		if(x>=temp[i][0]&&y>=temp[i][1]&&x<=temp[i][0]+temp[i][2]&&y<=temp[i][1]+temp[i][3])
		ans=i+1;
	}
	printf("%d",ans);
	return 0;
}
