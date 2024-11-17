#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){

    string fileName;
    cout << "Enter file name (begin with ../ on CLion):" << endl;
    cin >> fileName;

    ifstream file;
    file.open(fileName);

    if(file.is_open()){
        vector<string> lines;
        string line;
        while(getline(file, line)){
            lines.push_back(line);
        }
        if(lines.size() % 2 != 0){
            cout << lines.at(lines.size()/2) << endl;
        }else{
            cout << "The median of the dataset is " << (stod(lines.at((lines.size()-1)/2)) + stod(lines.at(((lines.size()-1)/2)+1)))/2 << "." << endl;
        }
    }else{
        cout << "Invalid file." << endl;
    }

    return 0;
}