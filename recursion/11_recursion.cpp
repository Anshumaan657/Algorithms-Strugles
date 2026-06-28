//Alternate method for Taylor Series using Recursion.
#include<iostream>
using namespace std;
int taylor(int x, int n)
{
    static double s=1;
    if(n==0){
        return s;
    }
    else{
        s=1+x*s/n;
        return taylor(x,n-1);
    }
}

int main(){
    int x =2, n=10;
    cout<<"The value of e to the power "<<x<<" Till "<<n<<" number is: "<<taylor(x,n)<<" ";

    return 0;
}