#include<stdio.h>

int fib(int n){
    if(n < 2)
        return n;
    else
        return fib(n-1)+fib(n-2);
}

int main(){
    for(int i=0; i<10; i++){
        int res = fib(i);
        printf("%d-", res);
    }
    return 0;
}