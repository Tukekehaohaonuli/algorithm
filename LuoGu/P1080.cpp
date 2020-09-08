#include<cstdio>
#include<algorithm>
using namespace std;
struct student{
	int a,b;
	long long sum;
}stu[1001];
bool cmp(student t1,student t2){
	return t1.sum<t2.sum;
}
int main(){
	int n;
	scanf("%d",&n);
//	int pa,pb;
//	scanf("%d%d",&pa,&pb);
	for(int i=0;i<=n;i++){
		scanf("%d%d",&stu[i].a,&stu[i].b);
		stu[i].sum=stu[i].a*stu[i].b;
	}
	sort(stu+1,stu+n+1,cmp);
	double max=0;
	double now=0;
	long long ans=stu[0].a;
	for(int i=1;i<=n;i++){
		now=ans*1.0/stu[i].b;
		if(now>max)
		max=now;
		ans*=stu[i].a;
	}
	printf("%d",int(max));
	return 0;
}
