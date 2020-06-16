#include<bits/stdc++.h>
using std::cin;
using std::cout;
typedef unsigned long long int ulli;
ulli *A; 
ulli fibonacci(ulli n){
	for(int i=3;i<=n;i++){
		A[i]=A[i-1]+A[i-2];
	}
	return A[n];
}
int main(){
	ulli n;
	cout<<"Enter the number :- ";
	cin>>n;
	A=new ulli[n+1];
	if(n<=2){
		cout<<"1";
		return 0;
	}
	A[1]=1;
	A[2]=1;
	cout<<(ulli)fibonacci(n);
	return 0;
}
