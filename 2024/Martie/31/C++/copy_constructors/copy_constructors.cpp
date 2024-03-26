// Copy constructors
// You are tasked with creating a simple employee database program using object-oriented programming principles in C++. 
// Your program should include a class representing an employee and a class representing the database of employees. 
// The database class should have a copy constructor to handle copying of employee data between database objects.

#include <iostream>
#include <vector>

using namespace std;

// Individual employee
class Employee {
public:
    string name;
    double salary;

    Employee(const string& name, double salary) : name(name), salary(salary) {}
};

// Collection of employees
class Database {
private:
    vector<Employee> employees;

public:
    // Default constructor
    Database() {}

    // Copy constructor
    Database(const Database& other) : employees(other.employees) {}

    // Add an employee to the database
    void addEmployee(const Employee& employee) {
        employees.push_back(employee);
    }

    // Display all employees in the database
    void displayAllEmployees() const {
        for (const Employee& employee : employees) {
            cout << "Name: " << employee.name << ", Salary: $" << employee.salary << endl;
        }
    }
};

int main() {
    Database originalDB;
    originalDB.addEmployee(Employee("Alice", 50000));
    originalDB.addEmployee(Employee("Bob", 60000));

    cout << "Original Database:\n";
    originalDB.displayAllEmployees();

    // Copy constructor is used here
    Database copiedDB = originalDB;

    cout << "\nCopied Database:\n";
    copiedDB.displayAllEmployees();

    return 0;
}