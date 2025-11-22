/*#include <stdio.h>
int main(){
    int ATT, h, rh, M, S;
    printf("enter h as pair :");
    scanf("%d", &h);
    ATT = h / 3;
    ATT--;
    M = ATT * 2;
    rh = h - (ATT * 3);
    S = rh*(60/5);
    if (S == 60) {
        M++;
        S = 0;
    }   
    printf("min%d sec%d", M, S);
    return 0;
}*/

/*
#include<stdio.h>
int main(){
    int a, b, sum, min, d, e, i;
    printf("enter a no :");
        scanf("%d",&a);
        min = a;
        sum = a;
        for(i = 0; i < 4; i++)
        {
            printf("enter a no :");
            scanf("%d", &b);
            if(b < min)
            {
                min = b;
            }
            sum += b;
        }
        printf("sum is %d\n", sum);
        printf("min is %d\n", min);
        return 0;
    }
*/
/*
#include <stdio.h>
int main (){
    int a[5],avg=0,i=0;
    printf("enter a number ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        avg=avg+a[i];
    }
    avg/=5;
    printf("average is %d",avg);
    printf("\nnumbers greater than average are:");
    for(i=0;i<5;i++){
        if(a[i]>avg){
            printf("\n%d",a[i]);
        }
    }
    return 0;
}*/

// write  a program in c to read 5 number in array find the average and print thir largest avg number
