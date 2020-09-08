#include<cstdio>
int main(){
	unsigned int a,b;
	while(scanf("%u%u",&a,&b)!=EOF){
		unsigned int ans1=0,ans2=0;
		if(a>b){
			ans1=a;
			a=b;
			b=ans1;
		}
		for(int i=a;i<=b;i++){
			if(i%2==0)
			ans1+=i*i;
			else
			ans2+=i*i*i;
		}
		printf("%u %u\n",ans1,ans2);
	}
	return 0;
}
