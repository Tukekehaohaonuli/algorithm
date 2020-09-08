#include<cstdio>
int main(){
	int n,m,num;
	int temp[103];
	while(scanf("%d%d",&n,&m),n||m){
		for(int i=0;i<n;i++){
			scanf("%d",&temp[i]);
			if(m>temp[i]){
				num++;
			}
		}
		for(int i=n-1;i>=num;i--){
			temp[i+1]=temp[i];
		}
		temp[num]=m;
		for(int i=0;i<n+1;i++){
			printf("%d%c",temp[i],(i<n?' ':'\n'));
		}
	}
	return 0;
}
