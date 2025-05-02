
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    
    int num1,num2;
   
    cout<<"Enter any two integers:";
    cout<<endl;
    cin>>num1>>num2;
    char operator_sign;
    cout<<"Please, press the operator key what type of operation you want to do !!!";
    cout<<endl;
    cout<<endl;
     cin>>operator_sign;

    switch(operator_sign)
    {
        case '+':
        {
            cout<<endl;
    cout<<"You did press the plus key.";
    cout<<endl;
    cout<<"That means You want to add of two numbers.";
    cout<<endl;
    int a=num1;
    int b=num2;
    int sum=a+b;
    cout<<"The summation of two numbers is:";
    cout<<endl;
    cout<<endl;
    cout<<sum;
    cout<<endl;
    break;
        }

           case '-':
        {
            cout<<endl;
    cout<<"You did press the minus key.";
    cout<<endl;
    cout<<"That means You want to subtract of two numbers.";
    cout<<endl;
    int a=num1;
    int b=num2;
    int sub=a-b;
    cout<<"The subtraction of two numbers is:";
    cout<<endl;
    cout<<endl;
    cout<<sub;
    cout<<endl;
    break;
        }

         case '*':
        {
            cout<<endl;
    cout<<"You did press the multiplication key.";
    cout<<endl;
    cout<<"That means You want to multiply of two numbers.";
    cout<<endl;
    int a=num1;
    int b=num2;
    int mul=a*b;
    cout<<"The multiplication of two numbers is:";
    cout<<endl;
    cout<<endl;
    cout<<mul;
    cout<<endl;
    break;
        }

         case '/':
        {
            cout<<endl;
    cout<<"You did press the Division key.";
    cout<<endl;
    cout<<" That means You want to Divide of two numbers.";
    cout<<endl;
    int a=num1;
    int b=num2;
    cout<<fixed;
    cout<<setprecision(2);
    float div= (float) a/b;
    cout<<"The Division of two numbers is:";
    cout<<endl;
    cout<<endl;
    cout<<div;
    cout<<endl;
    break;
        }

          case '%':
        {
            cout<<endl;
    cout<<"You did press the remainder key.";
    cout<<endl;
    cout<<" That means You want to get remainder of two numbers.";
    cout<<endl;
    int a=num1;
    int b=num2;
    int rem=a%b;
    cout<<"The remainder of two numbers is:";
    cout<<endl;
    cout<<endl;
    cout<<rem;
    cout<<endl;
    break;
        }


    }  
    return 0;
}