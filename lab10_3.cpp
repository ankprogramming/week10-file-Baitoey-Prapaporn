#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    int cmd;
    string name;
    string line;
    ofstream writefile;
    ifstream readfile;

    do {
        cout<<"MENU"<<endl;
        cout<<"1.Add Student."<<endl;
        cout<<"2.List Student."<<endl;
        cout<<"3.Quit."<<endl;
        cout<<"Please Enter Menu"<<endl;
        cin>>cmd;

        if (cmd == 1){
            cout <<"Enter Student Name : ";
            cin>>name;
            writefile.open("std.txt",fstream::app);

            if (writefile.is_open()){
                writefile<<name<<endl;
                writefile.close();
            }else {
                    cout<<"Unable to open file";
            }
        }else if (cmd==2){
                    readfile.open("std.txt");
                    if (readfile.is_open()){
                        while(getline(readfile,line)){
                            cout<<line<<endl;
                        }
                        readfile.close();
                    }
        }else{
        break;
        }
    }while(1);
    return 0;

}
