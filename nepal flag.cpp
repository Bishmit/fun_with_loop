#include<iostream>
using namespace std; 
int main(){
	int num; 
	cout<<"Enter the number: ";
	cin>>num; 
	cout<<endl; 
	for(int i = 1; i<=num/2; i++){
		for(int j = 1; j<=i; j++){
			cout<<"* "; 
		}
		cout<<endl; 
	}
	
	for(int i = (num/2)+1; i<=num; i++){
		for(int j = 1; j<=i-((num/2)-(num/10)); j++){
			cout<<"* ";
		}
		cout<<endl; 
	}
}
