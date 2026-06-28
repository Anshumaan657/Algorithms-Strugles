// Factirial using recursion
#include<iostream>
using namespace std;
int fact (int n){
if (n==0){
    return 1;
}
else{
    return n*fact(n-1);
}
}
int main(){
    int num = 12;
    cout<<"Factorial of "<<num<<" is: "<<fact(num);
    return 0;

}