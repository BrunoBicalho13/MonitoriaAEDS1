//Nome: Bruno Mesquita Bicalho
//Matricula: 892161
#include<stdio.h>
int main(){
	int numAlunos, numProvas;
	int alunosAprovados = 0;
	float somaTurma = 0;

	printf("Digite o numero de alunos: \n");
    	scanf("%d", &numAlunos);
   	printf("Digite o numero de provas: \n");
    	scanf("%d", &numProvas);
	
	// Laço externo: percorre cada aluno
    	for (int i = 1; i <= numAlunos; i++) {
        	float somaNotasAluno = 0;
        	float nota;

        	printf("\n--- Notas do Aluno %d ---\n", i);
        
        // Laço interno: lê as notas de um aluno específico
        	for (int j = 1; j <= numProvas; j++) {
            	printf("Digite a nota da prova %d: ", j); // Leve em conta que a prova vale 100
            	scanf("%f", &nota);
            	somaNotasAluno += nota;
       		}

        	float mediaAluno = somaNotasAluno / numProvas;
        	printf("Media do Aluno %d: %.2f\n", i, mediaAluno);

        // Acumula a média do aluno para calcular a média da turma depois
        	somaTurma += mediaAluno;

        // Verifica se o aluno atingiu a media de 60
        	if (mediaAluno >= 60.0) {
           		 alunosAprovados++;
        	}
    	}

	float mediaTurma = somaTurma / numAlunos;
	float percentualAprovacao = ((float)alunosAprovados / numAlunos) * 100;

	printf("A media da turma eh: %.2f\n",mediaTurma);
	printf("Percentual de aprovacao : %.2f%%\n",percentualAprovacao);

	return 0;	
}
