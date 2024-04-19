#include<bits/stdc++.h>
using namespace std;
long long binary(long long n){
	int i=0;
	long long sum=0;
	while(n!=0){
	int bit=n&1;
	sum=bit*pow(10,i)+sum;
	n=n>>1;
	i++;
	}
	return sum;

	
}
int main(){
    long long n=10;
    cout<<binary(n)<<endl;
}