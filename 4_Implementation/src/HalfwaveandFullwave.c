#include<stdio.h>
#include<math.h>
#define PI 3.142857

/**
 * @brief function to calculate the Halfwave rectifier parameters
 * @param Vdc Dc voltage value entered by User
 * @param Rl  load resistance value entered by User
 *
 * @return int Returns all the parameter of Halfwave
 */

int operationofHalfwave()
{
  float Vdc,Rl,Idc,Vavg,Iavg,Irms,Vrms,Formfactor,Powerdelivered,percentageregulation,a,b,c,d;
  printf("\nEnter the Vdc= ");
  scanf("%f", &Vdc);
  printf("\nEnter the Rl= ");
  scanf("%f", &Rl);
  Idc=(Vdc/Rl);
  printf("The output DC Current of Halfwave is %f amps.\n",Idc);
  Vavg=(Vdc/PI);
  printf("The output Average Voltage of Halfwave is %f volts.\n",Vavg);
  Iavg=(Idc/PI);
  printf("The output Average Current of Halfwave is %f amps.\n",Iavg);
  Vrms=(Vdc/2);
  printf("The output RMS Voltage of Halfwave is %f volts.\n",Vrms);
  Irms=(Idc/2);
  printf("The output RMS Current of Halfwave is %f amps.\n",Irms);
  Formfactor=(Vrms/Vavg);
  printf("The Formfactor of Halfwave is %f\n",Formfactor);
  a=Vrms*Vrms;
  b=a/Rl;
  Powerdelivered=b;
  printf("The Powerdelivered of Halfwave is %f watts. \n",Powerdelivered);
  c=Vdc-Vavg;
  d=c/Vavg;
  percentageregulation=d;
  printf("The percentageregulation of Halfwave is %f \n",percentageregulation);
  return 1;
}
/**
 *@brief function to calculate the Fullwave rectifier parameters
 * @param Vdc Dc voltage value entered by User
 * @param Rl  load resistance value entered by User
 *
 * @return int Returns all the parameter of Fullwave
 */

int  operationofFullwave()
{
  float Vdc,Rl,Idc,Vavg,Iavg,Irms,Vrms,Formfactor,Powerdelivered,Percentageregulation,e,f,g,h,i,j,k,l;
  printf("\nEnter the Vdc=");
  scanf("%f", &Vdc);
  printf("\nEnter the Rl=");
  scanf("%f", &Rl);
    Idc=(Vdc/Rl);
  printf("The output DC Current of Fullwave is %f amps.\n",Idc);
  e=2*Vdc;
  f=e/PI;
  Vavg=f;
  printf("The output Average Voltage of Fullwave is %f volts.\n",Vavg);
  g=2*Idc;
  h=g/PI;
  Iavg=h;
  printf("The output Average Current of Fullwave is %f amps.\n",Iavg);
  Vrms=(Vdc/1.412);
  printf("The output RMS Voltage of Fullwave is %f volts.\n",Vrms);
  Irms=(Idc/1.412);
  printf("The output RMS Current of Fullwave is %f amps.\n",Irms);
  Formfactor=(Vrms/Vavg);
  printf("The Formfactor of Fullwave is %f\n",Formfactor);
  i=Vrms*Vrms;
  k=i/Rl;
  Powerdelivered=k;
  printf("The Powerdelivered of Fullwave is %f watts. \n",Powerdelivered);
  j=Vdc-Vavg;
  l=j/Vavg;
  Percentageregulation=l;
  printf("The Percentage regulation of Fullwave is %f \n",Percentageregulation);
  return 1;
}
int Vdc(int Vdc)
{
  Vdc=0;
  if(Vdc>0)
  {
    return 0;
  }
  else  
  return 1;
}
