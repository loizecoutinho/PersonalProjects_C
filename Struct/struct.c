/*
• Cadastrar curso (nome e código)(3 cursos)
• Cadastrar aluno em um curso (informe código do curso e dados do aluno)
• Listar todos os cursos e seus alunos
• Exibir média de notas de um curso
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Definindo aS constanteS para o número de cursos ofertados e de alunos que podem ser matriculados:
#define NUMCURSOS 3
#define NUMALUNOS 5
#define NUM_NOTAS 3

//Criando estrutura para os dados dos Cursos:
typedef struct curso{
    char nomeCurso[81];//nomenclatura do curso;
    int codCurso;//código do curso
}Curso;

//Criando estrutura para os dados dos Alunos:
typedef struct aluno{
    char nomeAluno[81];//nome do aluno;
    int matrAluno;//numeração da matrícula do aluno;
    float notas[3];//notas do curso em que o aluno está matriculado;
    float mediafinal;//media final do aluno em curso x;
    int codigo;// Receberá o mesmo valor que o codCurso;
}Aluno;

int totalCursos = 0;
int totalAlunos = 0;

//Função para o cadastro dos cursos:
void CadastrarCurso(Curso* c){
    
    if(totalCursos >= NUMCURSOS){
        printf("Não é possível cadastrar mais cursos\n");
        return;
    }

    printf("\n**Cadastro de Cursos**\n");

    printf("Insira o nome do curso a ser cadastrado:\n");
    scanf(" %80[^\n]", c[totalCursos].nomeCurso);
    printf("Insira o código do curso a ser cadastrado:\n");
    scanf("%d", &c[totalCursos].codCurso);
    totalCursos++;
    
    getchar();
}

//Função para o cadastro dos alunos:
void CadastrarAluno(Curso* c, Aluno* a){
    
    //Cabeçalho:
    printf("Insira os seguintes dados para o Cadastrar Aluno:\n");
    printf("O nome, número de matrícula e o código do curso desejado.\n");
    
    //Iniciando o sistema de cadastro
    if(totalAlunos < NUMALUNOS){
        printf("\nIniciando o sistema de cadastro:\n");
        for(int i = 0; i < NUMALUNOS; i++){
            
            printf("\nInsira o nome completo do aluno %d:\n", i+1);
            scanf(" %80[^\n]", a[i].nomeAluno);
            printf("\nInsira o número de matrícula:\n");
            scanf(" %d", &a[i].matrAluno);
            printf("\nInsira o código do curso em que o aluno está inscrito:\n");
            scanf("%d", &a[i].codigo);
            
            printf("Digite as %d notas do aluno:\n", NUM_NOTAS);
            for(int n = 0; n < NUM_NOTAS; n ++){
                printf("Nota %d:", n+1);
                scanf("%f", &a[i].notas[n]);
            }

            totalAlunos++;
        }
    }else{
        printf("Limite de alunos máximos atingido!");
    }
    
}

//Função para exibir os cursos e os alunos:
void ExibirCurso_Aluno(Curso *c, Aluno *a){
    
    printf("Os cursos disponibilizados e seus respectivos alunos são:\n");
    
    for(int k = 0; k < NUMCURSOS; k++){
    
        printf("Os alunos do curso %s são:\n", c[k].nomeCurso);
    
        for(int w = 0; w < NUMALUNOS; k++){
            printf("%s\n", a[w].nomeAluno);
        }
    
    }
}

void CalcularMedia(Aluno* a){
    float soma = 0;

    for(int y = 0; y < NUMALUNOS; y++){
        for(int q = 0; q < NUM_NOTAS; q++){
            soma += a[y].notas[q];
        }
        a[y].mediafinal = soma/NUM_NOTAS;
        printf("A média final do aluno %d é: %.2f", y+1, a[y].mediafinal);
    }
    
}

int main(){
    int op;
    Curso cursos[NUMCURSOS];
    Aluno alunos[NUMALUNOS];
    do{
        printf("\n MENU: \n");
        printf("\n 1-CADASTRAR CURSO;\n 2-CADASTRAR ALUNO;\n 3-EXIBIR LISTA DE CURSOS E ALUNOS;\n 4-EXIBIR MÉDIA DE UM CURSO;\n 5-SAIR;\n");
        scanf("%d", &op);
        switch(op){
            
            case 1: CadastrarCurso(cursos);
                break;
            case 2: CadastrarAluno(cursos, alunos);
                break;
            case 3: ExibirCurso_Aluno(cursos, alunos);
                break;
            case 4: CalcularMedia(alunos);
                break;
            
        }
    }while(op != 5);

    return 0;
}