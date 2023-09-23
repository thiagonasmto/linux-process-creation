#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include "fibonacci.h"
#include <stdio.h>

int main() {
    pid_t pid;

    // Cria um processo filho
    pid = fork();

    if (pid < 0) {
        // Ocorreu um erro na criação do processo filho
        printf("\nErro na criação do processo filho!\n");
        return 1;
    } else if (pid == 0) {
        // Código a ser executado exclusivamente pelo processo filho
        printf("\nInicializando processo filho...");
        printf("\nMeu identificador (filho) é o número %d", getpid());
        printf("\nMinha função será gerar e exibir os termos da série de Fibonacci");
        
        // Chama a função que gera e exibe a série de Fibonacci
        fibonacci();
        
        printf("\nEncerrando processo filho!\n");
    } else {
        // Código a ser executado exclusivamente pelo processo pai
        // O pai aguardará até que o processo filho termine
        wait(NULL);
        printf("\nOlá! Sou o processo pai!");
        printf("\nCriei um processo filho com número %d. Ele já encerrou!", pid);
        printf("\nMeu identificador (pai) é o número %d", getpid());
        printf("\nEncerrando processo pai!\n");
    }
    
    return 0;
}
