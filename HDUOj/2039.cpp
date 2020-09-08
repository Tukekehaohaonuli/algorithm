#include<cstdio>
int main(){
	int m;
	scanf("%d",&m);
	float a,b,c;
	while(m--){
		scanf("%f%f%f",&a,&b,&c);
		if((a+b)>c&&(a+c)>b&&(b+c)>a&&(a-b)<c&&(a-c)<b&&(b-c)<a)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
} 
