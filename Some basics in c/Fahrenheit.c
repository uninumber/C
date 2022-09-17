#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

void fahrtocelsius(void);
void celsiustofahr(void);

int main()
{

    int c;

    printf("Temparature conversion table\n");
    printf("Fahr to celsius conversion - '1'\n");
    printf("Celsius to fahr conversion - '2'\n");
    printf(" - Enter your choive - ");

    c = getchar();

    if (c == '1')
	fahrtocelsius();
    else if (c == '2')
	celsiustofahr();
    else
	printf("You enter invalid command");
}

void fahrtocelsius()
{
    float fahr;

    for (fahr = LOWER;
	 fahr <= UPPER;
	 fahr = fahr + STEP)
	printf("%3.0f %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    fahr = fahr + STEP;
}

void celsiustofahr()
{
    float celsius;

    for (celsius = LOWER;
	 celsius <= UPPER;
	 celsius = celsius + STEP)
	printf("%3.0f %6.1f\n", celsius, (9.0 * celsius) / 5.0 + 32);
}
