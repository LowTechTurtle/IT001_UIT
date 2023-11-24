#include<bits/stdc++.h>
using namespace std;


unsigned long long a,k,b,m,n,l,r,mid,ans;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    cin>>a>>k>>b>>m>>n;
    l=1;
    r=max(n/(a-(a+k-1)/k+b-(b-(b+m-1)/m))+10,n/(a-(a+k-1)/k+b-(b-(b+m-1)/m))*2);
    while(l<=r){
        mid=(l+r)/2;
        if(a*mid-mid/k*a+b*mid-mid/m*b>=n){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans;
    return 0;
}