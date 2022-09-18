#include <stdio.h>
#include <math.h>

int main(){

    int x,i;
    int qua=0;
    int cub=0;
    scanf("%d",&x);

    for(i=1; i<=x;i++){
            qua=pow(i,2);
            cub=pow(i,3);
        printf("%d %d %d\n",i,qua,cub);
    }


return 0;

}
