#include<cstdio>
#include<cstring>
int main(){
	char s1[21],s2[21];
	gets(s1);
	int pos=0;
	for(int i=0;s1[i];i++){
		if(s1[i]>='0'&&s1[i]<='9'){
			pos++;
		}
		else
		break;
	}
	int q=0;
	
	int len=strlen(s1);
	int num=pos-1;
	while(s1[q]=='0')
	q++;
	while(s1[num]=='0')
	num--;
	while(num>=q)
	printf("%c",s1[num--]);
	
	if(pos==len)
	return 0;
	char c=s1[pos++];
	if(c=='%'){
	printf("%c",c);
	return 0;
	}
	else{
		printf("%c",c);
	}
	while(s1[len-1]=='0'){
		len--;
	}
	while(s1[pos]=='0')
	pos++;
	for(int i=len-1;i>=pos;i--)
	printf("%c",s1[i]);
	return 0;
}
