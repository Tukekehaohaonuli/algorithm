#include<cstdio>
int main(){
	int n;
	scanf("%d",&n);
	int a,b,c;
	int temp[]={7,6,5,4,3,2};
	while(n--){
		scanf("%d%d%d",&a,&b,&c);
		if(a>6){
			b+=(a-6)*(temp[0]+1);
			b+=7+6+5+4+3+2;
		}
		else{
			for(int i=0;i<a;i++)
			b+=temp[i];
		}
		if(b>=c)
		printf("Yes\n");
		else
		printf("No\n");
	}
	return 0;
}
