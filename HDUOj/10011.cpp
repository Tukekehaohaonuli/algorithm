#include<cstdio>
const int maxn=10001;
int n,T;
int a[maxn];
int main(){
	scanf("%d",&T);
	while(T--){
	scanf("%d",&n);
	double ans=0;
	for(int i=0;i<n;i++)
	{	scanf("%d",a+i);
	ans+=1.0/a[i];
}
	
	printf("%.2f\n",ans);
}
	return 0;
} 
