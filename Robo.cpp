#include<iostream>
using namespace std;

int main()
{
std :: string name;
float degrees;

int f_temp;
cout<<"Welcome.My name is chitti,the bot\n";
cout << "what is your name??";
cin >> name;
cout << "how hot is it today??";
cin >> degrees;
f_temp = (degrees * 9/5) + 32;
cout<<"Hello "<<name<<"\n";
cout<< "The Current temperature is " << degrees << " celsius."<<"\n";
cout<< "The temperature in F is " << f_temp << " Fahrenheit."<<"\n";
    if(degrees <30)
    {
cout<<"oh!, its cold 👍outside,wear a Jacket.";

    }
    else {
        cout<<"oh!,😒 its Hot outside.";
    }


return 0;
}