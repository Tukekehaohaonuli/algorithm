#include<cstdio>
bool value(int n){
	if(n<=2){
		return true;
	}
	for(int i=2;i<n/2;i++){
		if(n%i==0)
		return true;
	}
	return false;
}
int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	int ans=0;
	while(x!=0||y!=0){
		for(int i=x;i<=y;i++){
			if(!value(i)){
			printf("Sorry\n");
			break;
			}
			else
			ans++;
		}
		if(ans==(y-x+1))
		printf("OK\n");
		scanf("%d%d",&x,&y);
		ans=0;
	}
	return 0;
}
