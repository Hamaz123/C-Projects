#include<iostream>
using namespace std;
long double value;
void cls(){
    system("cls");
}
void dollar(){
    long double ret;    
    cout <<"Enter the value: ";
    cin>>value;
    ret= value*223.70;
    cout <<"The value of "<<value<<" Dollar in Pakistani Rupees is "<<ret<<endl<<endl;}
void pound(){
    long double ret;    
    cout <<"Enter the value: ";
    cin>>value;
    ret= value*275.15;
    cout <<"The value of "<<value<<" Pound in Pakistani Rupees is "<<ret<<endl<<endl;}
void dirham(){
    long double ret;    
    cout <<"Enter the value: ";
    cin>>value;
    ret= value*60.90;
    cout <<"The value of pakistani "<<value<<" Arabic Dirham in Pakistani Rupees is "<<ret<<endl<<endl;}
void riyal(){
    long double ret;    
    cout <<"Enter the value: ";
    cin>>value;
    ret= value*59.52;
        cout <<"The value of  "<<value<<" Arabic Riyal in Pakistani Rupees is "<<ret<<endl<<endl;}
void yuan(){
    long double ret;    
    cout <<"Enter the value: ";
    cin>>value;
    ret= value*321.18;
    cout <<"The value of "<<value<<" Chinese Yuan in Pakistani Rupees is "<<ret<<endl<<endl;}
void indian(){
    long double ret;    
    cout <<"Enter the value: ";
    cin>>value;
    ret= value*2.75;
    cout <<"The value of "<<value<<" Indian Rupees in Pakistani Rupees is "<<ret<<endl<<endl;}
int main(){
    int i;
    int number;
    do{cls(); 
    cout<<"press 1 to convert Dollar into Pakistani Rs/-"<<endl;
    cout<<"press 2 to convert Pound into Pakistani Rs/-" <<endl;
    cout<<"press 3 to convert Dirham into Pakistani Rs/-"<<endl;
    cout<<"press 4 to convert Riyal into Pakistani Rs/-" <<endl;
    cout<<"press 5 to convert Yuan into Pakistani Rs/-"  <<endl;
    cout<<"press 6 to convert Indian Rs/- into Pakistani Rs/-"<<endl;
    cout<<"press 7 to to exit"<<endl<<endl;
    }while(i==-1);
    while(true){cin>>number;
    switch (number)
    {
    case 1:
    dollar();
        break;
        case 2:
    pound();
        break;
        case 3:
    dirham();
        break;
        case 4:
    riyal();
        break;
        case 5:
    yuan();
        break;
        case 6:
    indian();
        break;
        case 7:
    exit(0);
        break;
    default:
    cout << "Invalid Number"<<endl<<endl;
    break;}
    }
    return 0;
}