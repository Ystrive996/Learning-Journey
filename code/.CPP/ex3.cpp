// #define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main()
{

    // char sentence[] = " This is a sentence with 7 tokens";
    // char sentence[] = {"+86-(025) 52093"};
    // char *tokenPtr;
    // tokenPtr = strtok(sentence, "+-() ");

    // while (tokenPtr != NULL)
    // {
    //     cout << tokenPtr << '\n';
    //     tokenPtr = strtok(NULL, " ");
    // }
    // cout << "\nAter strtok,sentence = " << sentence << endl;
    char pnum[50];
    cout << "Enter a phone number in the form (555) 555-5555:" << endl;
    cin >> pnum;

    char *areacode = strtok(pnum, "()");
    int areacodeint = atoi(areacode);

    char *fnum = strtok(NULL, "-");
    char *lnum = strtok(NULL, "");
    char *fullnum = strcat(fnum, lnum);
    long phone = atoi(fullnum);

    cout << "\nThe area code is " << setfill('0') << setw(3) << areacodeint;
    cout << "\nThe phone number is " << phone << endl;
}