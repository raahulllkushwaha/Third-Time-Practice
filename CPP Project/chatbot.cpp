#include <iostream>
#include <cstring>
#include <process.h>
using namespace std;

int main()
{
    char input[100];
    cout << "\t \t \t \t ChatBOT " << endl
         << endl;
    while (1)
    {
        gets(input);
        if (strcmp(input, "Hii") == 0)
        {
            cout << endl
                 << "\t \t"
                 << "Hi Sir/Madam, \n \t \t I'm ChatBOT " << endl;
        }
        else if (strcmp(input, "What can you do") == 0)
        {
            cout << endl
                 << "\t \t I'll do everything for you \t " << endl;
        }
        else if (strcmp(input, "Who is your creator") == 0)
        {
            cout << "\t \t Rahul Kushwaha, he's program me. \t" << endl;
        }
        else if (strcmp(input, "exit") == 0)
        {
            exit(0);
        }
        else
        {
            cout << "I didn't understand " << endl;
        }
    } 
    return 0;
}