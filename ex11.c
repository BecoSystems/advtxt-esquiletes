/*****************************************************************************
 *   exN.11                                    Version 20180714.101818        *
 *                                                                           *
 *   Brief description                                                       *
 *   Copyright (C) 2016-2018    by Ruben Carlo Benante                       *
 *****************************************************************************
 *   This program is free software; you can redistribute it and/or modify    *
 *   it under the terms of the GNU General Public License as published by    *
 *   the Free Software Foundation; either version 2 of the License.          *
 *                                                                           *
 *   This program is distributed in the hope that it will be useful,         *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of          *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           *
 *   GNU General Public License for more details.                            *
 *                                                                           *
 *   You should have received a copy of the GNU General Public License       *
 *   along with this program; if not, write to the                           *
 *   Free Software Foundation, Inc.,                                         *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.               *
 *****************************************************************************
 *   To contact the author, please write to:                                 *
 *   Ruben Carlo Benante                                                     *
 *   Email: rcb@beco.cc                                                      *
 *   Webpage: www.beco.cc                                                    *
 *   Phone: +55 (81) 3184-7555                                               *
 *****************************************************************************/

/* ------------------------------------------------------------------------- */
/**
 * @file exN.c
 * @ingroup GroupUnique
 * @brief Brief description
 * @details This program really do a nice job as a template, and template only!
 * @version 20160908.182830
 * @date 2016-09-08
 * @author Ruben Carlo Benante <<rcb@beco.cc>>
 * @par Webpage
 * <<a href="http://www.beco.cc">www.beco.cc</a>>
 * @copyright (c) 2016 GNU GPL v2
 * @note This program is free software: you can redistribute it
 * and/or modify it under the terms of the
 * GNU General Public License as published by
 * the Free Software Foundation version 2 of the License.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with this program.
 * If not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place - Suite 330, Boston, MA. 02111-1307, USA.
 * Or read it online at <<http://www.gnu.org/licenses/>>.
 *
 *
 * @todo Now that you have the template, hands on! Programme!
 * @warning Be carefull not to lose your mind in small things.
 * @bug This file right now does nothing usefull
 *
 */

/*
 * Instrucoes para compilar:
 *   $gcc exN.c -o exN.x -Wall
 *        -Wextra -ansi -pedantic-errors -g -O0 -DDEBUG=1 -DVERSION="0.1.160612.142044"
 *   ou preferencialmente inclua um makefile e use:
 *   $make
 *
 * Modelo de indentacao:
 * Estilo: --style=allman ou -A1
 *
 * Opcoes: -A1 -s4 -k3 -xj -SCNeUpv
 *
 *  * No vi use:
 *      :% !astyle -A1 -s4 -k3 -xj -SCNeUpv
 *  * No linux:
 *      $astlye -A1 -s4 -k3 -xj -SCNeUpv exN.c
 */

/* ------------------------------------------------------------------------- */
/* includes */

#include <stdio.h> /* Standard I/O functions */
#include <stdlib.h> /* Miscellaneous functions (rand, malloc, srand)*/
#include <getopt.h> /* get options from system argc/argv */
#include <stdio.h>
#include <stdlib.h>
/* ------------------------------------------------------------------------- */
#define texto "| THE GAME : VALFENDA |"
void jogo();
void menu();

int main(void)
{
    char select;

    do
    {
        printf("%s", texto);
        printf("\n\n| BEGINNG |\n\n");
        printf("Selecione 1 para abrir o menu\nselecione 2 para fechar\n ");
        scanf(" %c", &select);

        switch(select)
        {
            case '1':
                menu();
                break;
            case '2':
                printf("Fechando...\n");
                 exit(0);
            default:
                printf("Opção inválida, digite 1 ou 2.\n");
                break;
        }
    }
    while(select != '2');






    return EXIT_SUCCESS;
}

/* Write your functions here... */

/* ------------------------------------------------------------------------- */

