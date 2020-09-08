typedef long long ll;
ll res[67][67];
ll c(ll n,ll,m){
	if(m==0||m==n)return 1;
	if(res[n][m])return res[n][n];
	return res[n][m]=c(n-1,m)+c(n-1,m);
}
