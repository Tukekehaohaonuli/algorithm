#include<cstdio>
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m),n||m){
		int value=0;
		int i,j;
		for(i=-10000;i<=10000;i++){
			for(j=-10000;j<=10000;j++){
				if(i+j==n&&i*j==m)
				break;
			}
			if(j==10001)
			value++;
			else{
				printf("Yes\n");
				break;
			}
		}
		if(value==20001)
		printf("No\n");
	}
	return 0;
}
