#include<cstdio>
#include<algorithm>
using namespace std;
struct timetable{
	int start;
	int end;
}time[100001];
bool cmp(timetable t1,timetable t2){
	return t1.end<t2.end;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d%d",&time[i].start,&time[i].end);
	sort(time,time+n,cmp);
	int ans=0;
	int nowend=0;
	for(int i=0;i<n;i++){
		if(time[i].start>=nowend){
			ans++;
			nowend=time[i].end;
		}
	}
	printf("%d",ans);
	return 0;
}
