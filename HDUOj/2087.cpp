#include<cstdio>
#include<cstring>
char big[1001],s[1001];
int main(){
	while(scanf("%s",big),big[0]!='#'){
		scanf("%s",s);
		int lena=strlen(big);
		int lenb=strlen(s);
		int ans=0,i,j;
		for(i=0;i<lena;i++){
			for(j=0;j<lenb;j++){
				if(big[i+j]!=s[j])
				break;
			}
			if(j==lenb){
				ans++;
				i+=lenb-1;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
