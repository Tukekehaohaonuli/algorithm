#include<cstdio>
int main(){
	int n;
	int temp[55]={0,1,2,3,4};
	for(int i=5;i<55l;i++){
		temp[i]=temp[i-1]+temp[i-3];
	}
	while(scanf("%d",&n),n){
		printf("%d\n",temp[n]);
	}
	return 0;
}
