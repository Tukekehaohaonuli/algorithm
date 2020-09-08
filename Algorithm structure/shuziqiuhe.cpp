#include<cstdio>
int main(){
	char t[101];
	char value;
	int ans=0,temp=0;
	gets(t);
	for(int i=0;t[i];i++){

		if(t[i]>='0'&&t[i]<='9'){
			temp=temp*10+(t[i]-'0');
					if(t[i-1]=='-')
				value='-';
		}
		else{
			if(value=='-')
			ans-=temp;
			else
			ans+=temp;
			temp=0;
		}
	}
	if(value=='-')
	ans-=temp;
	else
	ans+=temp;
	printf("%d",ans);
}
