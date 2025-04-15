#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string FirstString;
    cout << "Enter your first string: ";
    cin >> FirstString;
    cout << endl;

    // Below mentioned functions can be used on strings directly without the help of string library (#include<string.h>).
    cout << "1.  Length of the first string is: " << FirstString.size() << endl << endl; // The size() function returns the size of the string.
    cout << "2.  Length of the first string is: " << FirstString.length() << endl << endl;  // The length() function returns the size of the string.

    cout << "---------------------------------------------------------------" << endl << endl;

    char SecondString[50], ThirdString[50];
    cout << "Enter your second string: ";
    cin >> SecondString;
    cout << "Enter your Third string: ";
    cin >> ThirdString;
    cout << endl;

    // Below mentioned functions cannot be used on strings directly. You must use char array for it and must include the string library (#include<string.h>).
    cout << "1.  Length of the second string is: " << strlen(SecondString) << endl << endl;  // The strlen() function returns the size of the string.
    cout << "2.  The memory second string occupying is: " << sizeof(SecondString) << endl << endl; // The sizeof() function returns the total memory of the string in bytes.

    if(strcmp(SecondString, ThirdString) == 0) // The strcmp() function returns 0 if the two strings are equal.
    {
        cout << "3.  The second string and the third string are equal" << endl << endl;
    }
    else
    {
        cout << "3.  The second string and the third string are not equal" << endl << endl;
    }

    if(strncmp(SecondString, ThirdString, 2) == 0) // The strncmp() function returns 0 if the two strings are equal but it will match the two strings for first 2 characters only.
    {
        cout << "4.  The first two characters of the second string and the third string are equal" << endl << endl;
    }
    else
    {
        cout << "4.  The first two characters of the second string and the third string are not equal" << endl << endl;
    }

    cout << "5.  After concatenating the second and third string, the new second string value is: " << strcat(SecondString, ThirdString) << endl << endl; // The strcat() function returns the merged output of the two strings.

    cout << "6.  After concatenating first 2 characters of the third string with the new second string, the new second string value is: " << strncat(SecondString, ThirdString, 2) << endl << endl; // The strncat() function returns the merged output of the two strings but the third string's first 2 characters will be merged only.

    cout << "7.  After copying the third string value into the new second string, the new second string value is: " << strcpy(SecondString, ThirdString) << endl << endl; // The strcpy() function copies the value of the third string into the new second string and then returns it.

    cout << "8.  After copying first 3 characters of the third string value into the new second string, the new second string value is: " << strncpy(SecondString, ThirdString, 3) << endl << endl; // The strncpy() function copies the first 3 characters the third string into the new second string and then returns it.
}
