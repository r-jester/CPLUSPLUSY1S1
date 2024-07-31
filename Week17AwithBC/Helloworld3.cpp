#include <iostream>
// Namespaces
namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}
int main(){

    using namespace first;

    using namespace std;
    
    using std::cout;

    using std::string;

    string name = "Jester";

    cout << name << "\n";

    std::cout << second::x << std::endl;

    return 0;
}