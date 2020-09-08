#include<cstdio>
#include<set>
using namespace std;
int main(){
	set<int> A;
	set<int>::iterator it;
	int n,m,t;
	while(scanf("%d%d",&n,&m),n||m){
		for(int i=0;i<n;i++){
			scanf("%d",&t);
			A.insert(t);
		}
		for(int i=0;i<m;i++){
			scanf("%d",&t);
			if(A.count(t)) A.erase(t);
		}
		for(it=A.begin();it!=A.end();it++){
			printf("%d ",*it);
		}
		printf(A.size()?"\n":"NULL\n");
		A.clear();
	}
	return 0;
} 
