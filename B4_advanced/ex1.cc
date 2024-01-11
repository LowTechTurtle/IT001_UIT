#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e6+1;


int n,a[N],k,c,ans,sum[N];
main(){
	cin>>n>>c>>k;

	for(int i=1; i<=n; i++)
		cin>>a[i];

	sort(a+1,a+n+1);

	for(int i=1; i<=n; i++)
		sum[i]=sum[i-1]+a[i];

	ans=1e18;

	for(int i=1; i<=n; i++){
		if(a[i-1]+k<=c){
			auto F=upper_bound(a+1,a+n+1,a[i-1]+k)-a;
			F--;
			ans=min(ans,sum[F]-sum[i-1]);
		}
	}

	if(a[n]+k<=c) ans=0;
	cout<<ans;
}
