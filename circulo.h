//TAD: Circulo(pontos e raio);

/*Tipo exportado*/
typedef struct ponto Ponto;

/*Tipo exportado*/
typedef struct circulo Circulo;

/*Funções exportadas*/
/*Função cria-recebe as coordenadas dos ponto centrais e o valor do raio */
Circulo* cria_circulo();

/*Função libera- Libera a memoria dos pontos do circulo previamente criados*/
void libera_memoria(Circulo* c);

/*Função área- Calcula a área do circulo de acordo com raio dado previamente*/
float area_circulo(Circulo* c);

/*Função checa pontos- recebe a coordenada de um ponto e verifica se esse ponto está inserido dentro do circulo*/
int checa_ponto(Circulo* c);