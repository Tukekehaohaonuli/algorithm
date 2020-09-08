#include<cstdio>
#include<cmath>
#include<algorithm>
struct distance{
	int x,y;
}dis[101];
double f(distance t1,distance t2){
	return sqrt((t2.x-t1.x)*(t2.x-t1.x)+(t2.y-t1.y)*(t2.y-t1.y));
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d%d",&dis[i].x,&dis[i].y);
	double ans=f(dis[0],dis[1]);
	for(int i=0;i<n-1;i++)
	for(int j=i+1;j<n;j++){
		double min=f(dis[i],dis[j]);
		if(min<ans)
		ans=min;
	}
	printf("%.2f",ans);
	return 0;
}
