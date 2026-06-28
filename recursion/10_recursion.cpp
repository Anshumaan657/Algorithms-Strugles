//Taylor Series using Recursion.
#include<iostream>
using namespace std;
double taylor(int x, int n){
    static double p=1, f=1;
    double r;
    if(n==0){
        return 1;
    }
    else{
        r=taylor(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}
int main(){
    int x=2;
    int n=15;
    cout<<"Taylor Series of "<<x<<" is: "<<taylor(x,n)<<" ";
    return 0;
}