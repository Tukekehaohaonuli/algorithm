#include<cstdio>
int num;
void move(char x,char y){
	num++;
}
void hannuo(int n,char one,char two,char three){
	if(n==1){
		move(one,two);
		move(two,three);
	}
	else{
		hannuo(n-1,one,two,three);
		move(one,two);
		hannuo(n-1,three,two,one);
		move(two,three);
		hannuo(n-1,one,two,three);
	}
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		num=0;
		hannuo(n,'A','B','C');
		printf("%d\n",num);
	}
	return 0;
}
