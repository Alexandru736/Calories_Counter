#include "headerul_nou.h"

int main()
{
  TMeniu p,
  meniu_zi[3]; // mesele unei persoane intr-o zi
  TLista L = NULL;
  TPersoana pers;
  FILE *f = fopen("input.in", "r");

  fscanf(f, "%s %d %d %d $d", pers.nume, &pers.varsta,
  &pers.greutate, &pers.inaltime, &pers.tip_regim);
  fgetc(f);
  float bmi_rezultat = BMI(pers);
  printf("BMI (%s) = %f\n", pers.nume, BMI(pers));
  char status[13];
  /*


  */
  status = afisareStatus(pers);

  printf("\n");
  while(fscanf(f, "%s %d %d %hd %hd", p.denumire,
  &p.calorii, &p.contor, &p.masa, &p.categorie) == 5)
  {
    ins_Inceput_Meniu(&L, p);
    fgetc(f);
  }
  printLista(L);

  Generare_Meniu(L, pers, status);

  distrugeLista(&L);
  fclose(f);

  return 0;
}
