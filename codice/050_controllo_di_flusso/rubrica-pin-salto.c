#include <stdio.h>

main() {
  int pin, scelta;
  scanf("%d", &pin);
  if (pin != 44122)
    goto fine;
  printf("Accesso consentito\n");
  printf("1. Tizio 335-1234567");
  printf("2. Caio 347-1234567");
  printf("Scegliere un contatto\n");
  scanf("%d", &scelta);
  printf("Chiamata al contatto %d\n", scelta);
fine:
  printf("Fine\n");
}