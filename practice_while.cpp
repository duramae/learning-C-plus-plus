#include <iostream>
using namespace std;
int main()
{
  int sum=0;
  int number;
  
  cout<<"enter a number: \n";
  cin>>number;
  
  while(number>=0)
  {
      sum=sum+number;
      cout<<"enter a number: \n";
      cin>>number;
      cout<<endl;
      
  }
      cout<<"Sum of the number is: "<<sum;
 
    return 0;
}
