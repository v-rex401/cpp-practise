#include <iostream> 

int main() {
    std::cout << "Hello World"; 
    std::cout << "Please enter a value: "; 
    int value; 
    std::cin >> value; 
    std::cout << "This is your value: " << value; 
    if (value == 5)
    {
       std::cout << "You Win!"; 
    } else {
        std::cout << "You Lose"; 
    }
    
    return 0; 
}