#include<cstdio>
int main(){
	int n;
	int temp,min=100,max=0;
	float ans=0;
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++){
			scanf("%d",&temp);
			if(temp>max)
			max=temp;
			if(temp<min)
			min=temp;
			ans+=temp;
		}
		ans=ans-min-max;
		printf("%.2f\n",ans/(n-2));
		ans=0;
		min=100;
		max=0;
	}
	return 0;
}
