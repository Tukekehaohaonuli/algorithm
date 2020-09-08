#include<cstdio>
int main(){
	int num[27]={0};
	char c;
	int n=4;
	while(n--){
		while(scanf("%c",&c)!=EOF){
			if(c>='A'&&c<='Z')
			num[c-'A']++;
			if(c=='\n')
			break;
		}
	}
	int max=0;
	for(int i=0;i<26;i++)
	if(num[i]>max)max=num[i];
	for(int i=max;i>=1;i--){
		for(int j=0;j<26;j++){
			if(num[j]>=i)
			printf("* ");
			else
			printf("  ");
		}
		printf("\n");
	}
	for(int i=0;i<26;i++){
		printf("%c ",'A'+i);
	}
	return 0;
}
