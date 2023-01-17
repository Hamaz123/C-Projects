#include<iostream>
#include<windows.h>
#include<cstdlib>
#include<ctime>
#include<conio.h>
using namespace std;
   
      // For user to input the quatity of item 
  int quant;  
      // For owner to input that how much quantites are available 
  int Juice=0,Pizza=0,Rice=0,Fries=0,Wings=0,Pasta=0,Kabab=0;
      // remaining item
  int RJuice=0,RPizza=0,RRice=0,RKabab=0,RFries=0,RWings=0,RPasta=0;
      // For user to input the amount 
  int amount,amount1;
      // For user to select any given item  
  int choice;
     
     // Front Structure
void MenueBar(){
     cout<<"\n\t\t\t M     M  EEEE  N   N  UU   UU  EEEE    BBBB     A    RRRRR   ";
     cout<<"\n\t\t\t MM   MM  EE    NN  N  UU   UU  EE      B   B   A A   R   RR  ";
     cout<<"\n\t\t\t M M M M  EEEE  N N N  UU   UU  EEEE    B BB   AAAAA  RRRR    ";
     cout<<"\n\t\t\t M  M  M  EE    N  NN  UU   UU  EE      B   B  A   A  R  RR   ";
     cout<<"\n\t\t\t M     M  EEEE  N   N   UUUUU   EEEE    BBBB   A   A  R   RR  ";
     cout<<"\n\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _  ";
     cout<<"\n\nSelect from the option:"<<"\t\t\t\t\t\t\t\tYour Amount:"<<amount;
     cout<<"\n  1: Juice  (Rs/-100)";
     cout<<"\n  2: Pizza  (Rs/-800)";
     cout<<"\n  3: Rice   (Rs/-200)" ;
     cout<<"\n  4: Kabab  (Rs/-80)";
     cout<<"\n  5: Fries  (Rs/-100)";
     cout<<"\n  6: Wings  (Rs/-60)" ;
     cout<<"\n  7: Pasta  (Rs/-250)";
     cout<<"\n  8: Menue Quantity";
     cout<<"\n  9: Bill";
     cout<<"\n 10: Enter Amount(ctrl+A)";
     cout<<"\nESC: Exit";
     cout<<"\nChoose the item number: ";
     
}
   // "getche Function"
void ASCII(){
  quant=getche();
  /*Here '48' means '0' and '49' means '1' and so on...., */
  if(quant==48){
        quant=0;
       }else if(quant==49){
        quant=1;/* when you pressing '1' the function added '49' items so I write here after ASCII code
        that quant==1, I define all numbers separately here, You can see*/
       }else if(quant==50){
        quant=2;
       }else if(quant==51){
        quant=3;
       }else if(quant==52){
        quant=4;
       }else if(quant==53){
        quant=5;
       }else if(quant==54){
        quant=6;
       }else if(quant==55){
        quant=7;
       }else if(quant==56){
        quant=8;
       }else if(quant==57){
        quant=9;
       }
}

void FrontView(){
     cout<<"\n\n\t\t\t\t Quantity of items we have";
     cout<<"\n\t\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ ";
}
void cls(){
    system("cls");
}
   // used for showing the remaining item
void MenueQuantity(){
      /* Subtracting the items from 
              the menue quantity  which customers buy */  
      cout<<"\n\nJuice available: "<<Juice-RJuice; 
      cout<<"\n\nPizza available: "<<Pizza-RPizza;
      cout<<"\n\nRice  available: "<<Rice-RRice;
      cout<<"\n\nKabab available: "<<Kabab-RKabab;
      cout<<"\n\nFries available: "<<Fries-RFries;
      cout<<"\n\nWings available: "<<Wings-RWings;
      cout<<"\n\nPasta available: "<<Pasta-RPasta;
}
     // Say thanks to the user after Exit
