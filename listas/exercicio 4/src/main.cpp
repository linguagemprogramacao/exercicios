#include <iostream>
#include <chrono>
#include <iomanip>
#include <ctime> 


using namespace std;

int main (int argc, char const * argv []) {

	
	auto now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    std::cout << std::put_time(std::localtime(&now), "%d-%m-%Y") << "\n";

	return 0;
}