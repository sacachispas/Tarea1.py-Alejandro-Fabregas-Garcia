/*Nombre: Alejandro Fabregas Garcia*/
/*Codigo: 8977914*/
 
 /* #3 lock.c*/

 #include <stdio.h>

int main() {
    int dial, comb1, comb2, comb3;
    int end = 0;
    while (!end) {
        int result = scanf("%d %d %d %d", &dial, &comb1, &comb2, &comb3);
        if (result != 4) {
            if (result == EOF) {
                end = 1;
            } else {
                continue;
            }
        }
        if (dial == 0 && comb1 == 0 && comb2 == 0 && comb3 == 0) {
            end = 1;
        } else {
            int grados = 1080; 
            grados += ((dial - comb1 + 40) % 40) * 9; 
            grados += ((comb2 - comb1 + 40) % 40) * 9; 
            grados += ((comb2 - comb3 + 40) % 40) * 9; 
            printf("%d\n", grados);
        }
    }
    return 0;
}