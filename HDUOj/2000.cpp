#include<cstdio>
int main(){
	char a,b,c;
	while(scanf("%c%c%c%*c",&a,&b,&c)!=EOF){
		char d;
		if(a>b){
			d=a;
			a=b;
			b=d;
		} 
		if(b>c){
			d=b;
			b=c;
			c=d;
		}
		if(a>b){
			d=a;
			a=b;
			b=d;
		}
		printf("%c %c %c\n",a,b,c);
	}
	return 0;
}
