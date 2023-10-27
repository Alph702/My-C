#include "stdio.h"
void Kms_to_Miles(void);
void Inches_to_Feet(void);
void Cms_to_Inches(void);
void Pouns_to_Kgs(void);
void Inch_to_Meter(void);
int main(void) {
  int choos;
  while (1 == 1) {
    printf("\n1. Kms to miles\n2. Inches to foot\n3. Cms to inches\n4. Pound to "
           "kgs\n5. Inches to meters\n \n\a");
    printf("What you want to do? \a: ");
    scanf("%d", &choos);
    if (choos == 1) {
      Kms_to_Miles();
    } else if (choos == 2) {
      Inches_to_Feet();
    } else if (choos == 3) {
      Cms_to_Inches();
    } else if (choos == 4) {
      Pouns_to_Kgs();
    } else if (choos == 5) {
      Inch_to_Meter();
    } else {
      break;
    }
  }
  return 0;
}

void Kms_to_Miles(void) {
  float km, miles;
  printf("Enter the distance in Kms : ");
  scanf("%f", &km);
  miles = km * 0.621371;
  printf("The distance in miles is %f\n \n\a", miles);
}
void Inches_to_Feet(void) {
  float inches, feet;
  printf("Enter the distance in inches : ");
  scanf("%f", &inches);
  feet = inches * 0.0254;
  printf("The distance in feet is %f\n \n\a", feet);
}
void Cms_to_Inches(void) {
  float cms, inches;
  printf("Enter the distance in cms : ");
  scanf("%f", &cms);
  inches = cms * 0.393701;
  printf("The distance in inches is %f\n \n\a", inches);
}
void Pouns_to_Kgs(void) {
  float pound, kgs;
  printf("Enter the weight in pounds : ");
  scanf("%f", &pound);
  kgs = pound * 0.453592;
  printf("The weight in kgs is %f\n \n\a", kgs);
}
void Inch_to_Meter(void) {
  float inch, meter;
  printf("Enter the distance in inches : ");
  scanf("%f", &inch);
  meter = inch * 0.0254;
  printf("The distance in meters is %f\n \n\a", meter);
}