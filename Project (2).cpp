#include<iostream>
using namespace std;

int main(){
    int bus=0,car=0,rickshaw=0;
    int number;
    while(true){
    cout << "press 1 to add a Bus"<<endl;
    cout << "press 2 to add a Car"<<endl;
    cout << "press 3 to add a Rickshaw"<<endl;
    cout << "press 4 to show record"<<endl;
    cout << "press 5 to a delete record"<<endl;
    cout << "press 6 to exit"<<endl;
    cin>>number;
    switch (number)
    {
    case 1:
      bus++;
     cout << "Bus is added"<<endl<<endl;
        break;
    case 2:
      car++;
      cout << "Car is added"<<endl<<endl;
        break;
    case 3:
        rickshaw++;
        cout << "Rickshaw is added"<<endl<<endl;
     break;
    case 4:
       cout <<"bus: "<<bus<<endl;
       cout <<"car: "<<car<<endl;
       cout <<"rickshaw: "<<rickshaw<<endl<<endl;
        break;
    case 5:
    bus=0;car=0;rickshaw=0;
    cout <<"Your reocrd is deleted"<<endl<<endl;
        break;
    case 6:
      exit(0);
        break;
    default:
    cout << "Invalid Number"<<endl<<endl;
        break;
    } }
    return 0;
}