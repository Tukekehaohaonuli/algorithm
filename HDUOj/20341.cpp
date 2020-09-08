#include<cstdio>
#include<set>
#include<iostream>
using namespace std; 
int main(){
	set<int> s;
	set<int>::iterator it;
	int n,m;
	while(scanf("%d%d",&n,&m),n||m){
		int num;
		for(int i=0;i<n;i++){
			scanf("%d",&num);
			s.insert(num);
		}
		for(int i=0;i<m;i++){
			scanf("%d",&num);
			s.erase(num);
		}
		int ans=0;
		for(it=s.begin();it!=s.end();it++){
			printf("%d ",*it);
			ans++;
		}
		if(ans==0)
		printf("NULL\n");
		else{
			cout<<endl;
		} 
		s.clear();
	}
	return 0;
}
