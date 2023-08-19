#include <iostream>
#include <math.h>
using namespace std;

int main()
{
char again='Y';
while (again=='y'||again=='Y')
{


char op;
double num1, num2;

int text;
cout <<" press 1 for trigo and 2 for algebraic function:";
cin >> text;


if (text==1)
    {
        int p;
        cout<<"choose 4 for sin, 5 for cos, 6 for tan:";
        double x;

cin>> p;
cout<< "enter angle in degrees:";
cin>> x;

if (p==4){
        cout<<sin(x*3.14159/180)<<endl;

}
if (p==5){
        cout<<cos(x*3.14159/180)<<endl;

}
if (p==6){
        cout<<tan(x*3.14159/180)<<endl;

}


}
else{
cout<< "enter the operator +, - ,*, /,^      :";
cin>> op;

cout<<"enter 2 numbers ";
cin>> num1 >> num2;

switch(op){

case '+':
    cout<< num1<< "+" << num2<< "="<< num1 + num2<<endl;
    break;

    case '-':
    cout<< num1<< "-" << num2<< "="<< num1 - num2<<endl;
    break;

    case '*':
    cout<< num1<< "*" << num2<< "="<< num1 *num2<<endl;
    break;

    case '^':
    cout<< num1<< "^" << num2<< "="<< pow(num1,num2)<<endl;
    break;



    case '/':
if( num2 != 0.0)
    cout<< num1<< "/" << num2<< "="<< num1 / num2<<endl;
else
    cout<< "invalid";

    break;



}



}

cout<<"restart? If yes then press y. If no press n.       :";
cin>>again;// change control variable

}//end while loop
cout<<"the end"<< endl;

    return 0;
    }

