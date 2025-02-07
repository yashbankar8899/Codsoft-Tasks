//Program for a simple calculator
#include<iostream>
using namespace std;
int num1,num2;

void setdata(){
    cout<<"Enter the two numbers on which you want to perform operation"<<endl;
    cin>>num1>>num2;
}

void addition(int x, int y){
    cout<<"The addition of two numbers is: "<<x+y<<endl;
}

void subtraction(int x, int y){
    cout<<"The subtraction of two numbers is: "<<x-y<<endl;
}

void multiplication(int x, int y){
    cout<<"The multiplication of two numbers is: "<<x*y<<endl;
}

void division(int x, int y){
    cout<<"The division of two numbers is: "<<x/y<<endl;
}


int main(){
    int ch;
    
    setdata();
    cout<<"Select any one of the following operation: \n"
        <<"1.Addition\n"
        <<"2.Subtraction\n"
        <<"3.Multiplication\n"
        <<"4.Devision"<<endl;

    cin>>ch;

    if (ch==1){
        addition(num1,num2);
    }

    else if (ch==2){
        subtraction(num1,num2);
    }

    else if(ch==3){
        multiplication(num1,num2);
    }

    else if(ch==4){
        division(num1,num2);
    }

    else{
        cout<<"Invalid input!!!";
            
    }
    return 0;
}
