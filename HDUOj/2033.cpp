#include<cstdio>
int main(){
	int n;
	int ah,am,as,bh,bm,bs;
	int endh,endm,ends;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d%d%d%d%d",&ah,&am,&as,&bh,&bm,&bs);
		ends=(as+bs)%60;
		endm=(am+bm+(as+bs)/60)%60;
		endh=(ah+bh+(am+bm+(as+bs)/60)/60);
		printf("%d %d %d\n",endh,endm,ends);
	}
	return 0;
}
