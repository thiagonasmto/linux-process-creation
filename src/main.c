#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include "fibonacci.h"
#include <stdio.h>

int main(){
	pid_t pid;

	/* cria um processo filho */
	pid = fork();

	if (pid < 0) { /* houve erro! */
		/* exibir mensagem de erro */
		printf("\nErro da criacao de processo filho!\n");
		return 1;
	}else if (pid == 0) { /* processo filho */
		/* código exclusivo para o processo filho executar */
		printf("\nInicializando processo filho...");
		printf("\nMeu identificador (filho) eh o numero %d", getpid());	
		printf("\nMinha função será gerar e exibir os termos da série de Fibonacci");
		fibonacci();
		printf("\nEncerrando!\n");
	}else { /* processo pai */
		/* pai esperará até que o processo filho termine */
		wait(NULL);
		printf("\nOla! Sou o processo pai!");
		printf("\nCriei um processo filho de numero %d. Ele jah encerrou!", pid);
		printf("\nMeu identificador (pai) eh o numero %d", getpid());	
		printf("\nEncerrando!\n");
	}
	return 0;
}