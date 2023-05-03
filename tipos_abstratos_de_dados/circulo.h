/* TAD: Circulo */

/* Dependencia de modulos */
#include "ponto.h"

/* Tipo exportado */
typedef struct circulo Circulo;

/* Funcoes exportadas */
/* Funcao cria
** Aloca e retorna um circulo com centro (x,y) e raio r
*/
Circulo* circ_cria(float x, float y, float r);

/* Funcao libera
** Libera memoria de um circulo previamente criado
*/
void circ_libera (Circulo* c);

/* Funcao area
** Retorna o valor da area do circulo.
*/
float circ_area (Circulo* c);


/* Funcao interior
** Verifica se um dado ponto p esta dentro do circulo
*/
int circ_interior (Circulo* c, Ponto* p);


