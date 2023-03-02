/*Nombre: Alejandro Fabregas Garcia*/
/*Codigo: 8977914*/
 
 /* #2 nlogonia.c*/

#include <stdio.h>

int main() {
    int queriesNum, cord1, cord2, resid1, resid2, i, ans; /*queries num: caso K, cord1: n cord2: m, resid1: x resid2: y*/
    ans = 0;
    while (!ans) {
        scanf("%d", &queriesNum);
        if (queriesNum == 0) {
            ans = 1;
        } else {
            scanf("%d %d", &cord1, &cord2);
            for (i = 0; i < queriesNum; i++) {
                scanf("%d %d", &resid1, &resid2);
                if (resid1 == cord1 || resid2 == cord2) {
                    printf("divisa\n");
                } else if (resid1 < cord1 && resid2 < cord2) {
                    printf("SO\n");
                } else if (resid1 < cord1 && resid2 > cord2) {
                    printf("NO\n");
                } else if (resid1 > cord1 && resid2 < cord2) {
                    printf("SE\n");
                } else {
                    printf("NE\n");
                }
            }
        }
    }
    return 0;
}
