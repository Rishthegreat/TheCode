#include <iostream>

class Player {
public:
    int Money;
    bool bInJail;
    int currsquare;

};

class Properties {
public:
    int price;
    int houses;
    int rent;
    bool bIsStation;
    bool bisUtility;
    int rollnumber;
    std::string color;
    Player owner;
    std::string name;
};

void initializeproperties() {
    Properties* Prop = new Properties[28];
    Prop[1].name = "MedAvenue";
    Prop[1].bIsStation = false;
    Prop[1].bisUtility = false;
    Prop[1].color = "brown";
    Prop[1].houses = 0;
    Prop[1].price = 60;
    Prop[1].rollnumber = 1;
    Prop[2].name = "BaltAvenue";
    Prop[2].bIsStation = false;
    Prop[2].bisUtility = false;
    Prop[2].color = "brown";
    Prop[2].houses = 0;
    Prop[2].price = 60;
    Prop[2].rollnumber = 3;
}


int main()
{
    initializeproperties();
    int numplayers;
    std::cout << "How many players: "; 
    std::cin >> numplayers;
    Player* playerarr = new Player[numplayers];
    for (int i = 0; i < numplayers; i++) {
        playerarr[i].Money = 1500;
        playerarr[i].bInJail = false;
        playerarr[i].currsquare = 0;
    }
}



