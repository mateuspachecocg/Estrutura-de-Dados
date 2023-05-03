/* TAD: Ponto(x, y) */

/* Tipo Exprtado */
typedef struct ponto Ponto;

/* Funcoes Exportadas */

/* Funcao cria 
 * Aloca e retorna um ponto com coordenadas*/
Ponto* pto_cria (float x, float y);

/* Funcao Libera
  *Libera a memoria de um ponto com coordenadas (x,y) */ 
void pto_libera(Ponto* p);

/* Funcao Acessa
  * Retorna os valores das coordenadas de um ponto */
void pto_acessa (Ponto* p, float* x, float* y);

/* Funcao atribui
  * Atribui novos valores as coordenadas de um ponto */
void pto_atribui(Ponto* p, float x, float y);

/* Funcao distancia
  * Retorna a distancia entre dois pontos */
float pto_distancia(Ponto* p1, Ponto* p2);

