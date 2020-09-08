#include<cstdio>
#include<cstring>
int main(){
	char temp[20];
	scanf("%s",temp);
	int ans=0,k=1;
	for(int i=0;i<strlen(temp)-2;i++){
		if(temp[i]=='-')
		continue;
		else{
			ans+=(temp[i]-'0')*k++;
		}
	}
	int len=strlen(temp);
	char c=(ans%11+'0');
	if(c=='9'+1)
	c='X';
	if(temp[len-1]==c)
	printf("Right");
	else{
		temp[len-1]=c;
		puts(temp);
	}
	return 0;
}
