#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;
    std::string country;

public:
    void setValues(const std::string& newName, int newAge, const std::string& newCountry) {
        name = newName;
        age = newAge;
        country = newCountry;
    }
    std::string getName() const {
        return name;
    }
    int getAge() const {
        return age;
    }
    std::string getCountry() const {
        return country;
    }
};

int main() {
    Person person1;
    person1.setValues("John Doe", 25, "USA");
    std::cout << "Name: " << person1.getName() << std::endl;
    std::cout << "Age: " << person1.getAge() << std::endl;
    std::cout << "Country: " << person1.getCountry() << std::endl;
    return 0;
}

