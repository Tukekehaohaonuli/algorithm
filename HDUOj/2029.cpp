#include<cstdio>
#include<cstring>
int main(){
	int n,i,j;
	char temp[100][100];
	while(scanf("%d%*c",&n)!=EOF){
		for(i=0;i<n;i++){
			gets(temp[i]);
		}
		for(i=0;i<n;i++){
			for(j=0;j<strlen(temp[i]);j++){
				if(temp[i][j]!=temp[i][strlen(temp[i])-j-1])
				break;
			}
			if(j==strlen(temp[i]))
			printf("yes\n");
			else
			printf("no\n");
		}
	}
	return 0;
}
