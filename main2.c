/* Data de submissao:
 * Nome: Enzo Hideki Iwata
 * RA: 215394
 */

#include <stdio.h>
#include <string.h>


int main() {
	
	char *palavra;
	scanf("%s", palavra);
	printf("%s", palavra);
	while(palavra != "\n"){
		for(int i=strlen(palavra)-1; i>-1;i--){
			printf("%c", palavra[i]);
		}
		printf(" ");
		scanf("%s", palavra);
	}
	printf("\n");
	return 0;

}
