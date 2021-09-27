//Generate five random numbers - Lotto Drawing
//i've created that way to show the first version and second one with random numbers without repeating them
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    srand(time(NULL));
    int array[5];
        printf("1st Array:\t");
        for (int i=0;i<5;i++){
            array[i]=rand()%10;
            
            printf("%d\t",array[i]);
        }
        printf("\n");
  
        int l=0, verif;
            do{
                verif=0;
                for (int k=0;k<l;k++){
                    if (array[l]==array[k]){
                        array[l]=rand()%10;
                        verif=1;
                    }
                }
                if (verif==0){
                    l++;
                }
            } while (l<5);
            
        printf("2nd Array:\t");
        for (int j=0;j<5;j++){
            printf("%d\t",array[j]);
        }
    printf("\n");
    return 0;
}
