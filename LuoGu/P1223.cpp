#include<cstdio>
#include<algorithm>
struct student{
	int time;
	int num;
}stu[1001];
bool cmp(student t1,student t2){
	if(t1.time==t2.time)return t1.num<t2.num;
	else return t1.time<t2.time;
}
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&stu[i].time);
		stu[i].num=i;
	}
	sort(stu+1,stu+n+1,cmp);
	int k=n-1;
	double ans=0;
	for(int i=1;i<=n;i++){
		ans+=k--*stu[i].time;
		printf("%d ",stu[i].num);
	}
	printf("\n%.2f",ans/n);
	return 0;
}
