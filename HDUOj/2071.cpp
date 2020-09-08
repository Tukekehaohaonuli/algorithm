#include<cstdio>
int main(){
	int n,t;
	float temp;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		float max=0;
		for(int i=0;i<n;i++){
			scanf("%f",&temp);
			if(temp>max)
			max=temp;
		}
		printf("%.2f\n",max);
	}
	return 0;
}
