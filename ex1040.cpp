#include<stdio.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float nota1 = 0.0, nota2 = 0.0, nota3 = 0.0, nota4= 0.0, notaExame = 0.0, mediaFinal = 0.0, mediaAluno = 0;
	int peso1 = 2, peso2 = 3, peso3 = 4, peso4 = 1;
	
	printf("");
	scanf("%f",&nota1);
	printf("");
	scanf("%f",&nota2);
	printf("");
	scanf("%f",&nota3);
	printf("");
	scanf("%f",&nota4);
	
	mediaAluno = ((nota1 * peso1 + nota2 * peso2 + nota3 * peso3 + nota4 * peso4) / (peso1 + peso2 + peso3 + peso4));
	
	printf("Media: %.1f\n", mediaAluno);
	
        if(mediaAluno >= 7){
            printf("Aluno aprovado.\n");     
        }
        else if(mediaAluno < 5){
            printf("Aluno reprovado.\n");
        }
        else {
            printf("Aluno em exame.\n");
            printf("");
            scanf("%f",&notaExame);
            printf("Nota do exame: %.1f\n" ,notaExame);
            mediaFinal = (notaExame + mediaAluno) / 2;
        }

        if(notaExame >= 5){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", mediaFinal);
        }
     
    }
    



        
      
        
