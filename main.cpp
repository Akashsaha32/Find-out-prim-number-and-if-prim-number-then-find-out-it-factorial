#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a Number: ";
    int x, flag;
    cin >> x;

    int z = x/2;

    for(int i=2; i<=z; i++){
        flag = 0;
        if(x%i == 0){
            break;
        }
        else if(x%i != 0){
            flag = 1;
        }
    }

if(flag == 1){
    long long int rslt = 1;
    for(int j=1; j<x; j++){
        rslt = rslt*(j+1);
        }
        cout << "Yes " << rslt;
}
else{
    cout << "The Number is not Prim.";
}
    return 0;
}
