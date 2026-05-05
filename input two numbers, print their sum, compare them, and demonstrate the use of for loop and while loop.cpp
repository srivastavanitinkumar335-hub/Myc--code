#include<iostream>
using namespace std;

int main(){
    int a,b; 

    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<"The sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;

    if(a>b){
        cout<<a<<" is greater than "<<b<<endl;
    }
    else if(a<b){
        cout<<b<<" is greater than "<<a<<endl;
    }
    else{
        cout<<"Both numbers are equal"<<endl;
    }

    // for loop (fixed condition)
    for(int i=1; i<=5; i++){
        cout<<i<<" ";
    }
    cout<<endl;

    // while loop
    while(a>0){
        cout<<a<<" ";
        a--;
    }

    return 0;
}
