#include<iostream>
using namespace std;
class country{
    public:
    string country_name;
};
class state : public country{
    public:
    string state_name;
};
class city : public state{ 
    public:
    string pin;
};
int main()
{
    city Jaipur;
    Jaipur.country_name = "India";
    Jaipur.pin = "302003";
    Jaipur.state_name = "Rajasthan";
    cout<<Jaipur.country_name + " " + Jaipur.pin + " " + Jaipur.state_name;
    return 0;
}
