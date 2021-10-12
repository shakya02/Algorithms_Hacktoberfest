#include<bits/stdc++.h>
using namespace std;
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
#define O cout<<
#define I cin>>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<n;i++)
void toh(int n, int a,int b,int c ){
    if(n>0){
        toh(n-1,a,c,b);
        cout<<"("<<a<<","<<c<<")"<<endl;
        toh(n-1,b,a,c);
    }
}
int main(){
toh(3,1,2,3);



return 0;
}
