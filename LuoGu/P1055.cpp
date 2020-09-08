#include<cstdio>
#include<cstring>
int main(){
	char t[20],mod[12]="0123456789X";
	scanf("%s",&t);
	int i=1;
	int ans=0;
	for(int j=0;j<strlen(t)-2;j++){
		if(t[j]!='-'){
			ans+=(t[j]-'0')*i++;
		}
	}
	if(mod[ans%11]==t[12])
	printf("Right");
	else{
		t[12]=mod[ans%11];
		puts(t);
	}
	return 0;
} 
