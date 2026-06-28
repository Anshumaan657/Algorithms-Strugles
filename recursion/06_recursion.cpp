//Nested Recursion
#include<iostream>
using namespace std;
int fun(int n){
    if(n>100){
        return n-10;
    }
        
    else{
       return fun(fun(n+11));
    }
}
int main(){
    int num = 134 ;
    cout<<fun(num);
    return 0;

}
//Time Complexity: O(1)
//Space Complexity: O(1)