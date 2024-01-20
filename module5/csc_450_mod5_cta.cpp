#include <iostream>
#include <string>
#include <fstream>

// A class to hold the reverse method.
class ReverseTextFile {
public:
    std::string reverse(std::string fileText);
};

std::string ReverseTextFile::reverse(std::string fileText) {

    // this method takes a string as input, reverses it, and writes it to a new text file named CSC450-mod5-reverse.txt.
    
    std::reverse(fileText.begin(), fileText.end());

    std::ofstream outFile;

    outFile.open("CSC450-mod5-reverse.txt");

    outFile << fileText;

    outFile.close();

    return fileText;
}

int main()
{
    // Lines 34-37: String variables for user input, reverse strings from files, and file path location.
    std::string userMessage;
    std::string originalFilePath = "./CSC450_CT5_mod5.txt";
    std::string storeText; 
    std::string reverseText; 

    // Lines 40-42: Creating files to read and write from. 
    std::ofstream originalFile;
    std::ifstream fileIn;
    std::ofstream reverseFile;
    
    // Lines 48-55:
    // Prompt the user for a message to add to the existing text file "CSC450_CT5_mod5.txt"
    // Stores the input in a variable userMessage.
    // Writes the contents of userMessage to the specified text file.
    std::cout << "Please enter the text you want to add to the file.\n";
    std::getline(std::cin, userMessage);

    originalFile.open(originalFilePath, std::ios_base::app);

    originalFile << userMessage << std::endl;

    originalFile.close();

    // lines 59-63:
    // Open the appended file, read the contents and store in variable "StoreText"
    fileIn.open(originalFilePath);

    if (fileIn.is_open()) {
        std::getline(fileIn, storeText, '\0');
    }

    // Creating ReverseTextFile object.
    ReverseTextFile revFile;

    // Calling the reverse() function, passing the text from the file as a string argument. 
    revFile.reverse(storeText);

    // Lets the user know their message has been added to the existing file and a new file with reversed contents has been created.
    std::cout << "Your message has been added to the existing file." << std::endl;
    std::cout << "We have also reversed the contents of the file and saved them to a new file named CSC450-mod5-reverse.txt" << std::endl;
    std::cout << "Please enjoy." << std::endl;
}
