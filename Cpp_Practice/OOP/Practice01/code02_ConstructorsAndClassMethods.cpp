#include<iostream>
#include<list>
#include<string>

using namespace std;

class Bike{
public:
    string Name;
    string Model;
    int Price;
    list<string>Features;

    // Building a constructor
    Bike (string name, string model, int price){
        Name = name;
        Model = model;
        Price = price;
    }
    
    // Building class method 
    void getinfo(){
        cout << "Name: " << Name << endl;
        cout << "Model: " << Model << endl;
        cout << "Price: " << Price << endl;
        cout << "Features: " << endl;
        for(string feature : Features){
            cout << "\t" << feature << endl;
        }
    }
};

int main(){

    Bike myBike01("Royal Enfield", "Classic 350", 440000);
    myBike01.Features.push_back("GunMetal Color");
    myBike01.Features.push_back("350cc Engine");
    myBike01.Features.push_back("25km Mileage");
    myBike01.Features.push_back("200kg Weight");

    Bike myBike02("Yamaha", "XSR", 500000);
    myBike02.Features.push_back("Black");
    myBike02.Features.push_back("150cc Engine");
    myBike02.Features.push_back("45km Mileage");
    myBike02.Features.push_back("100kg Weight");

    myBike01.getinfo();
    myBike02.getinfo();  

    return 0;
}