#include <iostream>
using namespace std;

int main() {
 
    char oper;
    double num1;
    double num2;
    
    cout<<"enter an operator(+,-,*,/) : ";
    cin>>oper; cout<<endl;
    
    cout<<"enter number 1 and number 2:\n";
    cin>>num1; cin>>num2;
    
    switch(oper)
    {
        case '+':
        cout<<num1<<"+"<<num2<<"="<<num1+num2;
        break;
        
        case '-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2;
        break;
        
        case '*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2;
        break;
        
        case '/':
        cout<<num1<<"/"<<num2<<"="<<num1/num2;
        break;
        
        default:
        for(oper;;)
        {
        cout<<"Error!";
        }
    }
    return 0;
}