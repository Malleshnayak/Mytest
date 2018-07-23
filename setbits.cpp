#include <bits/stdc++.h>
using namespace std;

int findsetbits(int input){
	int count=0;
	while(input){
		int rem=input%2;
		if(rem ==1) count++;
		input=input/2;
	}
	return count;
}

bool isprime(int num){
	if(num==0 || num==1) return false;
	for(int i=2;i<=num/2;i++){
		if(num%i==0) 
			return false;
	}
	return true;
}

int main(){
	int input[10000];
	int length;
	cin>>length;
	for(int i=0;i<length;i++){
		cin>>input[i];
	}
	int low,high;
	cin>>low>>high;
	int temp;

	cout<<"the output is:----------"<<endl;
	cout<<"output : setbits"<<endl;
	for(int i=0;i<length;i++){
		temp=findsetbits(input[i]);
		if(isprime(temp) && input[i]<=high && input[i]>=low) cout<<input[i]<<" : "<<temp<<endl;
	}
	return 0;
}