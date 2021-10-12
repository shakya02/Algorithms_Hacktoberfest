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
struct Array{
int A[10];
int size;
int length;
};
void display(struct Array a){
    for(int i=0;i<a.length;i++){
        cout<<a.A[i]<<" ";
    }
}
void append(struct Array *a,int x){
if((a->length) < (a->size)){
    a->A[a->length++]=x;
}
}
void insert(struct Array *a,int x,int index){
    int i;
    if( index>=0 && index<=a->length){
        for(i=a->length;i>index;i--){
            a->A[i]=a->A[i-1];
        }
        a->A[index]=x;
        a->length++;
    }
}

int main(){
struct Array a={{8,7,9,5,1,2},10,6};
// a.size =10;
// a.length =5;
// a.A = (int*)malloc(5*(sizeof(int))); 
 
// append(&a,10);
insert(&a,3,4);
display(a);


return 0;
}
