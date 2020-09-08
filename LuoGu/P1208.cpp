#include<cstdio>
#include<algorithm>
using namespace std;
struct milk{
	int num;
	int price;
}ml[2000001];
bool cmp(milk l1,milk l2){
	if(l1.price<l2.price)return 1;
	else return 0;
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++)
	scanf("%d%d",&ml[i].price,&ml[i].num);
	int ans=0;
	sort(ml,ml+m,cmp);
	int nownumber=0,need=0;
	int i=0;
	while(nownumber<n){
		need=n-nownumber;
		if(need>=ml[i].num){
			ans+=ml[i].num*ml[i].price;
			nownumber+=ml[i].num;
			i++;
		}
		else{
			ans+=need*ml[i].price;
			break;
		}
	}
	printf("%d",ans);
	return 0;
}
