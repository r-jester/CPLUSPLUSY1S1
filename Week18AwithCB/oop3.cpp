#include <iostream>
#include <list>

class ytChannel{
private:
    std::string name;
    std::string ownerName;
    int subscribercount;
    std::list<std::string>publishVideotitle;
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
    void PublishVideo(std::string publishVideo){
	publishVideotitle.push_back(publishVideo);
    }
} ;

int main(){
    system("cls");
    ytChannel Jester("Jester Gaming", "Jester");
    Jester.Subscribe();
    Jester.Subscribe();
    Jester.Subscribe();
    Jester.UnSubscribe();
    Jester.PublishVideo("Chou Full Gameplay!");
    Jester.PublishVideo("Gusion Savage!");
    Jester.PublishVideo("Fanny Test!");
    Jester.getInfo();
    return 0;
}
