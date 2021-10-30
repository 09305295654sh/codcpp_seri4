#include <iostream>
using namespace std;
 
int main(){
	int a, b, temp;
	 cout<<"enter a,b:";
	cin>>a;
	cin>>b;
	int x = a, y = b;

	while(b != 0) {
		temp = a%b;
		a = b;
		b = temp;
	}
	cout <<"bmm is:"<< a;
}
