#include<cstdio>
int temp[5][5]={{0,-1,1,1,-1},{1,0,-1,1,-1},{-1,1,0,-1,1},{-1,-1,1,0,1},{1,1,-1,-1,0}};
int na[200],nb[200];
int ans1,ans2;
int main(){
	int n,n1,n2;
	scanf("%d%d%d",&n,&n1,&n2);
	for(int i=0;i<n1;i++)
	scanf("%d",na+i);
	for(int i=0;i<n2;i++)
	scanf("%d",nb+i);
	for(int i=0;i<n;i++){
		int k=temp[na[i%n1]][nb[i%n2]];
		if(k==1)
		ans1++;
		else
		ans2-=k;
	}
	printf("%d %d",ans1,ans2);
	return 0;
}
