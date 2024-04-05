#include <iostream>
#include <cstring>

using namespace std;

int main() {
    // Declaration of variables and arrays
    char str1[30] = "Hello, ";
    char str2[] = "World!";
    char str3[20];

    // memchr(): Finds the first occurrence of a character in a memory block.
    char* foundChar = (char*)memchr(str1, 'o', strlen(str1));
    if (foundChar != nullptr) {
        cout << "Found character 'o' at position: " << (foundChar - str1) << endl;
    } else {
        cout << "Character 'o' not found in string." << endl;
    }

    // memcmp(): Compares two memory blocks.
    int comparisonResult = memcmp(str1, str2, strlen(str1));
    if (comparisonResult == 0) {
        cout << "Memory blocks are equal." << endl;
    } else if (comparisonResult < 0) {
        cout << "Memory block of str1 is less than str2." << endl;
    } else {
        cout << "Memory block of str1 is greater than str2." << endl;
    }

    // memcpy(): Copies memory from one location to another.
    memcpy(str3, str1, strlen(str1) + 1);
    cout << "Copied string: " << str3 << endl;

    // memmove(): Copies memory from one location to another, handling overlap.
    char str4[20];
    memmove(str4, str1, strlen(str1) + 1);
    cout << "Copied string using memmove: " << str4 << endl;

    // strcat(): Concatenates two strings.
    strcat(str1, str2);
    cout << "Concatenated string: " << str1 << endl;

    // strncat(): Concatenates a specified number of characters from one string to another.
    char str5[20] = "Hello, ";
    strncat(str5, str2, 3);
    cout << "Concatenated string with strncat: " << str5 << endl;

    // strrchr(): Finds the last occurrence of a character in a string.
    char* lastChar = strrchr(str1, 'o');
    if (lastChar != nullptr) {
        cout << "Last occurrence of 'o' at position: " << (lastChar - str1) << endl;
    } else {
        cout << "Character 'o' not found in string." << endl;
    }

    // strncmp(): Compares a specified number of characters of two strings.
    int strncmpResult = strncmp("hello", "world", 3);
    if (strncmpResult == 0) {
        cout << "Strings are equal in first 3 characters." << endl;
    } else {
        cout << "Strings are not equal in first 3 characters." << endl;
    }

    // strtok(): Splits a string into tokens.
    char str6[] = "apple banana cherry";
    char* token = strtok(str6, " ");
    while (token != nullptr) {
        cout << "Token: " << token << endl;
        token = strtok(nullptr, ",");
    }

    return 0;
}