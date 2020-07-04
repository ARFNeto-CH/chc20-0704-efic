#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "ref.h"


int main()
{
	char    palavra[30];
	char* p = palavra;
	char c = 0;
	while ( (c = fgetc(stdin)) != '\n' )
		if (idx[c]) *p++ = c;
	*p = 0;	if (p > palavra) printf("%s\n", palavra);
	return 0;
};


int geramain(int argc, char** argv)
{
	FILE* saida = stdout;
	int disco = 0; // gerou arquivo?
	if (argc > 1)
	{
		saida = fopen(argv[1], "w");
		disco = 1;
	};
	int out = 1;
	fprintf(saida, "\nconst char idx[256] =\n{\n\n");
	for (int i = 0; i < 256; i = i + 1)
	{
		fprintf(saida, "%3d, ", 0);
		if (out % 16 == 0) fprintf(saida, " // %03d-%03d\n", out - 16, out - 1);
		out += 1;
	};
	fprintf(saida, "  0\n\n}; // ARFNeto '20\n");
	if (disco)
	{
		fprintf(stderr, "\nGerado trecho de codigo em '%s'\n",
			argv[1]);
	};
	return 0;
};	// main()

