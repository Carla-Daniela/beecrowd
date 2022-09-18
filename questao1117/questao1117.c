#include <stdio.h>

int main(){

    float nota1;
    float nota2;
    float media=0;
    int i=0;
    do{
        scanf("%f",&nota1);
        if(nota1<=10 && nota1>=0){
            i++;
        }
        else{
            printf("nota invalida\n");
        }

    }while(i<1);
    do{
         scanf("%f",&nota2);
        if(nota2<=10 && nota2>=0){
            i++;
        }
        else{
              printf("nota invalida\n");
        }
    }while(i<2);

    media = (nota1+nota2)/2;

      printf("media = %.2f\n",media);

 return 0;
}
