#include<cstdio>
#include<cmath>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%.0f\n",pow(3,n-1)+1);
	}
	return 0;
} 
