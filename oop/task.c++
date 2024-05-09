#include <iostream>
using namespace std;

class Person
{
    protected:
        int age;
        string name;
};

class Employee : public Person
{
    protected:
        int empId;
        double salary;
};

class Manager : public Employee
{
    protected:
        string type;
};

class ITManager : public Manager
{
    private:
        int noOfPersons;
    public:
        ITManager(int a, string n, int e, double s, string t, int no)
        {
            age = a;
            name = n;
            empId = e;
            salary = s;
            type = t;
            noOfPersons = no;
        }

        void Display() const
        {
            cout << "Age: " << age << endl;
            cout << "Name: " << name << endl;
            cout << "Employee ID: " << empId << endl;
            cout << "Salary: " << salary << endl;
            cout << "Type: " << type << endl;
            cout << "Number of Persons: " << noOfPersons << endl;
        }
};

int main()
{
    int age = 25, empId = 1234, noOfPersons = 10;
    double salary = 50000.0;
    string name = "John Doe", type = "IT Manager";

    ITManager obj(age, name, empId, salary, type, noOfPersons);
    obj.Display();

    return 0;
}
