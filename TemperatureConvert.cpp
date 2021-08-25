#include <stdio.h>
int main()
{
	int c, f, k;
  int code;
  printf("Made by Zen\n(1)Celsius to Farenheit\n(2)Fahrenheit to Celsius\n(3)Kelvin\n:");
  scanf("%d",&code);
  switch(code)
  {
    case 1:
      puts("You have picked Celsius to Fahrenheit.");
      printf("Enter the desired temperature to convert \n:");
      scanf("%d", &c);
      c = (c * 9 / 5) + 32;
      printf("The conversion of Celsius to Fahrenheit is  %d\n:", c);
      break;
    case 2:
      puts("You have picked Fahrenheit to Celsius");
      printf("Etner the desired temperature to convert \n:");
      scanf("%d", &f);
      f = (f - 32) * (5) / 9;
      printf("The conversion of Fahrenheit to Celsius %ld\n:", f);
      break;
    default:
      puts("That's not any of the choices = = ");
  }

  return(0);
}
