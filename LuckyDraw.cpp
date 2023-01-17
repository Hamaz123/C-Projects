#include<iostream>
#include<windows.h>
#include<cstdlib>
#include<ctime>
#include<conio.h>
using namespace std;

int prize,a,b,c,n,n1,n2,number;
string name;
          
void restart(){
cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tTry to restart program!"; }

void oops(){
  cout<<"                                  OOOOO        OOOOO     PPPPPPP   SSSSSSSS   "<<endl;Sleep(50);
  cout<<"                                OO     OO    OO     OO   PP     P  SS         "<<endl;Sleep(50);
  cout<<"                               OO       OO  OO       OO  PPPPPPP   SSSSSSSS   "<<endl;Sleep(50);
  cout<<"                                OO     OO    OO     OO   PP              SS   "<<endl;Sleep(50);
  cout<<"                                  OOOOO        OOOOO     PPP       SSSSSSSS   "<<endl;Sleep(50);}

void cls(){
  system("cls");}

void congrats(){
  cout<<"                                CCCCC      OOOOO     N    N  GGGGGGG  RRRRRR  TTTTTTTT  SSSSSSSS          "<<endl;Sleep(50);
  cout<<"                              CC         OO     OO   NN   N  G        R   RR     TT     SS                "<<endl;Sleep(50);
  cout<<"                             CC         OO       OO  N  N N  G GGGGG  RRRRR      TT     SSSSSSSS          "<<endl;Sleep(50);
  cout<<"                              CC         OO     OO   N   NN  G     G  R   RR     TT           SS          "<<endl;Sleep(50);
  cout<<"                                CCCCC      OOOOO     N    N  GGGGGGG  R    RR    TT     SSSSSSSS          "<<endl;Sleep(50);}

void SwitchData(){
  switch(number){
  cout<<"\n\n\nPrize codes are here:"<<"\n"<<a<<"\n"<<b<<"\n"<<c<<"\nEnter anyone Prize code: ";    
       cin >> prize;cls();
      if((prize!=a) && (prize!=b) && (prize!=c)){
      again:
      cls();
     cout<<"\n\n\nPrize codes are here:"<<"\n"<<a<<"\n"<<b<<"\n"<<c
     <<"\nPlease Enter the prize code: ";    
       cin>>prize;
       }if((prize!=a) && (prize!=b) && (prize!=c)){goto again;}
       cls();
      if(prize==a){ if(n<=9){oops();}else{ congrats();} cout<<name<<" won "<<n<<" Rs/-.";Sleep(4000);break;}
      if(prize==b){ if(n1<=9){oops();}else{ congrats();} cout<<name<<" won "<<n1<<" Rs/-.";Sleep(4000);break;}
      if(prize==c){ if(n2<=9){oops();}else{ congrats();} cout<<name<<" won "<<n2<<" Rs/-.";Sleep(4000);break;}}}

int main(){
  
  cls();
  cout<<"                       ===================================================================================="<<endl;       Sleep(100);
  cout<<"                                W     W   EEEEE   LL         CCCCC      OOOOO      M     M   EEEEE                  "<<endl;Sleep(100);
  cout<<"                                W  W  W   EE      LL       CC         OO     OO    MM   MM   EE                    "<<endl;Sleep(100);
  cout<<"                                W W W W   EEEEE   LL      CC         OO       OO   M M M M   EEEEE                  "<<endl;Sleep(100);
  cout<<"                                WW   WW   EE      LL       CC         OO     OO    M  M  M   EE                     "<<endl;Sleep(100);
  cout<<"                                W     W   EEEEE   LLLLLLL    CCCCC      OOOOO      M     M   EEEEE                  "<<endl;Sleep(100);
  cout<<"                       ===================================================================================="<<endl;Sleep(70);
  
  cout<<"\nEnter your name: ";
  getline(cin,name);
  cout<<"\nHello "<<name<<"! How are you."<<endl<<endl;Sleep(50);
   cout<<"Mr."<<name<<";"<<endl;Sleep(50);
     
     srand(time(0));
     a=rand()%100;
     b=rand()%100;
     c=rand()%100;
     n=rand()%100;
     n1=rand()%100;
     n2=rand()%100;
    go:cls();
    cout << "Enter any one number between 1 to 10: ";Sleep(50);
    cout<< "\nEnter: ";Sleep(50);cin >> number;
   cls();
     if(number!=1&&number!=2&&number!=3&&number!=4&&number!=5&&number!=6&&number!=7&&number!=8&&number!=9&&number!=10){
      goto go;
        }
          switch (number){
    case 1:
        SwitchData();
    case 2:
        SwitchData();
    case 3:
        SwitchData();
    case 4:
        SwitchData();
    case 5:
        SwitchData();
    case 6:
        SwitchData();
    case 7:
        SwitchData();
    case 8:
        SwitchData();
    case 9:
        SwitchData();
    case 10:
        cout<<"\n\n\nPrize codes are here:"<<"\n"<<a<<"\n"<<b<<"\n"<<c<<"\nEnter anyone Prize code: ";    
       cin >> prize;cls();
      if((prize!=a) && (prize!=b) && (prize!=c)){
      again:
      cls();
     cout<<"\n\n\nPrize codes are here:"<<"\n"<<a<<"\n"<<b<<"\n"<<c
     <<"\nPlease Enter the prize code: ";    
       cin>>prize;
       }if((prize!=a) && (prize!=b) && (prize!=c)){goto again;}
       cls();
      if(prize==a){ if(n<=9){oops();}else{ congrats();} cout<<name<<" won "<<n<<" Rs/-.";Sleep(4000);break;}
      if(prize==b){ if(n1<=9){oops();}else{ congrats();} cout<<name<<" won "<<n1<<" Rs/-.";Sleep(4000);break;}
      if(prize==c){ if(n2<=9){oops();}else{ congrats();} cout<<name<<" won "<<n2<<" Rs/-.";Sleep(4000);break;}
          default:
          break;} 
          // goto go;
          
      return 0;}