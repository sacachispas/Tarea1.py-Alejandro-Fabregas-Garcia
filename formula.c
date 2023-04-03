/* formula.c
Alejandro Fabregas Garcia
8977914
*/
#include <stdio.h>
#include <string.h>

#define maxG 100
#define maxP 500

int points[maxP + 1];
int results[maxG][maxP + 1];

int main() {
    int G, P, S, K; // G es el numero de carreras y P el numero de pilotos
    int i, j, k;
    int max_points;
    int champions[maxP];
    int num_champions;

    while(1) {
        scanf("%d %d", &G, &P);

        for (i = 0; i < G; i++) {
            for (j = 1; j <= P; j++) {
                scanf("%d", &results[i][j]);
            }
        }
        scanf("%d", &S);
        while (S--) {
            scanf("%d", &K);
            for (i = 0; i < K; i++) {
                scanf("%d", &points[i + 1]);
            }
            max_points = -1;
            num_champions = 0;
            memset(champions, 0, sizeof(champions));
            for (i = 1; i <= P; i++) {
                int total_points = 0;
                for (j = 0; j < G; j++) {
                    int place = results[j][i];
                    if (place <= K) {
                        total_points += points[place];
                    }
                }
                if (total_points > max_points) {
                    max_points = total_points;
                    champions[0] = i;
                    num_champions = 1;
                } else if (total_points == max_points) {
                    champions[num_champions++] = i;
                }
            }

            for (i = 0; i < num_champions; i++) {
                printf("%d ", champions[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
