#include <iostream>
using namespace std;
class Calculator{
    private: int a,b; int ch;
    public: void menu(); void input();
};

// void Calculator::input(){
//     cout<<"Enter the first number:\t";
//     cin>>a;
//     cout<<"Enter the second number:\t";
//     cin>>b;
// }

void Calculator::menu(){
    cout<<"************THIS IS A SIMPLE ANS BASIC CALCULATOR***************"<<endl;
    cout<<"You can perform following options with 2 numbers of your choice"<<endl;
    cout<<"1. Press '1' for adding the two numbers"<<endl;
    cout<<"2. Press '2' for subtracting the two numbers"<<endl;
    cout<<"3. Press '3' for multiplying the two numbers"<<endl;
    cout<<"4. Press '4' for division of two numbers"<<endl;

    cout<<"Enter the choice:\t";
    cin>>ch;

    if (ch==1||ch==2||ch==3||ch==4){

       if (ch==1){
          cout<<"Enter the numbers:\t";
          cin>>a>>b;
           cout<<"Result:\t"<<a+b<<endl;
      }

        else if (ch==2){
          cout<<"Enter the numbers:\t";
          cin>>a>>b;
          cout<<"Result:\t"<<a-b<<endl;
      }

        else if (ch==3){
          cout<<"Enter the numbers:\t";
          cin>>a>>b;
          cout<<"Result:\t"<<a*b<<endl;
      }

        else if (ch==4){
           cout<<"Enter the numbers:\t";
           cin>>a>>b;
           cout<<"Result:\t"<<a/b<<endl;
      }
    }
    else{
        cout<<"Wrong input!"<<endl;
    }
};

main(){
    Calculator num;
    char sel='Y';
    do{
        num.menu();
        cout<<"Do you want to continue?\t";
        cin>>sel;
        // num.input();
    } while(sel=='Y' || sel=='y');
}