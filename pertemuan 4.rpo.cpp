#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream.h>

main()
{
char huruf[20];
char pindah[20];
clrscr();

cout<<"masukan sembarang kata=";
gets(huruf);
cout<<"panjang kata yang di infutkan=";
cout<<strlen(huruf);
getch();
}
