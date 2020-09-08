#include<cstdio>
int main(){
	int n;
	scanf("%d",&n);
	long long int temp[51];
	while(n--){
		int a,b;
		scanf("%d%d",&a,&b);
		temp[a]=1;temp[a+1]=1;
		for(int i=a+2;i<=b;i++){
			temp[i]=temp[i-1]+temp[i-2];
		}
		printf("%d\n",a>b?0:temp[b]);
	}
	return 0;
}
