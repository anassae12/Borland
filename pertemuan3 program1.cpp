#include <stdio.h>
#include <conio.h>
#include <iostream>

main()
{
float tugas,absen,uts,uas,na;

cout <<"masukan nilai mahasiswa"<<endl;
cout <<"***********************"<<endl;
cout <<"masukan nilai tugas: ",cin>>tugas;
cout <<"masukan nilai absen: ",cin>>absen;
cout <<"masukan nilai UTS  : ",cin>>uts;
cout <<"masukan nilai UAS  : ",cin>>uas;

na=(0.1*tugas)+(0.2*absen)+(0.3*uts)+(0.4*uas);
cout <<"========HASIL AKHIR======="<<endl;
cout <<"hasil nilai anda adalah "<<na<<endl;

getch();
}


