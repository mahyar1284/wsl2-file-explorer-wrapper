#include <iostream>
#include <string>

int main (int argc, char* argv[]) 
{
    std::string cmd(argv[argc - 1]); 
    for(int n = 0; n < cmd.length(); n++)
        if(cmd.at(n) == '/')
            cmd.replace(n, 1, "\\\\");
    system(std::string("explorer.exe " + cmd).c_str());
    printf("\n");
    return 0;
}
