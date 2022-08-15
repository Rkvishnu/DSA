#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	int X, Y;
	cin>>X,Y;
	cin>>t;
	while(t)
{	if(X>=Y) return Y;
	if(X<Y) return X;
	cout<<min(X,Y)<<endl;}
	return 0;
}
