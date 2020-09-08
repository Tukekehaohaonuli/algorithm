#include<cstdio>
int main(){
	char temp[101];
	gets(temp);
	char value;
	int t=0,ans=0,num=0;
	for(int i=0;temp[i];i++){
		if(temp[i]>='0'&&temp[i]<='9'){
			if(i&&temp[i-1]=='-')
			value='-';
			t=t*10+temp[i]-'0';
		}
		else{
			if(value=='-')
			ans-=t;
			else
			ans+=t;
			if(t)
			num++;
			t=0;
		}
	}
	if(t)
	num++;
	if(value=='-')
			ans-=t;
			else
			ans+=t;
	printf("%d %d",num,ans);
	return 0;
}
