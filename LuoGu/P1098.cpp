#include<cstdio>
char dp[1001];
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	scanf("%s",dp);
	for(int i=0;dp[i];i++){
		if(dp[i]!='-')
		printf("%c",dp[i]);
		else{
			if(dp[i-1]>='a'&&dp[i-1]<='z'&&dp[i+1]>='a'&&dp[i+1]<='z'){
				if(dp[i-1]+1==dp[i+1])
				continue;
				else if(dp[i-1]<dp[i+1]){
					if(c==1){
						char p=dp[i-1]+1;
						for(p;p<dp[i+1];p++){
							for(int j=0;j<b;j++)
							printf("%c",b==1?p:p-'a'+'A');
						}
					}
					else{
						char p=dp[i+1]-1;
						for(p;p>dp[i-1];p--)
						for(int j=0;j<b;j++)
						printf("%c",b==1?p:p-'a'+'A');
					}
					
				}
				else
				printf("-");
			}
			else if(dp[i-1]>='0'&&dp[i-1]<='9'&&dp[i+1]>='0'&&dp[i+1]<='9'){
				if(dp[i-1]+1==dp[i+1])
				continue;
				else if(dp[i-1]<dp[i+1]){
					if(c==1){
						char p=dp[i-1]+1;
						for(p;p<dp[i+1];p++)
						for(int j=0;j<b;j++)
						printf("%c",p);
					}
					else{
						char p=dp[i+1]-1;
						for(p;p>dp[i-1];p--)
						for(int j=0;j<b;j++)
						printf("%c",p);
					}
				}
				else
				printf("-");
			}
			else
			printf("-");
		}
	}
	return 0;
} 
