#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int indCr = 0;
/*A struct aluno:
exemplo: nome, matrícula, nota_final*/
typedef struct{
    char nome[41];
    int matricula;
    float nota_final;
}Aluno;
/*E a struct curso:
exemplo: nomeCurso, código, alunos, totalAlunos
Cadastrar aluno em um curso (informe código do curso e dados do aluno)*/
typedef struct{
    char nomeCurso[41];
    int codcurso;
    Aluno alunos[5];
    int totalAlunos;
}Curso;

Curso cad_curso(){
    Curso novo;
    novo.codcurso = indCr + 1;
    novo.totalAlunos = 0;

    printf("\n**Cadastro de Curso**\n");
    printf("Determine o mome do curso: \n");
    scanf(" %[^\n]", novo.nomeCurso);
    printf("Determine o código do curso: %d\n", novo.codcurso);

    return novo;
}

void cad_aluno(Curso cs[]){
    int cod;
    printf("\nCodigo do curso: \n");
    scanf("%d", &cod);
    getchar();

    if(cod<1 || cod>indCr){
        printf("Invalido\n");
        return;
    }

    Curso *curso = &cs[cod-1];
    
    if(curso->totalAlunos >= 5) {
        printf("Não possuem mais vagas no curso\n");
        return;
    }

    Aluno novo;
    printf("Nome: ");
    scanf(" %[^\n]", novo.nome);
    printf("Matricula: ");
    scanf("%d", &novo.matricula);
    printf("Nota final: ");
    scanf("%f", &novo.nota_final);

    curso->alunos[curso->totalAlunos] = novo;
    curso->totalAlunos++;
    printf("Cadastro bem sucedido\n");
}


void Exibir_Cursos(Curso cs[], int indCr);
void Exibir_Media(Curso cs[], int indCr);

int main() {
    Curso cursos[3];
    int x;
    /*
    • Cadastrar curso (nome e código)
    • Cadastrar aluno em um curso (informe código do curso e dados do aluno)
    • Listar todos os cursos e seus alunos
    • Exibir média de notas de um curso*/
    do{
        printf("\n\n***Sigaa Humilde***\n\n");
        printf("1 - Cadastrar curso\n");
        printf("2 - Cadastrar aluno\n");
        printf("3 - Listar cursos\n");
        printf("4 - Media das notas\n");
        printf("0 - Sair\n\n");
        printf("Opcão: ");
        scanf("%d", &x);
        getchar();

        switch(x){
            case 1:
                if(indCr >= 3){
                    printf("\nNão possui mais vagas de cadastro ao curso no sistema\n");
                }else{
                    cursos[indCr] = cad_curso();
                    indCr++;
                }
                break;
                
            case 2:
                cad_aluno(cursos);
                break;
                
            case 3:
                Exibir_Cursos(cursos, indCr);
                break;
                
            case 4:
                Exibir_Media(cursos, indCr);
                break;
        }
    }while(x != 0);

    return 0;
}

/*Cadastrar curso (nome e código)*/
void Exibir_Cursos(Curso cs[], int indCr){
    printf("\n***Cursos Cadastrado***\n");
    for(int i = 0; i < indCr; i++){
        printf("\nCurso: %s", cs[i].nomeCurso);
        printf("\nCodigo: %d", cs[i].codcurso);
        printf("\nAlunos matriculados: %d\n", cs[i].totalAlunos);

        for(int j = 0; j < cs[i].totalAlunos; j++){
            printf("\n  Aluno %d:", j+1);
            printf("\n  Nome: %s", cs[i].alunos[j].nome);
            printf("\n  Matricula: %d", cs[i].alunos[j].matricula);
            printf("\n  Nota: %.2f\n", cs[i].alunos[j].nota_final);
        }
    }
}

/*Exibir média de notas de um curso*/

void Exibir_Media(Curso cs[], int indCr){
    int cod;
    printf("\nCodigo do curso: ");
    scanf("%d", &cod);

    if(cod<1 || cod>indCr){
        printf("Curso não encontrado\n");
        return;
    }

    Curso curso = cs[cod-1];
    float soma = 0;

    for(int i = 0; i < curso.totalAlunos; i++) {
        soma = soma + curso.alunos[i].nota_final;
    }

    float media;
    if (curso.totalAlunos > 0) {
        media = soma / curso.totalAlunos;
    } else {
        media = 0;
    }

    printf("\nMédia de %s: %.2f\n", curso.nomeCurso, media);
}