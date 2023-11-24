#include<bits/stdc++.h>
using namespace std;

#define long long long

const long N=1e5+10;
long x,n,A[N],F[N],sum[N];

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(long i=1; i<=n; i++) 
        cin>>A[i];

    for(long i=1; i<=n; i++){
        sum[i]+=A[i]+sum[i-1];
    }

    for(long i=1; i<=min(n,9ll); i++)
        F[i]=sum[i];

    for(long i=10; i<=n; i++) {
        F[i]=A[i]+F[i-1];
        x=min(A[i],A[i-1]);

        for(long j=2; j<=9; j++)
            x=min(x,A[i-j]);

        F[i]=min(F[i],F[i-10]+sum[i]-sum[i-10]-x);
    }

    cout<<F[n];
    return 0;
}