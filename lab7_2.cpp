#include <iostream>
#include <string>
using namespace std;

int main(){
    double id;
    int gear;
    string name,movie,ans1,ans2;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    cout << name << ": ";
    cin >> id;
    cin.ignore();
    gear = id/10000000;
    cout << "Fahsai: I think you may be GEAR " << gear - 12 << ". I have a free movie ticket for you." << endl;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?" << endl;
    cout << name << ": ";
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    cout << name << ": ";
    getline(cin,ans1);
    cout << "Fahsai: " << ans1 << "....that is OK!!! I'm looking forward to watching " << movie <<" with you." << endl;
    cout << name << ": ";
    getline(cin,ans2);
    cout << "Fahsai: 555+ see you " << ans1 << ". Bye Bye \\(^ ^)/";
}