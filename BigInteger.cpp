#include<iostream>
using namespace std;
 
// Maximum number of digits in output
#define MAX 500
 
int multiply(int res[], int n, int x){
    int carry=0;
    for(int i=0;i<n;i++){
        int prod = x*res[i] + carry;
        res[i] = prod%10;
        carry = prod/10;
    }
    
    while(carry){
        res[n]= carry%10;
        carry = carry/10;
        n++;
    }
    return n;
}


void factorial(int num){
    int res[MAX];
    res[0]=1;
    int res_size = 1;
    for(int i=2;i<num;i++){
        res_size = multiply(res, res_size, i);
    }
    for(int i=res_size-1;i>=0;i--){
        cout<<res[i];
    }
}




int main()
{ 
    int num; cin>>num;
    factorial(num);
    return 0;
}
