#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv){
    fstream fs ("fred.txt", ios::in | ios::out);

    string line;
    int q = 1;

    vector<string> page;
    vector<vector<string>> list;

    while(getline(fs, line)){
        page.push_back(line);
    }

    int action = 0;
    
    for(int i = 0; i < page.size(); i++){
        
    }



    fs.close();
    return 0;
}