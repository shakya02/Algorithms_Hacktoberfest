#include<iostream>
using namespace std;
#include<math.h>

bool check(int a,int b,int c ){
	int ans;
	int x,y,z;
	x=max(a,max(b,c));
	if(x==a){
		y=b;
		z=c;
	}
	else if(x==b){
		y=a;
		z=c;
	}
	else{
		y=a;
		z=b;
	}
	
	if((x*x)== y*y + z*z){
		return true;
	}
	else{
		return false;
	}
	
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
     if(check(a,b,c))
	{
		cout<<"Follow the pythagorian triplet";
	}
	else{
		cout<<"Not follow pythagorian triplet";
	}
	
	return 0;
}
