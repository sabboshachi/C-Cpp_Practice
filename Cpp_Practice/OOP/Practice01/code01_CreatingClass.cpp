#include<iostream>
#include<string>
#include<list>

using namespace std;

class Bikes{
public:
    string companyName;
    string model;
    int price;
    list<string>features;
};


int main(){
    Bikes myBike;

    myBike.companyName = "Royal Enfield";
    myBike.model = "Classic 350";
    myBike.price = 440000;
    myBike.features = {"GunMetal Color", "350cc Engine", "25km Mileage", "200kg Weight"};

    cout << "Bike Name: " << myBike.companyName << endl;
    cout << "Model: " << myBike.model << endl;
    cout << "Price: " << myBike.price << endl;
    cout << "Features: " << endl;

    for (string feature : myBike.features){
        cout << "\t" << feature << endl;
    }
    return 0;
}