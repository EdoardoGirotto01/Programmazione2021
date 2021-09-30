// stampa la differenza fra le date ricevute in input

#include <stdio.h>

main() {
  int G1, M1, A1;
  int G2, M2, A2;

  int N01, N11, N21, N31;
  int N02, N12, N22, N32;

  int JD1, JD2;

  printf("Digita giorno, mese e anno delle due date");
  scanf("%d%d%d", &G1, &M1, &A1);
  scanf("%d%d%d", &G2, &M2, &A2);

  N01 = (M1 - 14) / 12;
  N11 = (1461 * (A1 + 4800 + N01)) / 4;
  N21 = 367 * (M1 - 2 - 12 * N01) / 12;
  N31 = 3 * (A1 + 4900 + N01) / 400;
  JD1 = N11 + N21 - N31 + G1 - 32075;

  N02 = (M2 - 14) / 12;
  N12 = (1461 * (A2 + 4800 + N02)) / 4;
  N22 = 367 * (M2 - 2 - 12 * N02) / 12;
  N32 = 3 * (A2 + 4900 + N02) / 400;
  JD2 = N12 + N22 - N32 + G2 - 32075;

  printf("La differenza fra le date e` %d\n", JD2 - JD1);
}