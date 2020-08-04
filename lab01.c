/* Data de submissao:
 * Nome: Tony Tian Rui Li
 * RA:206373
 */

#include <stdio.h>
const int tam_buffer=100;

typedef struct {
  char dados[tam_buffer];
  int n;
} pilha, *Pilha;

void push(Pilha p, char c) {
/* Insere caractere c na pilha */
  if (p->n < tam_buffer) {
    p->dados[p->n]=c;
    (p->n)++;
  }
}

void pilha_init(Pilha p) {
  p->n = 0;
}

char pop(Pilha p) {
/* Remove caractere do topo da pilha */
  char c;
  if ((p->n)>0) {
    (p->n)--;
    c = p->dados[p->n];
  }
  return c;
}
int main() {
  char buffer[tam_buffer]; Pilha p;
  char c;
  fgets(buffer, tam_buffer, stdin);
  pilha_init(p);
  int i, j;

  for (i=0; buffer[i]!='\n'; i++){
  	push(p, buffer[i]);	
  	for (j=0; buffer[i]==' '; j++){

  		c=pop(p);
  		printf("%c", c);
  	}
  }

  return 0;
}
