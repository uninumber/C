#include <stdio.h>

int main()
{
    int c, i, nother, nwhite;
    int ndigit[10];

    nother = nwhite = 0;
    for (i = 0; i < 10; ++i)
	ndigit[i] = 0;

    while ((c = getchar()) != EOF)
	if (c >= '0' && c <= '9')
	    ++ndigit[c-'0'];
	else if (c == ' ' || c == '\n' || c == '\t')
	    ++nwhite;
	else
	    ++nother;

    printf("Digits: ");
    for (i = 0; i < 10; ++i)
	printf("%d", ndigit[i]);
    printf(", white space = %d, other = %d",
	   nwhite, nother);
}
