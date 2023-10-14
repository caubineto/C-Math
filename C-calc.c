#include <stdio.h>

int main()
{
    char operacao;
    double numero1, numero2, resultado;

    printf("Bem vindo(a) a C-Calculadora!\n");
    
    // Solicita ao usuário que insira a operação desejada
    printf("Digite a operação que deseja fazer (+ - * /)\n");
    
    // Lê a operação, com um espaço em branco para consumir a quebra de linha anterior
    scanf(" %c", &operacao);

    // Verifica se o operador é válido
    if (operacao != '+' && operacao != '-' && operacao != '*' && operacao != '/') {
        // Mensagem de erro se o operador não for válido
        printf("Erro: Operador inválido. Use apenas +, -, *, ou /\n");
        return 1; // Encerra o programa com código de retorno 1
    }

    printf("Digite o primeiro número: ");
    
    // Lê o primeiro número
    scanf("%lf", &numero1);

    printf("Digite o segundo número: ");
    
    // Lê o segundo número
    scanf("%lf", &numero2);

    // Realiza a operação com base no operador fornecido
    switch (operacao) {
        case '+':
            resultado = numero1 + numero2;
            break;

        case '-':
            resultado = numero1 - numero2;
            break;

        case '*':
            resultado = numero1 * numero2;
            break;

        case '/':
            if (numero2 == 0){
                // Mensagem de erro se houver tentativa de divisão por zero
                printf("Divisão por 0 não é permitida!");
                return 1; // Encerra o programa com código de retorno 1
            } else {
                resultado = numero1 / numero2;
            }
            break;
    
        default:
            // Mensagem de erro para qualquer operador inválido (embora isso seja improvável de acontecer)
            printf("Erro: você digitou algo inválido, tente novamente!");
            return 1; // Encerra o programa com código de retorno 1
    }

    // Exibe o resultado da operação
    printf("%.2lf %c %.2lf = %.2lf", numero1, operacao, numero2, resultado);

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
