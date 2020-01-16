/*  Name    : Mohd Ashif
    course  : Bsc(h)CS
    Year    : 1st  */
#include<iostream>
using namespace std;
int GCD(int n1,int n2){ //GCD using recursion
    if(n2 == 0){
        return n1;
    }else{
        return GCD(n2,n1%n2);
    }
}
int fact(int n){    //Factorial using recursion
    if(n == 0){
        return 1;
    }else{
        return n*fact(n-1);
    }
}
int power(int n1,int n2){   //power using recursion
    if(n2 == 0){
        return 1;
    }else{
        return n1*power(n1,n2-1);
    }
}
int fibo(int a,int b,int n){ //fibonacci term using recursion
    int c;
    if(n == 0){
        return 0;
    }else{
        cout<<a<<" ";
        c = a + b;
        a = b;
        b = c;
        return fibo(a,b,n-1);
    }
}

int main(){ // Driver code
    char ch;
    do{
        int choice;
        cout<<"\nChoose 1 to find gcd of two numbers \n";
        cout<<"Choose 2 to find factorial of a number \n";
        cout<<"Choose 3 to find n1^n2 \n";
        cout<<"Choose 4 to print fibonnaci number \n";
        cout<<"\nEnter Your Option :";
        cin>>choice;
        switch(choice){
            case 1 :{
                int n1,n2;
                cout<<"Enter Two Numbers two find GCD :-";
                cout<<"\nN1 : ";
                cin>>n1;
                cout<<"N2 : ";
                cin>>n2;
                cout<<"GCD Of "<<n1<<" And "<<n2<<" is : "<<GCD(n1,n2);
                break;
            }
            case 2 :{
                int n;
                cout<<"Enter A Number To Find Factorial : ";
                cin>>n;
                if(n<0){      //to check if number is positive or not
                    cout<<"\nEnter Only Positive number or 0 ";
                    break;
                }
                cout<<"Factorial of "<<n<<" is : "<<fact(n);
                break;
            }
            case 3 :{
                int n1,n2;
                cout<<"Enter 2 numbers n1 and n2 to find n1^n2 :-";
                cout<<"\nN1 : ";
                cin>>n1;
                cout<<"N2 : ";
                cin>>n2;
                if(n1<0 || n2<0){   //to check if number is positive
                    cout<<"\nThis Program Works only for positive numbers ";
                    break;
                }
                cout<<"The Answer of "<<n1<<"^"<<n2<<"is : "<<power(n1,n2);
                break;
            }
            case 4 :{
                int n;
                cout<<"Enter A Number n to print n terms of fibonacci series : ";
                cin>>n;
                if(n<0){    //to ensure n is non negative
                    cout<<"Enter Only Positive number or 0 : ";
                    break;
                }
                fibo(0,1,n);
                break;
            }
            default : cout<<"\nChoose From 1 - 4 ";


        }

        cout<<"\nDo You Want To Continue (y/n): ";
        cin>>ch;
    }while(ch == 'y' || ch == 'Y');

    return 0;
}    // main ends here
