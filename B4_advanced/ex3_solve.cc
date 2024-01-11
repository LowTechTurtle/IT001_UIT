#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N=1e6+1;
int ans,n,x,a[200],f[N],k;

main() 
{
	cin>>n>>x;

	for(int i=1; i<=n; i++){
		cin>>a[i];
		k=a[i];
		a[i]+=a[i-1];
	}

	for(int i=1; i<=x; i++){
		f[i]=1e9;
	}

	for(int i=1; i<=n; i++){
		for(int j=a[i]; j<=x; j++){
			f[j]=min(f[j-a[i]]+i+1,f[j]);
		}
	}

	ans=f[x];
	for(int i=a[n]; i<=x; i++){
		if((x-i)%k==0){
			ans=min(ans,f[i-a[n]]+n+1+(x-i)/k);
		}
		f[i]=min(f[i-a[n]]+n+1,f[i]);
	}

	if(ans==1e9) cout<<-1;
	else cout<<ans-1;
}
