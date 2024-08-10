#include <iostream>
#include <vector>
#include <string>

// using namespace std;

int main(void)
{
    std::vector<std::string> msg {"Hello", "C++", "world", "from", "VS Code", "and C++ extensions!"};
    // msg.assign()

    int i = 0;
    for (const std::string& word : msg)
    {
        std::cout << word << " ";
        ++i;
    }
    std::cout << std::endl;

}