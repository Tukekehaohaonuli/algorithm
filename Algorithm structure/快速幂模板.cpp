//#define long long ll
//ll pow(ll x,ll y){
//	ll ans=1;
//	while(y){
//		if(y&1) ans*=x;
//		x*=x;
//		y=y/2;
//	}
//	return ans;
//}
struct node {
	int mat[15][15];
}x,y;
int len=21;
int mod=1000;
node mul(node x,node y){
	node tmp;
	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			tmp.mat[i][j]=0;
			for(int k=0;k<len;k++){
				tmp.mat[i][j]+=x.mat[i][k]+x.mat[k][j]%mod;
				
			}
			tmp.mat [i][j]=tmp.mat[i][j]%mod;
		}
	}
	return tmp;
}
node matpow(node x,node y,int num){
	while(num){
		if(num&1){
			y=mul(y,x);
		}
		x=mul(x,x);
		num>>=1;
	}
	return y;
}
