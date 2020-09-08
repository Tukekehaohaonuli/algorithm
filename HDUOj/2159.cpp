#include<cstdio>
#include<algorithm>
using namespace std;
int n,m,k,s;
struct monster{
	int value;
	int patient;
	double t;
}mon[101];
bool cmp(monster m1,monster m2){
	return m1.t>m2.t;
}
int main(){
	while(scanf("%d%d%d%d",&n,&m,&k,&s)!=EOF){
		for(int i=0;i<k;i++){
			scanf("%d%d",&mon[i].value,&mon[i].patient);
			mon[i].t=mon[i].value*1.0/mon[i].patient;
		}
		sort(mon,mon+k,cmp);
		int i=0;
		while(m>0&&n>0&&k&&i<k){
			while(m>=mon[i].patient&&n>0&&s){
				n-=mon[i].value;
				m-=mon[i].patient;
				s--;
			}
			i++;
		}
		if(n>0)
		printf("-1");
		else{
			printf("%d\n",m);
		}
	}
	return 0;
}
