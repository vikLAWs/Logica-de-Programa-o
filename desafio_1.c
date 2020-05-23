#include <stdio.h>

/* Checagem de qualquer número, para ver se é primo*/
main(){
    int R, CR, i, a, N;
    for(i=0;i<1;i++){
      printf("\n Digite o número a ser analisado:");
      scanf("%i", &N);
      CR=0;
        for(a=1;a<=N;a++){
          R=N%a;
          if(R==0) CR=CR+1;
        }
        if (CR==2)
          printf("\n%i é primo", N);
        else 
          printf("%i não é primo", N);
    }

}