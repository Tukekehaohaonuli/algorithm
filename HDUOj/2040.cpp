#include<cstdio>
bool value(int a,int b){
	int ans=0;
	for(int i=1;i<a;i++){
		if(a%i==0)
		ans+=i;
	}
	if(ans==b)
	return true;
	ans=0;
	for(int i=1;i<b;i++){
		if(b%i==0)
		ans+=i;
	}
	if(ans==a)
	return true;
	
	return false;
}
int main(){
	int m;
	scanf("%d",&m);
	int a,b;
	while(m--){
		scanf("%d%d",&a,&b);
		printf("%s",value(a,b)?"YES\n":"NO\n");
	}
	return 0;
}
