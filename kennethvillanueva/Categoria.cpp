#include <iostream>
#include <windows.h>
int clrscr()
{
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
COORD coord = {0, 0};
DWORD count;
CONSOLE_SCREEN_BUFFER_INFO csbi;
GetConsoleScreenBufferInfo(hStdOut, &csbi);
FillConsoleOutputCharacter(hStdOut, ' ', csbi.dwSize.X * csbi.dwSize.Y, coord, &count);
SetConsoleCursorPosition(hStdOut, coord);
}
int main()
{
int salir,saliryesno;
salir=0;
while(salir==0){
clrscr();
int cod_pel,a;
float dias,fav,nue,est,sest;
printf("\n");
printf("\t CATEGORIA\tPRECIO\t CODIGO\tRECARGO/DIA DE ATRASO\n\n");
printf("\tFAVORITOS\t$2.50\t\t1\t\t$0.50\n");
printf("\tNUEVOS\t\t$3.00\t\t2\t\t$0.75\n");
printf("\tESTRENOS\t$3.50\t\t3\t\t$1.00\n");
printf("\tSUPER ESTRENOS\t$4.00\t\t4\t\t$1.50\n\n");
printf("INTRODUZCA EL CODIGO DE LA CATEGORIA DE LA PELICULA: ");
scanf("%d",&cod_pel);
a=0;
while(a==0){
if(cod_pel<1 || cod_pel>4){
printf("INTRODUZCA EL CODIGO DE LA CATEGORIA DE LA PELICULA (ENTRE 1 Y 4): ");
scanf("%d",&cod_pel);
}
else{
a=1;
}
}
printf("INTRODUZCA EL NUMERO DE DIAS DE ATRASO EN LA DEVOLUCION: ");
scanf("%f",&dias);
a=0;
while(a==0){
if(dias<0){
printf("INTRODUZCA EL NUMERO DE DIAS DE ATRASO EN LA DEVOLUCION: ");
scanf("%f",&dias);
}
else{
a=1;
}
}
switch(cod_pel)
{
case 1:
fav=((dias*0.5)+2.5);
printf("\nEL TOTAL A PAGAR ES: $%.2f\n\n",fav);
break;
case 2:
nue=((dias*0.75)+3);
printf("\nEL TOTAL A PAGAR ES: $%.2f\n\n",nue);
break;
case 3:
est= ((dias*1.00)+3.5);
printf("\nEL TOTAL A PAGAR ES: $%.2f\n\n",est);
break;
case 4:
sest=((dias*1.5)+4.0);
printf("\nEL TOTAL A PAGAR ES: $%.2f dolares\n\n",sest);
break;
}
printf("SI DESEA SALIR PRESIONE 1 O DE LO CONTRARIO PRESIONE OTRO NUMERO: ");
scanf("%d",&saliryesno);
switch(saliryesno){
case 1:
salir=1;
}
}
}
