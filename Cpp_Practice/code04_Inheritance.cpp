#include<iostream>
#include<string>
#include<list>

using namespace std;

class YouTubeChannel{
private:
    string Name;
    // string Owner;
    int Subscribers = 0;
    list<string>Videos;

protected:
    string Owner;

public:
    YouTubeChannel(string name, string owner){
        Name = name;
        Owner = owner;
    }

    void getInfo(){
        cout <<"Name: "<< Name<<endl;
        cout <<"Owner: "<< Owner<<endl;
        cout <<"Subscribers: "<< Subscribers<<endl;
        cout <<"Videos: "<< endl;
        for(string video:Videos){
            cout<<"\t"<< video << endl;
        }
    }

    void Subscribe(){
        Subscribers++;
    }
    void Unsubscribe(){
        if (Subscribers>0){
            Subscribers--;
        }
    }

    void AddVideo(string vidoeTitle){
        Videos.push_back(vidoeTitle);

    }
};

class EduYoutubeChannel: public YouTubeChannel{
public:
    EduYoutubeChannel(string CH_name, string ownerName):YouTubeChannel(CH_name, ownerName){

    }
    void Practice(){
        cout<<Owner<< " says: Take your time and read again and again." << endl;
    }
};

int main(){

    YouTubeChannel myYTC("Sabboshachi Travel Vlog", "Sabboshachi Sarkar");
    myYTC.Subscribe();
    myYTC.AddVideo("Journey to Kedarnath.");
    myYTC.AddVideo("Journey to Vanaras.");
    myYTC.getInfo();


    EduYoutubeChannel myEduYTC("Mizan", "Legend");
    myEduYTC.Subscribe();
    myEduYTC.Subscribe();
    myEduYTC.Subscribe();
    myEduYTC.Subscribe();
    myEduYTC.AddVideo("C++ Course");
    myEduYTC.AddVideo("Python Course");
    myEduYTC.getInfo();
    myEduYTC.Practice();

    EduYoutubeChannel myEduYTC2("Anis", "Zayed");
    myEduYTC2.Subscribe();
    myEduYTC2.Subscribe();
    myEduYTC2.AddVideo("Java Course");
    myEduYTC2.AddVideo("HTML Course");
    myEduYTC2.getInfo();
    myEduYTC2.Practice();


    return 0;
}