#include <iostream>
#include <list>

class ytChannel{
private:
    std::string name;
    std::string ownerName;
    int subscriberCount;
    std::list<std::string>publishVideotitle;
public:
    ytChannel(std::string Name, std::string OwnerName){
	name = Name;
	ownerName = OwnerName;
    }
    void getInfo(){
	std::cout << "Name: " << name << std::endl;
	std::cout << "OwnerName: " << ownerName << std::endl;
    }
} ;

int main(){
    system("cls");
    ytChannel Jester("Jester Gaming", "Jester");
    Jester.getInfo();
    return 0;
}

