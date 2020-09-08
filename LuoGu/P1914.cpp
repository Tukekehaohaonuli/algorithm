#include<cstdio>
#include<cstring>
int main(){
	int n;
	scanf("%d",&n);
	char t[51];
		scanf("%s",&t);
		for(int i=0;i<strlen(t);i++){
			for(int j=0;j<n;j++){
				if(t[i]=='z')
				t[i]='a';
				else
				t[i]++;
			}
		}
		puts(t);
	return 0;
}
