#include<iostream>
#include<string>
#include<list>

using namespace std;

class YoutubeChannnel{

//Encapsulation    
private:
    string ChannelName;
    string OwnerName;
    int SubscriberCount = 0;
    list<string>Videos;

public:
//Constructor
    YoutubeChannnel(string name, string ownername){
        ChannelName = name;
        OwnerName = ownername;
    }

    void getInfo(){
        cout <<"Channel Name: " << ChannelName << endl;
        cout <<"Owner Name: " << OwnerName << endl;
        cout <<"Subscriber Number: " << SubscriberCount << endl;
        cout <<"Videos: " << endl;
        for(string video: Videos){
            cout <<'\t'<< video << endl;
        }
    }

    void Subscribe(){
        SubscriberCount++;
    }
    void Unsubscribe(){
        if(SubscriberCount>0){
            SubscriberCount--;
        }
    }

    void AddVideo(string vidoeTitle){
        Videos.push_back(vidoeTitle);
    }


};

int main(){
    YoutubeChannnel myYTC("My Travel Blog","Sabboshachi");
    myYTC.Subscribe();
    myYTC.Subscribe();
    myYTC.Subscribe();
    myYTC.Subscribe();
    myYTC.Unsubscribe();

    myYTC.AddVideo("Journey to Kedarnath.");
    myYTC.AddVideo("Journey to Vanaras.");
    myYTC.AddVideo("Journey to Kolkata.");
    myYTC.AddVideo("Journey to Dhaka.");
    myYTC.AddVideo("Journey to Chennai.");
    myYTC.AddVideo("Journey to Darjeeling.");
    myYTC.Subscribe();
    myYTC.Unsubscribe();
    myYTC.Subscribe();
    myYTC.Subscribe();
    myYTC.Subscribe();
    myYTC.Unsubscribe();
    myYTC.Subscribe();

    myYTC.getInfo();

    return 0;
}