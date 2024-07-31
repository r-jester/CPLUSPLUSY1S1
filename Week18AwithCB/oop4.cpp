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
public:
    ytChannel(std::string Name, std::string OwnerName){
	name = Name;
	ownerName = OwnerName;
	subscribercount = 0;
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
};

class GamingYtChannel : public ytChannel{
public:
    GamingYtChannel(std::string Name, std::string OwnerName) : ytChannel(Name, OwnerName){

    }
    void Practice(){
	std::cout << ownerName << " is Active, Friendly, Goal!" << std::endl;
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
    return 0;
}

