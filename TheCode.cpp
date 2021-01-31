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
};

void initializeproperties() {
    Properties MedAvenue;
    MedAvenue.bIsStation = false;
    MedAvenue.bisUtility = false;
    MedAvenue.color = "brown";
    MedAvenue.houses = 0;
    MedAvenue.price = 60;
    MedAvenue.rollnumber = 1;
    Properties BaltAvenue;
    BaltAvenue.bIsStation = false;
    BaltAvenue.bisUtility = false;
    BaltAvenue.color = "brown";
    BaltAvenue.houses = 0;
    BaltAvenue.price = 60;
    BaltAvenue.rollnumber = 3;
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



