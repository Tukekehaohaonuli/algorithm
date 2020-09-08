#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=1001;
struct Rice{
	int price;
	int num;
}rice[maxn];
bool cmp(Rice a,Rice b){
	return a.price<b.price;
} 
int main(){
	int c;
	scanf("%d",&c);
	int n,m;
	while(c--){
		double ans=0;
		scanf("%d%d",&n,&m);
		for(int i=0;i<m;i++){
			scanf("%d%d",&rice[i].price,&rice[i].num);
		}
		
		sort(rice,rice+m,cmp);
	//	printf("-********");
		int cnt=0;
		while(n>0){
			if(rice[cnt].num<=0)
			cnt++;
			if(n/rice[cnt].price>=1){
				n-=rice[cnt].price;
				rice[cnt].num--;
				ans+=1;
			}
			else{
				ans+=1.0*n/rice[cnt].price;
				n=0;
			}
		}
		printf("%.2f\n",ans);
	}
	return 0;
}
