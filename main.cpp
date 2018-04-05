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


int main()
{
    cout << "Enter a Number: ";
    int x;
    cin >> x;

    int flag = PrimNumber(x);

if(flag == 0){
    long long int rslt = 1;
    for(int j=1; j<x; j++){
        rslt = rslt*(j+1);
        }
        cout << "The Number is Prim. And\n"<<x << "! = " << rslt;
}
else if(flag == 1){
    cout << "The Number is not Prim.";
}
    return 0;
}
