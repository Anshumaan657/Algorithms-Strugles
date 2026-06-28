// Power of a number using recursion
#include<iostream>
using namespace std;
int pow(int num, int power){
    if(power==0){
        return 1;
    }
    else{
        return num*pow(num, power-1);
    }
}
//In order to make it more efficient and reduce the time complexity, we can use the concept of exponentiation by squaring. 
//This method reduces the number of multiplications needed to compute the power of a number. The idea is to divide the power by 2 and square the result, which allows us to compute powers in logarithmic time.

int pow1(int m, int n){
    if(n==0){
        return 1;
    }
    else if(n%2==0){
        return pow1(m*m, n/2);
    }
    else{
        return m*pow1(m*m, (n-1)/2);
    }
}

int main(){
    int num =2;
    int power =8;
    int m =2;
    int n=17;
    cout<<num<<" raised to the power "<<power<<" is: "<<pow(num, power)<<" "<<endl;
    cout<<m<<" raised to the power "<<n<<" is: "<<pow1(m,n)<<" ";
    return 0;
}