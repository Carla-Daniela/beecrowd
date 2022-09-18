#include <stdio.h>

int main(){
    int x,y,i;
    int maior=0;
    int menor=0;
    int somatorio=0;
    scanf("%d",&x);
    scanf("%d",&y);

    if(x>y){
        maior=x;
        menor=y;
    }
    else{
        maior=y;
        menor=x;
    }

    for(i=menor;i<=maior;i++){
        if(i%13!=0){
               somatorio= somatorio+i;
        }

    }
    printf("%d\n",somatorio);
 return 0;
}

