#include <iostream>
#include <string>
#include <fstream>

int main()
{
    std::string userMessage;
    std::string filePath = "./CSC450_CT5_mod5.txt";
    std::ofstream outFile;

    std::cout << "Please enter the text you want to add to the file.\n";
    std::getline(std::cin, userMessage);

    outFile.open(filePath, std::ios_base::app);

    outFile << userMessage << std::endl;

    outFile.close();

    std::cout << "String appended successfully." << std::endl;
}
