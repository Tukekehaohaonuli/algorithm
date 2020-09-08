#include<cstdio>
int main(){
	char temp[101];
	char c;
	while(scanf("%s",&temp)!=EOF){
		c=temp[0];
		for(int i=1;temp[i];i++){
			if(temp[i]>c)
			c=temp[i];
		}
		for(int i=0;temp[i];i++){
			if(temp[i]==c){
				printf("%c",temp[i]);
				printf("(max)");
			}
			else{
				printf("%c",temp[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
