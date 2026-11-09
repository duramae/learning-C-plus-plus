#include <iostream>
using namespace std;
int main()
{
  int Balance=0;
  int Deposit=0;
  int Withdraw=0;
  int C;
  
  cout<<"Welcome! This is an ATM. Please choose from following 4 options: 1 Balance | 2 Deposit | 3 Withdraw | 4 Exit\n";
  cout<<endl;
  
  do{ cout<<"Select one of them: "; 
      cin>>C;
      cout<<endl;
  switch (C)
  {
      
case 1: cout<<"Your current Balance is: $"<<Balance<<endl;
        break;
      
case 2: cout<<"Enter how much you want to deposit: ";
        cin>>Deposit;
        cout<<endl;
    if(Deposit>0)   
   {     
        Balance+=Deposit;
        cout<<"Alright, your current Balance is: $"<<Balance<<endl<<endl;
   }
    else
   {
       cout<<"The operation has failed\n";
   }
        break;

case 3: cout<<"Enter how much you want to withdraw: ";
        cin>>Withdraw;
        cout<<endl;
        if(Withdraw<=Balance && Withdraw>0)
        {
        Balance-=Withdraw;
        cout<<"Alright, your current Balance is: $"<<Balance<<endl<<endl;
        }
        else
        {
            cout<<"The operation has failed\n\n";
        }
        break;
        
case 4:cout<<"Thank you for your business. Have a good day"; break;
      default: cout<<"The operation has failed\n"; break;
  }
  }while(C<4 || C>4);
    return 0;
}
