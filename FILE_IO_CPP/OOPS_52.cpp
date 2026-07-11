#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string line, word;

    /************************************************
     * 1. Create/Open file for Writing
     ************************************************/
    ofstream outFile("Sample.txt");

    if (!outFile)
    {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    outFile << "Hello Angad" << endl;
    outFile << "Welcome to C++ File Handling" << endl;
    outFile << "Embedded Systems Engineer" << endl;

    cout << "Data written successfully." << endl;

    /************************************************
     * 2. Close the file
     ************************************************/
    outFile.close();
    cout << "File closed after writing." << endl;


    /************************************************
     * 3. Open file in Append Mode
     ************************************************/
    ofstream appendFile("Sample.txt", ios::app);

    if (!appendFile)
    {
        cout << "Error opening file for appending!" << endl;
        return 1;
    }

    appendFile << "This line is added using append mode." << endl;

    appendFile.close();
    cout << "Data appended successfully." << endl;


    /************************************************
     * 4. Open file for Reading
     ************************************************/
    ifstream inFile("Sample.txt");

    if (!inFile)
    {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    cout << "\nReading file line by line:\n" << endl;

    /************************************************
     * 5. Read entire file line by line
     ************************************************/
    while (getline(inFile, line))
    {
        cout << line << endl;
    }

    /************************************************
     * 6. Close file after reading
     ************************************************/
    inFile.close();
    cout << "\nFile closed after reading." << endl;


    /************************************************
     * 7. Read file word by word
     ************************************************/
    ifstream wordFile("Sample.txt");

    cout << "\nReading file word by word:\n" << endl;

    while (wordFile >> word)
    {
        cout << word << endl;
    }

    wordFile.close();


    /************************************************
     * 8. Open file using open() function
     ************************************************/
    fstream file;

    file.open("Sample.txt", ios::in);

    if (file.is_open())
    {
        cout << "\nFile opened successfully using open()." << endl;
        file.close();
        cout << "File closed using close()." << endl;
    }
    else
    {
        cout << "Unable to open file." << endl;
    }

    return 0;
}
