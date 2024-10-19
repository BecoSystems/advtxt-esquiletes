[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/Una5IRus)
advtxt-esquiletes

Introdução

 
O código desenvolvido na linguagem C tem como finalidade o desenvolvimeno de um jogo. O jogo em questão é chamado de "Valvenda". O jogador, chamado de viajante, anseia desvendar mistérios que cercam o povo de Valvenda, um vilarejo cheio de beleza e sabedoria. Em uma das de suas aventuras o viajante se depara com algo sombrio, o que mais tarde é revelado como o dragão do jogo. O jogador em questão precisa tomar uma atitude em relação ao dragão usando umas das opções apresentadas no jogo, entre elas: duas flechas, a negra e a branca, ou ir contar aos moradores do vilarejo sobre a criatura. O jogador ao analisar as opções disponíveis, escolhe uma delas para que a próxima etapa venha ser revelada. Caso o jogador escolha a flecha branca, infelizmente a flecha errada, o dragão o matará. E caso, opte pela flecha negra conseguirá matar o dragão, porém ao anunciar para os moradores de Valvenda será taxado como louco e preso. Caso escolha ir contar aos moradores do vilarejo sobre o dragão...será, dá mesma forma, taxado como louco e preso.

## entradas
#include <stdio.h> // Para entrada e saída padrão int main() { // Código do programa return 0; // Indica que o programa terminou com sucesso }

declaração de variáveis void jogo () void jogo2 () void menu ()

Opção 1 Opção 2 printf (" exibição do texto :");

*Entradas esperadas 


O usuário pode escolher: 1 para abrir o menu. 2 para fechar o programa. Entrada no menu:

O usuário pode escolher: 1 para jogar. 2 para sair do menu e voltar ao main. Entrada no jogo:

O usuário pode escolher: 1 para escolher a flecha branca. 2 para escolher a flecha negra. 3 para ir contar aos elfos sobre o dragão. Repetição do Jogo:

Após cada rodada do jogo, o usuário pode escolher: s ou S para jogar novamente. Qualquer outra tecla para voltar ao menu.

*Saída produzidas

Ao entrar no jogo: Você, viajante, acabou de chegar em Valvenda... Você pensa rápido e na sua frente há uma besta com duas flechas: (1) flecha negra ou (2) flecha branca. Ou você age de maneira racional e vai contar aos elfos sobre o dragão (3).

Escolha 1, 2 ou 3: Saídas Baseadas nas Escolhas:

Se o usuário escolher 1 (flecha branca): Você escolhe a flecha branca. flecha errada! dragão sobrevive e mata voce.

Se o usuário escolher 2 (flecha negra): Você escolhe a flecha negra. Flecha certa e o dragão morre. Você vai correndo contar a notícia aos moradores, mas eles te acham um doido e te prendem.

Se o usuário escolher 3 (contar aos moradores ): Você vai correndo à aldeia contar aos moradores, mas eles te acham um doido e te prendem.

Mensagem de Opção Inválida: Se o usuário digitar algo diferente de 1, 2 ou 3; Opção inválida. Pergunta sobre Repetição do Jogo:

Após uma rodada, pergunta se deseja jogar novamente: Copiar código Deseja jogar novamente? (s/n):

### Orientação

* Autor: Prof. Dr. Ruben Carlo Benante
* Email: rcb@upe.br
* Data: 2016-09-07
* Licensa: GNU/GPL v2.0

