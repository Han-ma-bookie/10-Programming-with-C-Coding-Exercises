//Create a program that displays the first 100 prime numbers.
#include <stdio.h>
#include <stdbool.h>
int prime (int x, int y){
    int div=0;
    bool p;
        for (int q=1;q<=y;q++){
            if (x%q==0)div++;
        }
        if(div==2) p=true; 
        else p=false;
    return p;
}
int main(){
    int array[545], length;
    length = sizeof(array)/sizeof(array[0]);
        for (int i=1;i<=545;i++){
            prime(i,545);
            if(prime(i,545)==true) array[i-1]=i;
            else array[i-1]=0;
        }

        for (int u=0;u<length;u++){
        if(array[u]!=0 && array[u]<705) printf("%d\t",array[u]);
        }
    
    return 0;
}
