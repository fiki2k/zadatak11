// Korisnik ce unijeti znak i program ce ispisati ASCII vrijednost znaka.

#include <stdio.h>
int main()
{
    char znak;
    printf("Unesi znak:");

    /* Ucita znak i spremi ga u varijablu "znak".*/
    scanf("%c", &znak);

    /* Kada koristim %d format za char varijablu 
    onda pokaze ASCII vrijednost za char.
     */
    printf("ASCII vrijednost znaka %c je: %d", znak, znak);
    return 0;
}
