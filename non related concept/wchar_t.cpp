//  wchar_t data type in C++ is used to represent wide characters, which are typically
//  used to handle internationalization and character encodings that require 
// more than one byte per character, such as UTF-16 or UTF-32. 

#include <iostream>
#include <string>

int main() {
    // wchar_t is use for wide character.
    std::wstring s1 = L"Myworld"; // L prefix indicates a wide string
    std::wstring s2 = L"myworld";

    int result = s1.compare(s2);

    if (result == 0) {
        std::wcout << L"The two strings are equal." << std::endl;
    } else if (result < 0) {
        std::wcout << L"s1 is less than s2." << std::endl;
    } else {
        std::wcout << L"s1 is greater than s2." << std::endl;
    }

    return 0;
}