void menu()
{
    char select;
    do
    {
        printf("\n\n| MENU |\n\n");
        printf("Selecione 1 para jogar \nSelecione 2 para sair\n ");
        scanf(" %c", &select);

        switch(select)
        {
            case '1':
                jogo();
                break;
            case '2':
                printf("Saindo...\n");
                 exit(0);
            default:
                printf("Opção inválida, digite 1 ou 2.\n");
                break;
        }
    }
    while(select != '2');
}
/* ------------------------------------------------------------------------- */
void jogo() {
    char select;
printf("\n\n--- BEM-VINDO A VALFENDA ---\n\n");
    printf("Você, jovem viajante, acaba de chegar a Valfenda\n");
    printf("em busca de conhecimento e aventura.\n");
    printf("Após uma longa jornada por caminhos traiçoeiros,\n");
    printf("sua alma anseia por desvendar os mistérios que\n");
    printf("cercam a antiga Aliança dos Povos.\n");
    printf("Enquanto explora os bosques, iluminados pela\n");
    printf("suave luz da lua, você ouve histórias sussurradas\n");
    printf("pelo vento. Falam de um artefato antigo, que,\n");
    printf("segundo as lendas, pode reverter a queda dos reinos\n");
    printf("e restaurar a paz.\n\n");
    printf("À medida que a noite se aprofunda, você se senta\n");
    printf("em uma das pedras frias do pátio de Valfenda,\n");
    printf("contemplando o céu estrelado. A lua cheia brilha\n");
    printf("intensamente sobre as copas das árvores, mas algo\n");
    printf("perturbador chama sua atenção. Uma sombra obscura\n");
    printf("cruza o brilho do luar. Com seu vasto conhecimento,\n");
    printf("você imediatamente reconhece o que está à sua frente:\n");
    printf("O AKERNAAK.\n\n");
    printf("Você precisa agir rápido! Há uma besta com duas\n");
    printf("flechas diante de você:\n");
    printf("(1) Flecha negra\n");
    printf("(2) Flecha branca\n");
    printf("Digite 'q' para sair do jogo a qualquer momento.\n");
    while (1) {
        printf("\nEscolha 1, 2 ou 'q' para sair: ");
        scanf(" %c", &select);

        if (select == 'q') {
            printf("Saindo do jogo...\n");
            exit(0);
        }
switch (select) {
            case '1':
                  printf("\nVocê escolhe a flecha negra e percebe que\n");
                printf("o material é duro e resistente. Confiante de\n");
                printf("que seu plano vai dar certo, você corre para\n");
                printf("a disposição com determinação e força. Ao\n");
                printf("chegar lá, recarrega a X-Bow, preparado para\n");
                printf("o confronto.\n");

            case '2':
                 printf("\nVocê escolhe a flecha branca e corre em direção\n");
                printf("à X-Bow com determinação. No entanto, no meio\n");
                printf("do trajeto, a flecha, frágil demais, se parte\n");
                printf("em suas mãos, arruinando seu plano. Incapaz de\n");
                printf("defender a vila, Akernak chega e dá fim a Valfenda.\n");
                return;
            default:
                printf("Opção inválida.\n");
                break;
        }
    }
}
/* ------------------------------------------------------------------------- */
/**
 * @ingroup GroupUnique
 * @brief Prints version and copyright information and exit
 * @details Prints version and copyright information (usually called by opt -V)
 * @return Void
 * @author Ruben Carlo Benante
 * @version 20160908.182830
 * @date 2016-09-08
 *
 */
void copyr(void)
{
    IFDEBUG("copyr()");
    printf("%s - Version %s\n", "exN", VERSION);
    printf("\nCopyright (C) %d %s <%s>, GNU GPL version 2 <http://gnu.org/licenses/gpl.html>. This  is  free  software: you are free to change and redistribute it. There is NO WARRANTY, to the extent permitted by law. USE IT AS IT IS. The author takes no responsability to any damage this software may inflige in your data.\n\n", 2016, "Ruben Carlo Benante", "rcb@beco.cc");
    if(verb > 3) printf("copyr(): Verbose: %d\n", verb); /* -vvvv */
    exit(EXIT_FAILURE);
}

/* ------------------------------------------------------------------------- */
/**
 * @ingroup GroupUnique
 * @brief This function initializes some operations before start
 * @details Details to be written in
 * multiple lines
 *
 * @pre You need to call foo() before calling this function
 *
 * @param[in] i Input parameter that does bla
 * @param[out] o Parameter that outputs ble
 * @param[in,out] z The @a z variable is used as input and output
 *
 * @retval 0 Returned when bli
 * @retval 1 Error code: function returned blo
 *
 * @par Example
 * @code
 *    if(x == funcexample(i, o, z))
 *       printf("And that is it\n");
 * @endcode
 *
 * @return Void
 *
 * @warning Be carefull with blu
 * @todo Need to implement it. Its empty now. This doxygen tags are overwhelming.
 * Mandatory tags are: ingroup, brief, details, param, return, author and date.
 * The others are optional.
 *
 * @deprecated This function will be deactivated in version +11
 * @see help()
 * @see copyr()
 * @bug There is a bug with x greater than y
 * @note You can read more about it at <<a href="http://www.beco.cc">www.beco.cc</a>>
 *
 * @author Ruben Carlo Benante
 * @version 20160908.182830
 * @date 2016-09-08
 * @copyright Use this tag only if not the same as the whole file
 *
 */
void exN_init(void)
{
    IFDEBUG("exN_init()");
    /* initialization */
    return;
}

/* ------------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : C config for Vim modeline    */
/* Template by Dr. Beco <rcb at beco dot cc>       Version 20180716.101436   */

