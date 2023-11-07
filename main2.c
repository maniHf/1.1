#include <stdio.h>

typedef unsigned int number;

int main(void)
{
    number a = 0; 
    scanf("%d", &a); 
    number arrey[a];
    number i;
    for(i = 0; i != a; i++){ 
        scanf("%d", &arrey[i]);
    }
    number leng = i / 2; 
    printf("%d\n",leng);
    number w = 0;
    t:
    w++;
    if (w < a){
        if (leng < arrey[w]){
            printf("%d<%d\n",leng,arrey[w]);
            goto t;
        }if(leng > arrey[w]){
            printf("%d>%d\n",leng,arrey[w]);
            goto t;
        }if (leng == arrey[w]){
            printf("%d=%d\n",leng,arrey[w]);
            goto t;
        }
    }  
    return main();
    // решил просто использовать гото
}