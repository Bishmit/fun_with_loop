#include <iostream>
using namespace std;
void diamond(int size){
	int side, mid;
    for (int i = 0; i < size / 2; i++)
    {
        mid = 2 * i + 1;
        side = (size - mid) / 2;
        for (int k = 0; k < side; k++)
        {
            cout << "* ";
        }
        for (int k = 0; k < mid; k++)
        {
            cout << "  ";
        }
        for (int k = 0; k < side; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
	
	for (int i = size/2 ; i >=0; i--)
    {
        mid = 2 * i + 1;
        side = (size - mid) / 2;
        for (int k = 0; k < side; k++)
        {
            cout << "* ";
        }
        for (int k = 0; k < mid; k++)
        {
            cout << "  ";
        }
        for (int k = 0; k < side; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
	
}
int main(){
	int size; 
	cout<<"Enter the size: "; 
	cin>>size;
	if(size % 2 ==0){
		size = size+1; 
	}
	diamond(size);
	
	
}
