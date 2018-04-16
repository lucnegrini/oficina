#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct p{
	int **matriz;
	int ax,ay,bx,by,cx,cy,dx,dy;
}pontos;


void Carrega_pontos(pontos *p){
	*p.matriz = (int*)  malloc(sizeof(tam * int*));
	for (int i=0; i<tam; i++){
		for (int j=0; j<tam; j++){
		*p.matriz[i][j] = (int) malloc(sizeof(tam * int));
		*p.matriz[i][j] = 0;
		}
	}
	
	i=0;
	while(i<1){
		printf("Digite os valores do primeiro ponto (x,y): \n");
		scanf("%d, %d", p->ax, p->ay);
		if (*p->ax >= 0) && (*p->ay >= 0)
			i = 2;
		else
			printf("\nValores inválidos, digite valores positivos!\n");
	}
	i=0;
	while(i<1){
		printf("Digite os valores do segundo ponto(x,y)");
		scanf("%d, %d", p->bx, p->by);
		if (*p->bx >= 0) && (*p->by >= 0)
			i = 2;
		else
			printf("\nValores inválidos, digite valores positivos!\n");
	}
	i=0;
	while(i<1){
		printf("Digite os valores do terceiro ponto(x,y)\n");
		scanf("%d, %d", p->cx, p->cy);
		if (*p->cx >=0) && (*p->cy >= 0)
			i = 2;
		else
			printf("\nValores inválidos, digite valores positivos!\n");	
	}
	i=0;
	while(i<1){
		printf("Digite os valores do quarto ponto(x,y)\n");
		scanf("%d, %d", p->dx, p->dy);
		if (*p->dx >=0) && (*p->dy >=0)
			i = 2;
		else
			printf("\nValores inválidos, digite valores positivos!\n"); 
	
	}
}

void Menu(pontos *p){
	if (p.matriz == Null)
		Carrega_pontos(p);
	
	Imprime_Matriz(p);
	

	while (1){
	printf("************************************************************");
	printf("______________Selecione a opção desejada:___________________");
	
	switch
	

	}
	
	
	
	
	
	
	
	
}
