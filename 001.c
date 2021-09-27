#include <stdio.h>
#include <string.h>
void text (char y[50]){
    int array[strlen(y)];
    for (int i=0;i<strlen(y);i++){
        array[i]=y[i];
    }
        int length = sizeof(array)/sizeof(array[0]);
    for (int i=0;i<length;i++){
        printf("%d\t",array[i]);
    }
    printf("\n");
}
int main(){ 
    char usr[50];
    printf("TEXT: ");
    fgets(usr,50,stdin); 
    text(usr);
}

/*
Create a program that grabs a string of text 
and then totals the values of all 
characters in the string (as integers).
*/