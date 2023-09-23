# Repositório de Exemplos de Criação de Processos no Linux

Este repositório contém exemplos de código em C que demonstram como criar processos em sistemas Linux utilizando a função `fork()`. O foco principal deste repositório é explorar o conceito de criação de processos e sua aplicação em sistemas Unix/Linux.

## Visão Geral

A criação de processos é uma parte fundamental da programação em sistemas Unix/Linux. Ela permite que um programa crie cópias de si mesmo, chamadas de processos filhos, para realizar tarefas específicas de maneira concorrente. Essa técnica é amplamente utilizada para implementar tarefas paralelas, gerenciar recursos e executar operações em segundo plano.

Este repositório inclui um exemplo de código em C que demonstra a criação de processos usando a função `fork()`. O código divide a execução em um processo pai e um processo filho, cada um realizando tarefas específicas.

## Como Usar

Para executar o código de exemplo, siga estas etapas:

1. Clone este repositório em seu sistema Linux:

   ```
   git clone https://github.com/seu-usuario/nome-do-repositorio.git
   ```

2. Navegue até o diretório do projeto:

   ```
   cd nome-do-repositorio
   ```

3. Compile o código usando um compilador C, como o GCC:

   ```
   gcc main.c -o process_creation
   ```

4. Execute o programa:

   ```
   ./process_creation
   ```

Você verá a criação de um processo filho e a execução de tarefas específicas para cada processo. O código inclui um exemplo simples que gera e exibe os termos da série de Fibonacci no processo filho.

## Contribuições

Sinta-se à vontade para contribuir com mais exemplos ou melhorias neste repositório. Se você tiver exemplos adicionais de criação de processos ou informações úteis relacionadas a esse tópico, contribua para enriquecer este recurso.

## Autor

Se você tiver alguma dúvida ou sugestão, entre em contato através do thiagonasmento20@gmail.com ou abra uma issue neste repositório.

Aproveite os exemplos e aprenda mais sobre a criação de processos no Linux!
