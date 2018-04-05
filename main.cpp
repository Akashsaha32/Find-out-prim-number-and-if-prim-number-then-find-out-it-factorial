#include <iostream>

using namespace std;

int PrimNumber( int x){
    int flag = 0;

    int z = x/2;

    for(int i=2; i<=z; i++){
        if(x%i == 0){
            flag = 1;
        }
    }

    return flag;

}

long long int Factorial(int x){
    long long int rslt = 1;
    for(int i=1; i<x; i++){
        rslt = rslt*(i+1);
    }
    return rslt;

}


int main()
{
    cout << "Enter a Number: ";
    int x;
    cin >> x;

    int flag = PrimNumber(x);

if(flag == 0){
    long long int rslt = Factorial(x);
    cout << "The Number is Prim. And\n"<<x << "! = " << rslt;
}
else if(flag == 1){
    cout << "The Number is not Prim.";
}
    return 0;
}
