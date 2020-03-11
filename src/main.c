/* Data de submissao:
 * Nome: Enzo Hideki Iwata
 * RA: 215394
 */

#include <stdio.h>
#include <string.h>

#define TAM_PILHA 100
const int tam_buffer=100;


typedef struct {
  char dados[TAM_PILHA];
  int n;
} pilha, *Pilha;

void pilha_init(Pilha p) {
  p->n = 0;
}

void push(Pilha p, char c) {
/* Insere caractere c na pilha */
  if (p->n < 10) {
    p->dados[p->n]=c;
    (p->n)++;
  }
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
	char buffer[tam_buffer];
	pilha p_palavra;
	pilha_init(&p_palavra);	
	fgets(buffer, tam_buffer, stdin);
	int i = 0;
	while(buffer[i] != '\n'){
		if(buffer[i] == ' '){
			while(p_palavra.n>0){
				printf("%c", pop(&p_palavra));
			}
			printf(" ");
		}else{
			push(&p_palavra, buffer[i]);
		}
		i++;
	
	}	

	while(p_palavra.n>0){
		printf("%c", pop(&p_palavra));
	}

	printf("\n");
	//printf("%s", buffer);
	return 0;
}
