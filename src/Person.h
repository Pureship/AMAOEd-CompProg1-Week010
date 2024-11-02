#include <string>

class Person {
private:
    std::string name;
    std::string address;
    char gender;
    int age;
    std::string occupation;

public:
    Person(const std::string &n, const std::string &addr, char gen, int a, const std::string &occ)
        : name(n), address(addr), gender(gen), age(a), occupation(occ) {}

    void setName(const std::string &n) { name = n; }
    void setAddress(const std::string &addr) { address = addr; }
    void setGender(char gen) { gender = gen; }
    void setAge(int a) { age = a; }
    void setOccupation(const std::string &occ) { occupation = occ; }

    std::string getName() const { return name; }
    std::string getAddress() const { return address; }
    char getGender() const { return gender; }
    int getAge() const { return age; }
    std::string getOccupation() const { return occupation; }
};