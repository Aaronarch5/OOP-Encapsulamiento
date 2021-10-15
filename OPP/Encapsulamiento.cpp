#include <iostream>

//Constructors Rules
//1.A constructor does not return values
//2. A constructor has the same name as the class
//3. Constructors must be public
using std::string;
class Employee {
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name;
    }

    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }

    void setAge(int age) {
        Age = age;
    }
    string getAge() {
        return Age;
    }
    void IntroduceYourself()
    {
        std::cout << "Name-" << Name << std::endl;
        std::cout << "Company-" << Company << std::endl;
        std::cout << "Age-" << Age << std::endl;
    }
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};
int main()
{
    /*
    Employee employee1 = Employee("Saldina", "Yt-Codebeauty", 25);
    employee1.IntroduceYourself();

    Employee employee2 = Employee("John", "Amazon", 35);
    employee2.IntroduceYourself();
    */

    Employee employee1.setAge(39);
    Employee employee1.setName("John");

    std::cout << employee1.getName() << " is " << employee1.getAge() << " year old" << std::endl;
}