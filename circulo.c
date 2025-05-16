#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "circulo.h"

typedef struct ponto{
    float x, y, k, h;
} Ponto;

typedef struct circulo{
    Ponto p;
    float r;//raio;
} Circulo;

Circulo c;

Circulo* cria_circulo(){

    Circulo* c = (Circulo*)malloc(sizeof(Circulo));
    if(c == NULL){
        printf("Erro na alocação de memória para o círculo.\n");
        return NULL;
    };

    printf("Insira o ponto da coordenada x do centro da circunferencia:\n");
    scanf("%f", &c->p.x);
    printf("Insira o ponto da coordenada y do centro da circunferencia:\n");
    scanf("%f", &c->p.y);
    printf("Insira o valor do raio da circunferencia:\n");
    scanf("%f", &c->r);

    return c;
}

void libera_memoria(Circulo* c){
    if(c != NULL){
        free(c);
    }
}

float area_circulo(Circulo* c){
    float area;
    area = 3.14 * (c->r * c->r);
    return area;
}

int checa_ponto(Circulo* c){
    double result;
    Ponto p;
    
    printf("Insira um ponto de uma coordenada x qualquer:\n");
    scanf(" %f", &c->p.h);
    printf("Insira um ponto de uma coordenada y qualquer:\n");
    scanf(" %f", &c->p.k);
    
    //√((x - h)² + (y - k)²)
    result = sqrt(((p.x - p.h) * (p.x - p.h)) + ((p.y - p.k) * (p.y - p.k)));
    
    if(result > c->r){
        return 1;
    }else{
        return 0;
    }
}
