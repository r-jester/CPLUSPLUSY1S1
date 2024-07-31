#include <iostream>
#include <list>

class ytChannel{
public:
    std::string name;
    std::string ownerName;
    int subscriberCount;
    std::list<std::string>publishVideotitle;
} ;

int main(){
    system("cls");
    ytChannel Jester;
    Jester.name = "Jester Gaming";
    Jester.ownerName = "Jester";
    Jester.subscriberCount = 100;
    Jester.publishVideotitle.push_back("Chou Full GamePlay!!");
    Jester.publishVideotitle.push_back("Gusion Savage Highlight!");

    std::cout << "Name: " << Jester.name << std::endl;
    std::cout << "OwnerName: " << Jester.ownerName << std::endl;
    std::cout << "SubscriberCount: " << Jester.subscriberCount << std::endl;
    std::cout << "Video: " << std::endl;
    for (std::string publishVideo : Jester.publishVideotitle){
	std::cout << publishVideo << std::endl;
    }

    return 0;
}
