#include <iostream>
#include <string>
using namespace std;

int main (int argc, char* argv[]) 
{
    string cmd(argv[argc - 1]); 
    for(auto var : cmd)
            try{cmd.replace(cmd.find('/'), 1, "\\\\");}catch(exception){}
    system(string("explorer.exe " + cmd).c_str());
    printf("\n");
    return 0;
}
