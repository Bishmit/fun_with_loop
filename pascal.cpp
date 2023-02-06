#include<iostream>
using namespace std;

void pascal(int power){
 
    for(int i = 1; i <= power; i++){
 
        // to print spaces 
        for(int j = 1; j <= power-i; j++)
            cout<<"  ";
 
        // using the Combinations formula
        int value = 1;
        for(int j = 1; j <= i; j++){
            cout<<value<<"   ";
             
            value = value * (i - j)/j;
        }
        cout<<endl;
    }
}
 
int main(){
 
    int power; // power and number are same as we are calculating the power upto which row num will also iterate
    cout<<"Enter the power up to which you want to find pascal triangle: ";
    cin>>power; 
	pascal(power);
 
}
