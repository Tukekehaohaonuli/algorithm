#include<cstdio>
bool isPrime(int n){
	int a,b,c;
	int ans=n;
	a=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	c=n;
	if(a*a*a+b*b*b+c*c*c==ans)
	return true;
	else
	return false;
}
int main(){
	
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){
		int value=0;
		for(int i=a;i<=b;i++){
			if(isPrime(i)){
				value=1;
				printf("%d ",i);
			}
		}
		if(value==0)
		printf("no\n");
		else
		printf("\n");
	}
	return 0;
}
