// Time complexity = n + log(n)
// Big O(n)

#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key){
	int s,e,mid;
	s=0;
	e=n;
//	s=start,e=end
	while(s<=e){
		mid=(s+e)/2;
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]<key){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
		}
		return -1;
	}
	

int main(){
	int n;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements the array "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cout<<"Enter key";
	cin>>key;
	cout<<" Key founded At index "<<binarysearch(arr,n,key);
}
