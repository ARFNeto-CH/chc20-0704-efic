#include <stdio.h>
#include "ref.h"
int main()
{	char    palavra[30], *p = palavra;
	char    c = 0;
	int     n = 0; // letras na palavra lida
	while ((c = fgetc(stdin)) != '\n')
	{	n++; // leu mais uma letra
		if (idx[c]) *p++ = c; // guarda a vogal
	};	// while()
	*p = 0; // termina a string
	if ((p > palavra) && (n%2 == 1)) printf("%s\n", palavra);
};  // 1464369