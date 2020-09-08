#include<cstdio>
int main(){
	int ayear[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int byear[]={31,29,31,30,31,30,31,31,30,31,30,31};
	int a,b,c;
	while(scanf("%d/%d/%d",&a,&b,&c)!=EOF){
		int ans=0;
		if(a%400==0||(a%4==0&&a%100!=0)){
			for(int i=0;i<b-1;i++){
				ans+=byear[i];
			}
		}
		else
		for(int i=0;i<b-1;i++)
		ans+=ayear[i];
		ans+=c;
		printf("%d\n",ans);
	}
	return 0;
}