void thanks(){
       cout<<"\n\n\n\n\n\n\t\t\t\t\t\t T";Sleep(50);cout<<"h";Sleep(50);cout<<"a";Sleep(50);
       cout<<"n";Sleep(50);cout<<"k";Sleep(50);cout<<"s";Sleep(50);cout<<" F";Sleep(50);
       cout<<"o";Sleep(50);cout<<"r";Sleep(50);cout<<" C";Sleep(50);cout<<"o";Sleep(50);
       cout<<"m";Sleep(50);cout<<"i";Sleep(50);cout<<"n";Sleep(50);cout<<"g";Sleep(50);
       cout<<" H";Sleep(50);cout<<"e";Sleep(50);cout<<"r";Sleep(50);cout<<"e";Sleep(50);
       cout<<"!";Sleep(3000);
}
 int main(){
     // For user to go back to menue
     char GoBack;
    
     // For generating Items quantity randomly (From line number 79)
    srand(time(0));
     
     // For saving record (How much items user buy)
    int CJuice=0,CPizza=0,CRice=0,CKabab=0,CFries=0,CWings=0,CPasta=0;
     // Total amount of item
    int Total_Juice=0,Total_Rice=0,Total_Kabab=0,Total_Fries=0,Total_Wings=0,Total_Pasta=0,
    Total_Pizza=0,Total_Bill;
    
     cls();
     FrontView();
     // Random Function
     Juice=rand()%200;
     cout<<"\n\nJuice  available: "<<Juice;
     Pizza=rand()%200; 
     cout<<"\n\nPizza  available: "<<Pizza;
     Rice=rand()%200;
     cout<<"\n\nRice   available: "<<Rice;
     Kabab=rand()%200;
     cout<<"\n\nKabab  available: "<<Kabab;
     Fries=rand()%200;
     cout<<"\n\nFries available: "<<Fries;
     Wings=rand()%200;
     cout<<"\n\nWings  available: "<<Wings;
     Pasta=rand()%200;
     cout<<"\n\nPasta  available: "<<Pasta;
     cout<<"\n\n\t\t\t\tEnter Amount: ";
     cin>>amount;
         
    // goto Function
     Menue:
     Menue1:
     
     // System clear Function
     cls();
     // This duplicare sketch is made for showing first time and when you buy anything (with "Sleep Fucnctin")
     cout<<"\n\t\t\t M     M  EEEE  N   N  UU   UU  EEEE    BBBB     A    RRRRR   ";Sleep(70);
     cout<<"\n\t\t\t MM   MM  EE    NN  N  UU   UU  EE      B   B   A A   R   RR  ";Sleep(70);
     cout<<"\n\t\t\t M M M M  EEEE  N N N  UU   UU  EEEE    B BB   AAAAA  RRRR    ";Sleep(70);
     cout<<"\n\t\t\t M  M  M  EE    N  NN  UU   UU  EE      B   B  A   A  R  RR   ";Sleep(70);
     cout<<"\n\t\t\t M     M  EEEE  N   N   UUUUU   EEEE    BBBB   A   A  R   RR  ";Sleep(70);
     cout<<"\n\t\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _  ";Sleep(70);
     cout<<"\n\nSelect from the option:"<<"\t\t\t\t\t\t\t\tYour Amount:"<<amount;
     cout<<"\n  1: Juice  (Rs/-100)";
     cout<<"\n  2: Pizza  (Rs/-800)";
     cout<<"\n  3: Rice   (Rs/-200)";
     cout<<"\n  4: Kabab  (Rs/-80)";
     cout<<"\n  5: Fries  (Rs/-100)";
     cout<<"\n  6: Wings  (Rs/-60)";
     cout<<"\n  7: Pasta  (Rs/-250)";
     cout<<"\n  8: Menue Quantity";
     cout<<"\n  9: Bill";
     cout<<"\n 10: Enter Amount(ctrl+A)";
     cout<<"\nESC: Exit";
     cout<<"\nChoose the item number: ";
     choice=getche();
     
  switch (choice)
     {
    case 49:
     cout<<"\nEnter the number of Juice you want: ";
     ASCII();// "getche function"made on line number 43.
    /* Here "if statement" is used, if the user's current amount is less for buying the
     item that he ordered.*/
if(quant*100>amount){cls();MenueBar();
            cout<<"\n\n\t\tYour amount is not enough to buy "<<quant<<" Juice.";Sleep(3000);
          goto Menue1;
}
if(Juice-RJuice>=quant){
          // These are used for saving previous data 
          RJuice=RJuice+quant;// Adding the items record that would sold 
          CJuice=CJuice+quant;// Adding the items record which are buying by current customer
          Total_Juice=Total_Juice+quant*100;
          amount=amount-(quant*100);
           
           // Void Function
          cls(); // Made on line number 40  
          MenueBar();// Made on line number 17 
         
         // used for grammer correction like s,es,are,is......
  if(quant==0){
            cout<<"\n\n\t\t0 Juice is not an order.";Sleep(3000);cls();MenueBar();
            cout<<"\n\n\t\tEnter the greater number!";Sleep(2000);
      }if(quant==1){cout<<"\n\n\t\t"<<quant<<" Juice is the order!";Sleep(3000);
    }else if(quant>1){cout<<"\n\n\t\t"<<quant<<" Juice are the order!";Sleep(3000);
  } 
}else{
       
       cls(); // Made on line number 43  
       MenueBar();// Made on line number 15  

      // If the current item is not available. In this case (if statement) used here 
  if(Juice-RJuice==1){
           cout<<"\n\n\t\tOnly "<<Juice-RJuice<<" Juice is availavle in the hotel";Sleep(3000);
      }else if(Juice-RJuice==0){cout<<"\n\n\t\tJuice is not available right now";Sleep(3000);
    }else{cout<<"\n\n\t\tOnly "<<Juice-RJuice<<" Juice are availavle in the hotel";Sleep(3000);
  }
}

break;
    
    case 50:
         cout<<"\nEnter the number of Pizza you want: ";
         ASCII();//"getche function" made on line number 43
if(quant*800>amount){cls();MenueBar();
            cout<<"\n\n\t\tYour amount is not enough to buy "<<quant<<" Pizza.";Sleep(3000);
          goto Menue1;
  }
         if(Pizza-RPizza>=quant){
           RPizza=RPizza+quant;
           CPizza=CPizza+quant;
           Total_Pizza=Total_Pizza+quant*800;
          amount=amount-(quant*800);
           cls();
           MenueBar();
    if(quant==0){
            cout<<"\n\n\t\t0 Juice is not an order.";Sleep(3000);cls();MenueBar();
            cout<<"\n\n\t\tEnter the greater number!";Sleep(2000);
        }else if(quant==1){cout<<"\n\n\t\t"<<quant<<" Pizza is the order!";Sleep(3000);
      }else if(quant>1){cout<<"\n\n\t\t"<<quant<<" Pizza are the order!";Sleep(3000);
    }
  }else{
          cls();
          MenueBar();
          
  if(Pizza-RPizza==1)
        {cout<<"\n\n\t\tOnly "<<Pizza-RPizza<<" Pizza are availavle in the hotel";Sleep(3000);
      }else if(Pizza-RPizza==0){cout<<"\n\n\t\tPizza is not available right now";Sleep(3000);
    }else{cout<<"\n\n\t\tOnly "<<Pizza-RPizza<<" Pizza are availavle in the hotel";Sleep(3000);
  }
}
break;
case 51:
         cout<<"\nEnter the number of Rice plates you want: ";
         ASCII();//"getche function" made on line number 43
if(quant*200>amount){cls();MenueBar();
            cout<<"\n\n\t\tYour amount is not enough to buy "<<quant<<" Rice Plate.";Sleep(3000);
          goto Menue1;
}
  if(Rice-RRice>=quant){
          RRice=RRice+quant;
          CRice=CRice+quant;
          Total_Rice=Total_Rice+quant*200;
          amount=amount-(quant*200);
          cls();
          MenueBar();
    if(quant==0){
            cout<<"\n\n\t\t0 Rice is not an order.";Sleep(3000); cls();MenueBar();
            cout<<"\n\n\t\tEnter the greater number!";Sleep(2000);
        }else  if(quant==1){cout<<"\n\n\t\t"<<quant<<" Rice Plate is the order!";Sleep(3000);
      }else if(quant>1){cout<<"\n\n\t\t"<<quant<<" Rice Plates are the order!";Sleep(3000);
    }
  }else{
        cls();
          MenueBar();
    if(Rice-RRice==1){cout<<"\n\n\t\tOnly "<<Rice-RRice<<" Rice Plates is availavle in the hotel";Sleep(3000);}
         else if(Rice-RRice==0){cout<<"\n\n\t\tRice is not available right now";Sleep(3000);
      }else{cout<<"\n\n\t\tOnly "<<Rice-RRice<<" Rice Plates are availavle in the hotel";Sleep(3000);
    }
  }
        break;
    case 52:
        cout<<"\nEnter the number of Kababs you want: ";
        ASCII();//"getche function" made on line number 43
          if(quant*80>amount){cls();MenueBar();
            cout<<"\n\n\t\tYour amount is not enough to buy "<<quant<<" Kabab.";Sleep(3000);
          goto Menue1;
          }
if(Kabab-RKabab>=quant){
          RKabab=RKabab+quant;
          CKabab=CKabab+quant;
          Total_Kabab=Total_Kabab+quant*80;
          amount=amount-(quant*80);
          cls();
          MenueBar();
    if(quant==0){
            cout<<"\n\n\t\t0 Kabab is not an order.";Sleep(3000);cls();MenueBar();           
            cout<<"\n\n\t\tEnter the greater number!";Sleep(2000);
        }else  if(quant==1){cout<<"\n\n\t\t"<<quant<<" Kabab is the order!";Sleep(3000);
      }else if(quant>1){cout<<"\n\n\t\t"<<quant<<" Kababs are the order!";Sleep(3000);
    }
  }else{
          cls();
          MenueBar();
  if(Kabab-RKabab==1){cout<<"\n\n\t\tOnly "<<Kabab-RKabab<<" Kabab is availavle in the hotel";Sleep(3000);}
         else if(Kabab-RKabab==0){cout<<"\n\n\t\tKabab is not available right now";Sleep(3000);
    }else{cout<<"\n\n\t\tOnly "<<Kabab-RKabab<<" Kababs are availavle in the hotel";Sleep(3000);
  }
}
         break;
    case 53:
       cout<<"\nEnter the number of Fries you want: ";
       ASCII();//"getche function" made on line number 43
        if(quant*100>amount){cls();MenueBar();
            cout<<"\n\n\t\tYour amount is not enough to buy "<<quant<<" Fries.";Sleep(3000);
          goto Menue1;
          }
        if(Fries-RFries>=quant){
          RFries=RFries+quant;
          CFries=CFries+quant;
          Total_Fries=Total_Fries+=quant*100;
          amount=amount-(quant*100);
          cls();
          MenueBar();
          if(quant==0){
            cout<<"\n\n\t\t0 Fries is not an order.";Sleep(3000);cls();MenueBar(); 
            cout<<"\n\n\t\tEnter the greater number!";Sleep(2000);
          }else  if(quant==1){cout<<"\n\n\t\t"<<quant<<" Fries is the order!";Sleep(3000);
          }else if(quant>1){
            cout<<"\n\n\t\t"<<quant<<" Friess are the order!";Sleep(3000);
          }
     }else{
          cls();
          MenueBar();
          if(Fries-RFries==1){cout<<"\n\n\t\tOnly "<<Fries-RFries<<" Fries is availavle in the hotel";Sleep(3000);}
         else if(Fries-RFries==0){cout<<"\n\n\t\tFries is not available right now";Sleep(3000);
         }else{
          cout<<"\n\n\t\tOnly "<<Fries-RFries<<" Friess are availavle in the hotel";Sleep(3000);}
         }
        break;
    case 54:
        cout<<"\nEnter the number of Wings you want: ";
        ASCII();//"getche function" made on line number 43
        if(quant*60>amount){cls();MenueBar();
            cout<<"\n\n\t\tYour amount is not enough to buy "<<quant<<" Wings.";Sleep(3000);
          goto Menue1;
          }
        if(Wings-RWings>=quant){
          RWings=RWings+quant;
          CWings=CWings+quant;
          Total_Wings=Total_Wings+quant*60;
          amount=amount-(quant*60);
         cls();
         MenueBar();
         if(quant==0){
            cout<<"\n\n\t\t0 Wings is not an order.";Sleep(3000);cls();MenueBar();
            cout<<"\n\n\t\tEnter the greater number!";Sleep(2000);
          }else  if(quant==1){cout<<"\n\n\t\t"<<quant<<" Wing is the order!";Sleep(3000);
          }else if(quant>1){
            cout<<"\n\n\t\t"<<quant<<" Wings are the order!";Sleep(3000);
          }
      }else{
          cls();
          MenueBar();
         
          if(Wings-RWings==1){cout<<"\n\n\t\tOnly "<<Wings-RWings<<" Wing is availavle in the hotel";Sleep(3000);}
         else if(Wings-RWings==0){cout<<"\n\n\t\tWings is not available right now";Sleep(3000);
         }else{
          cout<<"\n\n\t\tOnly "<<Wings-RWings<<" Wings are availavle in the hotel";Sleep(3000);}
         }
      
        break;
    case 55:
        cout<<"\nEnter the number of Pasta you want: ";
        ASCII();//"getche function" made on line number 43
        if(quant*250>amount){cls();MenueBar();
            cout<<"\n\n\t\tYour amount is not enough to buy "<<quant<<" Pasta.";Sleep(3000);
          goto Menue1;
          }
        if(Pasta-RPasta>=quant){
          RPasta=RPasta+quant;
          CPasta=CPasta+quant;
          Total_Pasta=Total_Pasta+quant*250;
          amount=amount-(quant*250);
          cls();
          MenueBar();
        if(quant==0){
            cout<<"\n\n\t\t0 Pasta is not an order.";Sleep(3000);cls();MenueBar();
            cout<<"\n\n\t\tEnter the greater number!";Sleep(2000);
          }else  if(quant==1){cout<<"\n\n\t\t"<<quant<<" Pasta is the order!";Sleep(3000);
          }else if(quant>1){
            cout<<"\n\n\t\t"<<quant<<" Pastas are the order!";Sleep(3000);
          }
      }else{
          cls();
          MenueBar();
         
         if(Pasta-RPasta==1){cout<<"\n\n\t\tOnly "<<Pasta-RPasta<<" Pasta is availavle in the hotel";Sleep(3000);}
         else if(Pasta-RPasta==0){cout<<"\n\n\t\tPasta is not available right now";Sleep(3000);
         }else{
          cout<<"\n\n\t\tOnly "<<Pasta-RPasta<<" Pastas are availavle in the hotel";Sleep(3000);}
         }
      break;
   case 56:
      cls();
      FrontView();// Made on line number 66 
     MenueQuantity();
     cout<<"\n\n\t\tPress any key to go back!";
     GoBack=getche();
     if(GoBack==8){}
      break;
   case 57:
       cls();
       // After buying the items once, if user wants to  buy again. Then the charges of previous
       // Bill is not added into the next Bill, this (if statement) Function is used
       if(CJuice==0){Total_Juice=0;}
       if(CPizza==0){Total_Pizza=0;}
       if(CRice==0){Total_Rice=0;}
       if(CKabab==0){Total_Kabab=0;}
       if(CWings==0){Total_Wings=0;}
       if(CPasta==0){Total_Pasta=0;}
       if(CFries==0){Total_Fries=0;}
       
      /*if user not buy anything, and press on the "Bill" button, in this situation,
         this (if statement) Function is used to tell him that bill will  not be Made*/
       if(CJuice==0&&CPizza==0&&CRice==0&&CKabab==0&&CWings==0&&CPasta==0&&CFries==0){
        cout<<"\n\n\n\n\n\n\t\t\t\t\t\tYour Bill is not Prepaired, ";
        cout<<"\n\n\t\t\t\t\t\t   Because of no order!";Sleep(3000);break;
        }
        // From there till the ending of "case 9:", bill printing Sketched is Made
       cout<<"\n\n\t\t\t\t\t\t| Items | Quant | Total |";
       cout<<"\n\t\t\t\t\t\t|-------|-------|-------|";
    if(CJuice==0){
        // If user not order this current item, then it will not show on the bill
    }else{
       if(CJuice<=9){cout<<"\n\t\t\t\t\t\t| "<<"Juice"<<" | "<<CJuice<<" "<<"    | "<<Total_Juice;
       }else{
       cout<<"\n\t\t\t\t\t\t| "<<"Juice"<<" | "<<CJuice<<" "<<"   | "<<Total_Juice;}
       cout<<"\n\t\t\t\t\t\t|-------|-------|-------|";
     }
    if(CPizza==0){
        // If user not order this current item, then it will not show on the bill
     }else{
      if(CPizza<=9){cout<<"\n\t\t\t\t\t\t| "<<"Pizza"<<" | "<<CPizza<<"     | "<<Total_Pizza;
      }else{
       cout<<"\n\t\t\t\t\t\t| "<<"Pizza"<<" | "<<CPizza<<"    | "<<Total_Pizza;}
       cout<<"\n\t\t\t\t\t\t|-------|-------|-------|";
     } 
    if(CRice==0){
        // If user not order this current item, then it will not show on the bill
      }else{
        if(CRice<=9){cout<<"\n\t\t\t\t\t\t| "<<"Rice"<<"  | "<<CRice<<"     | "<<Total_Rice;
        }else{
          cout<<"\n\t\t\t\t\t\t| "<<"Rice"<<"  | "<<CRice<<"    | "<<Total_Rice;}
          cout<<"\n\t\t\t\t\t\t|-------|-------|-------|";}
   if(CKabab==0){
        // If user not order this current item, then it will not show on the bill
    }else{
       if(CKabab<=9){cout<<"\n\t\t\t\t\t\t| "<<"Kabab"<<" | "<<CKabab<<"     | "<<Total_Kabab;
       }else{
        cout<<"\n\t\t\t\t\t\t| "<<"Kabab"<<" | "<<CKabab<<"    | "<<Total_Kabab;}
        cout<<"\n\t\t\t\t\t\t|-------|-------|-------|";
     }
       if(CWings==0){
        // If user not order this current item, then it will not show on the bill
       }else{
      if(CWings<=9){cout<<"\n\t\t\t\t\t\t| "<<"Wings"<<" | "<<CWings<<"     | "<<Total_Wings;
      }else{
        cout<<"\n\t\t\t\t\t\t| "<<"Wings"<<" | "<<CWings<<"    | "<<Total_Wings;}
        cout<<"\n\t\t\t\t\t\t|-------|-------|-------|";}
    if(CPasta==0){
        // If user not order this current item, then it will not show on the bill
     }else{
       if(CPasta<=9){cout<<"\n\t\t\t\t\t\t| "<<"Pasta"<<" | "<<CPasta<<"     | "<<Total_Pasta;
       }else{
       cout<<"\n\t\t\t\t\t\t| "<<"Pasta"<<" | "<<CPasta<<"    | "<<Total_Pasta;}
       cout<<"\n\t\t\t\t\t\t|-------|-------|-------|";
      }
  if(CFries==0){
        // If user not order this current item, then it will not show on the bill
       }else{
      if(CFries<=9){cout<<"\n\t\t\t\t\t\t| "<<"Ice- "<<" | "<<CFries<<"     | "<<Total_Fries;
      }else{
        cout<<"\n\t\t\t\t\t\t| "<<"Ice- "<<" | "<<CFries<<"    | "<<Total_Fries;}
       cout<<"\n\t\t\t\t\t\t|Cream  |       |       |";
    }
      // For Total_Bill amount to print on the Bill
      Total_Bill=Total_Pizza+Total_Rice+Total_Kabab+Total_Juice+
      Total_Wings+Total_Fries+Total_Pasta;
       cout<<"\n\n\t\t\t\t\t\t   Total_Bill  =  "<<Total_Bill;
       cout<<"\n\t\t\t\t\t\t    CashBack   =  "<<amount;
        cout << "\n\n\t\t\t\t\t    You Want To buy Again Press (y/n)? "; 
        
     // For user that Is he wants to buy again or not?
     GoBack=getche();
    if(GoBack==121){
      // If user wants to buy again than all previous data is clear
      CJuice=0,CWings=0,CPasta=0,CFries=0,CKabab=0,CRice=0,CPizza=0,amount=0;
      Total_Juice=0,Total_Rice=0,Total_Kabab=0,Total_Fries=0,Total_Wings=0,Total_Pasta=0,
      Total_Pizza=0;
      cls();
      FrontView();
      MenueQuantity(); // Made on line number 73
      cout<<"\n\n\t\t\tEnter Amount: ";
      cin>>amount;
      
    }else{
          cls(); amount=0;
          // If  current user not want to buy again than all previous data is clear
          CJuice=0,CWings=0,CPasta=0,CFries=0,CKabab=0,CRice=0,CPizza=0,amount=0;
      Total_Juice=0,Total_Rice=0,Total_Kabab=0,Total_Fries=0,Total_Wings=0,Total_Pasta=0,
      Total_Pizza=0;
      // For user that he does not wants to buy again
       thanks();
      
     }
        break;
    case 1:
     cls();
     FrontView();// Made on line number 66 
     MenueQuantity();// Made on line number 73
      cout<<"\n\n\t\tEnter Amount: ";
      cin>>amount1;
    amount=amount+amount1;// for adding the data of user's amount
     break;
   case 27:
     /* After buying any item, user should press on bill "Bill" button In case, 
     if user press on exit button this function is used to tell him to press on "Exit" button*/
     if(CJuice!=0||CPizza!=0||CRice!=0||CKabab!=0||CWings!=0||CPasta!=0||CFries!=0){
        cls();cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tPress 9 to print your Bill!";Sleep(3000);
     }else{
      cls();
     thanks();}
     exit(0);
     break;
     
    default:
     cout<<"\n\t Please choose between these numbers!";Sleep(3000);
        break;
  }
     // "goto function" to repeat all  process from starting
  goto Menue;
      
  return 0;
}
