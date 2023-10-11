#include <stdio.h>

int main (int argc, char *argv[]){
    printf("AAA\n");
    printf ("%d [0x%x] [%c]\n " , 42, 42, 0x42);

    char buffer[100]; 
    int nombre = 42;
    double reel = 3.14159;

    sprintf(buffer, "Ceci est un exemple de sprintf papapa\n");
    printf( buffer);

    sprintf(buffer, "Ceci est un exemple de sprintf : nombre = %d, reel = %.2f", nombre, reel);

    printf (buffer);
    printf("\nLe texte formaté est : %s\n", buffer);
    return 0;
}
