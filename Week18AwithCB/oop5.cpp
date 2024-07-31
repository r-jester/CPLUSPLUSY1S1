#include <iostream>
#include <list>
#include <vector>

class ytChannel{
private:
    std::string name;
    int subscribercount;
    std::list<std::string>publishVideotitle;
protected:
    std::string ownerName;
    int contentQuality;
public:
    ytChannel(std::string Name, std::string OwnerName){
	name = Name;
	ownerName = OwnerName;
	subscribercount = 0;
	contentQuality = 0;
    }
    void getInfo(){
	std::cout << "Name: " << name << std::endl;
	std::cout << "OwnerName: " << ownerName << std::endl;
	std::cout << "Subscriber: " << subscribercount << std::endl;
	std::cout << "Video: " << std::endl;
	for(std::string publishVideo : publishVideotitle){
	    std::cout << publishVideo << std::endl;
	}
    }
    void Subscribe(){
	subscribercount++;
    }
    void UnSubscribe(){
	if(subscribercount > 0){
	    subscribercount--;
	}
    }
    void PublishVideo(std::string title){
	publishVideotitle.push_back(title);
    }
    void CheckAnalytics(){
	if(contentQuality < 5){
	    std::cout << ownerName << " has bad quality content!" << std::endl;
	}
	else{
	    std::cout << ownerName << " has great content!" << std::endl;
	}
    }
};

class GamingYtChannel : public ytChannel{
public:
    GamingYtChannel(std::string Name, std::string OwnerName) : ytChannel(Name, OwnerName){

    }
    void Practice(){
	std::cout << ownerName << " is Active, Friendly, Goal!" << std::endl;
	contentQuality++;
    }
};

class CoderYtChannel : public ytChannel{
public:
    CoderYtChannel(std::string Name, std::string OwnerName) : ytChannel(Name, OwnerName){

    }
    void Practice(){
	std::cout << ownerName << " is Writing Code, Analyze Code, Research new Technology!" << std::endl;
	contentQuality++;
    }
};

int main(){
    system("cls");
    GamingYtChannel Jester("Jester Gaming", "Jester");
    Jester.Subscribe();
    Jester.Subscribe();
    Jester.Subscribe();
    Jester.UnSubscribe();
    Jester.PublishVideo("Chou Full Gameplay!");
    Jester.PublishVideo("Gusion Savage!");
    Jester.PublishVideo("Fanny Test!");
    Jester.getInfo();
    Jester.Practice();
    Jester.Practice();
    Jester.Practice();
    std::cout << std::endl;
    CoderYtChannel R_Jester("R_Jester Programmer", "R_Jester");
    R_Jester.Subscribe();
    R_Jester.Subscribe();
    R_Jester.Subscribe();
    R_Jester.UnSubscribe();
    R_Jester.PublishVideo("C++ Input&Output");
    R_Jester.PublishVideo("C++ If&Else Statements");
    R_Jester.PublishVideo("C++ Switch");
    R_Jester.getInfo();
    R_Jester.Practice();
    R_Jester.Practice();
    R_Jester.Practice();
    R_Jester.Practice();
    R_Jester.Practice();
    std::cout << std::endl;
    ytChannel *yt1 = & Jester;
    ytChannel *yt2 = & R_Jester;

    yt1->CheckAnalytics();
    yt2->CheckAnalytics();

    return 0;
}
