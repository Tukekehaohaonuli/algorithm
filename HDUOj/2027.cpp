#include<cstdio>
#include<ctype.h>
int main(){
	int n;
	char temp[101];
	scanf("%d%*c",&n);
	while(n--){
			gets(temp);
			int anum,eenum,inum,onum,unum;
			anum=eenum=inum=onum=unum=0;
			for(int j=0;temp[j];j++){
				if(tolower(temp[j])=='a') anum++;
				else if(tolower(temp[j])=='e') eenum++;
				else if(tolower(temp[j])=='i') inum++;
				else if(tolower(temp[j])=='o') onum++;
				else if(tolower(temp[j])=='u') unum++;
			}
			printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",anum,eenum,inum,onum,unum); //
			if (n) putchar('\n');
	}
	return 0;
}
