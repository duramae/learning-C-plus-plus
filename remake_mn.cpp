#include <iostream>
using namespace std;

void inst();

void find(double x, double k, double l);

int main() {

	double x,k,l;

	inst();
	cin>>x;
	cin>>k;
	cin>>l;
	find(x,k,l);

	return 0;
}

void find(double x, double k, double l)
{

	if(x>k && x>l) cout<<"The maximum number is "<<x;

	else if(k>x && k>l) cout<<"The maximum number is "<<k;

	else if(l>x && l>k) cout<<"The maximum number is "<<l;

	else cout<<"The numbers are equal";
}

void inst()
{
	cout<<"Enter three numbers:\n";
}
