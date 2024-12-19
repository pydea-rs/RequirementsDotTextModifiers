#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    ifstream input;
    ofstream output;
    
    input.open("./requirements.txt");
    if(!input.is_open())
        cout << "Can not open input file!" << endl;

    output.open("./req.txt");
    if(!output.is_open())
        cout << "Can not prepare output file to write!" << endl;

    string line;
    while(getline(input, line)) {
        string module;
        if((line[0] >= 'a' && line[0] <= 'z') || (line[0] >= 'A' && line[0] <= 'Z'))
        {
            stringstream lineStream(line);
            lineStream >> module;
            if(module[module.length() - 1] == ';')
            {

                module[module.length() - 1] = '\n';
                output << module;
            }
            else
                output << module << endl;
        }
    }

    input.close();
    output.close();
}