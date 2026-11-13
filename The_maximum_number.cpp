#include <iostream>
using namespace std;




int main() {

	int x;
	int k;
	int l;

	cout<<"Enter three number:\n";
	cin>>x;
	cin>>k;
	cin>>l;

	if(x>k && x>l) cout<<"The maximum number is "<<x;

	else if(k>x && k>l) cout<<"The maximum number is "<<k;

	else if(l>x && l>k) cout<<"The maximum number is "<<l;

	else cout<<"The numbers are equal";

	return 0;
}