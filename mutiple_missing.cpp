#include<bits/stdc++.h>
using namespace std;
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
#define O cout<<
#define I cin>>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<n;i++)
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll  long long
#define ff first
#define ss second
#define vecs(v) sort(v.begin(),v.end())

int main(){
int a[10]={2,3,4,5,7,8,9};
int h[9]={0,0,0,0,0,0,0};
int n = 7;
int l = a[0];
int m = 9;
// int diff = l-0;
// for(int i=0;i<n;i++){
// if(a[i]-i != diff){
//     while(diff<a[i]-i){
//         cout<<i+diff<<" ";
//         diff++;
//     }
//     break;
// }
// }
for(int i=0;i<n;i++){
    h[a[i]]++;
}
for(int i=l;i<9;i++){
    if(h[i]==0){
        cout<<i<<" ";
    }
}



return 0;
}
