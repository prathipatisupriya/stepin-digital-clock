
#include<stdio.h>
#include<math.h>
#define PI 3.142857
#include "func.h"

int operationofHalfwave()
{
  float Vdc,Rl,Idc,Vavg,Iavg,Irms,Vrms,Formfactor,Powerdelivered,percentageregulation;
  printf("\nEnter the Vdc= ");
  scanf("%f", &Vdc);
  printf("\nEnter the Rl= ");
  scanf("%f", &Rl);
  Idc=(Vdc/Rl);
  printf("The output DC Current of halfwave is %f amps.\n",Idc);
  Vavg=(Vdc/PI);
  printf("The output Average Voltage of halfwave is %f volts.\n",Vavg);
  Iavg=(Idc/PI);
  printf("The output Average Current of halfwave is %f amps.\n",Iavg);
  Vrms=(Vdc/2);
  printf("The output RMS Voltage of halfwave is %f volts.\n",Vrms);
  Irms=(Idc/2);
  printf("The output RMS Current of halfwave is %f amps.\n",Irms);
  Formfactor=(Vrms/Vavg);
  printf("The Formfactor of halfwave is %f\n",Formfactor);
  Powerdelivered=(Vrms*Vrms)/(Rl);
  printf("The Powerdelivered of halfwave is %f watts. \n",Powerdelivered);
  percentageregulation=((Vdc-Vavg)/Vavg);
  printf("The percentageregulation of halfwave is %f \n",percentageregulation);
  return 1;
}

int  operationofFullwave()
{
  float Vdc,Rl,Idc,Vavg,Iavg,Irms,Vrms,Formfactor,Powerdelivered,Percentageregulation;
  printf("\nEnter the Vdc=");
  scanf("%f", &Vdc);
  printf("\nEnter the Rl=");
  scanf("%f", &Rl);
    Idc=(Vdc/Rl);
  printf("The output DC Current of fullwave is %f amps.\n",Idc);
  Vavg=(2*Vdc/PI);
  printf("The output Average Voltage of fullwave is %f volts.\n",Vavg);
  Iavg=(2*Idc/PI);
  printf("The output Average Current of fullwave is %f amps.\n",Iavg);
  Vrms=(Vdc/1.412);
  printf("The output RMS Voltage of halfwave is %f volts.\n",Vrms);
  Irms=(Idc/1.412);
  printf("The output RMS Current of fullwave is %f amps.\n",Irms);
  Formfactor=(Vrms/Vavg);
  printf("The Formfactor of fullwave is %f\n",Formfactor);
  Powerdelivered=(Vrms*Vrms)/(Rl);
  printf("The Powerdelivered of fullwave is %f watts. \n",Powerdelivered);
  Percentageregulation=((Vdc-Vavg)/Vavg);
  printf("The Percentage regulation of fullwave is %f \n",Percentageregulation);
  return 1;
}
int Vdc(int vdc){
  vdc=0;
  if(vdc>0)
  {
    return 0;
  }
  else  
  return 1;
}