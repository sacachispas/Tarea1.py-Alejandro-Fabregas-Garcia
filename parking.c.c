/*Nombre: Alejandro Fabregas Garcia*/
/*Codigo: 8977914*/

/* #1 parking.c*/
#include <stdio.h>

int main(){
	int case1;/*case1: numero de casos por linea*/
	int case2;/*case2: numero de tiendas a visitar*/
    int case3;/*case3: posicion tiendas*/
	int i;
	int arregloSt[100];
	int mayorSt;/*posicion mayor de las tiendas*/
	int menorSt;/*posicion menor de las tiendas*/
	int parking;

	scanf("%d", &case1);
	for(i = 0; i < case1; i++){
		scanf("%d", &case2); 
		for(case3 = 0; case3 < case2; case3++){ 
			scanf("%d", &arregloSt[i]);
			if(case3 == 0){
            	mayorSt = arregloSt[i];
            	menorSt = arregloSt[i];
        		}
        	if(menorSt > arregloSt[i]){
            	menorSt = arregloSt[i];
        		}
        	if(mayorSt < arregloSt[i]){
            	mayorSt = arregloSt[i];
        		}
			}
			parking = (mayorSt-menorSt)*2;
		printf("%d\n", parking);
		}
	return 0;
}