#include <iostream>

using namespace std;

int main()
{
    long floors,rooms;

    std::cin >> floors >> rooms;


    std::cout << (floors-1)*rooms*3;
}
