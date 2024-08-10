#include <iostream>
#include <vector>
#include <string>

// using namespace std;

int main(void)
{
    std::vector<std::string> msg {"Hello", "C++", "world", "from", "VS Code", "and C++ extensions!"};
    // msg.assign()

    for (const std::string& word : msg)
    {
        std::cout << word << " ";
    }
    std::cout << std::endl;

}