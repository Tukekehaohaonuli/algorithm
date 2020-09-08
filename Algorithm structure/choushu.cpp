#include<cstdio>
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		while(n%7==0)
		n/=7;
		while(n%5==0)
		n/=5;
		while(n%3==0)
		n/=3;
		while(n%2==0)
		n/=2;
		if(n==1)
		printf("yes");
		else{
			printf("no");
		}
		
	}
	return 0;
}
