//maybe to integrate everything with driver file we each just create a class with a method that does 
//does that persons section of the story and just call those methods in main

#include <iostream>
#include <string>
#include <fstream>
using namespace std;


void readFile(string fileName)
{
    string output;
    fstream file(fileName);
    while(getline(file, output))
    {
        cout << output << endl;
    }
}

int main()
{
    //create instances of classes

    //first section
    readFile("Story1.txt");
    cout << "And then you wake up from your dream" << endl;
    //SecondPersonsClass.printStory()
}