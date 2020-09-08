#include<cstdio>
#include<cstring>
int main(){
	int n;
	scanf("%d",&n);
	char temp[51];
	while(n--){
		gets(temp);s
		if(temp[0]!='_'&&!(temp[0]>='a'&&temp[0]<='z')&&!(temp[0]>='A'&&temp[0]<='Z')){
			printf("no\n");
			continue;
		}
		for(int i=1;i<strlen(temp);i++){ 
			if(temp[i]!='_'&&!(temp[i]>='a'&&temp[i]<='z')&&!(temp[i]>='A'&&temp[i]<='Z')&&!(temp[i]>='0'&&temp[i]<='9')){
				printf("no\n");
				break;
			}
		}
		printf("yes\n");
	}
	return 0;
}
