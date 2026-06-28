/*he given code shows how to open and read a textfile in C++. For the file
 library to throw exceptions, the mechanism must be activated (it is done in the given code).

Your task is to catch this exception when it occurs and write the message:

"File error: " + e.what()

Implement the try and catch block for this problem.

Note: The coderunner compiler only accepts references to exceptions in the catch parameter block.
 E.g. (const ios_base::failure& e) instead of (const ios_base::failure e).
 This is more efficient anyway, so we should use it.

Zum Beispiel:Test	Resultat
read_file_to_console("input.txt");
This is the content of the simple
text file with three
lines. File ends here.
File error: basic_ios::clear: iostream error
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int read_file_to_console(string input_file) {
    ifstream file;
    //Activate the exception mechanism in file
    //It must be activated, because it runs faster without,
    //By default it uses bit flags failbit, eofbit etc.
    //file can now throw exceptions with type ios_base::failure
    file.exceptions(+ifstream::badbit);
    try {
        file.open(input_file);
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }
        catch (const ios_base::failure &e){
            cout<<"File error: " << e.what()<<endl;
        }

// TODO The file reading might go wrong
//      better catch the potential ios_base::failure exception




        return 0;
    }

int main(){
    fstream myfile ("input.txt", ios::out);
    string s;
    getline(cin, s);
myfile<<s;
myfile.close();
    read_file_to_console("input.txt");
    return 0;

    }