#include <iostream>
#include <cstring>
class MyString {
private:
    char* str;
public:
    MyString(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
    ~MyString() {
        delete[] str;
    }

    MyString operator+(const MyString& rhs) const {
        char* result = new char[strlen(str) + strlen(rhs.str) + 1];
        strcpy(result, str);
        strcat(result, rhs.str);
        MyString concatenatedString(result);
        delete[] result;
        return concatenatedString;
    }
    void display() const {
        std::cout << str << std::endl;
    }
};

int main() {
    MyString str1("Hello, ");
    MyString str2("world!");
    MyString result = str1 + str2;
    std::cout << "Concatenated String: ";
    result.display();
    return 0;
}

