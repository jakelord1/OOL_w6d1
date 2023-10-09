#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    Person() = default;
    Person(string n, int a) { name = n; age = a; }
    void Show() { cout << "Name: " << name << "\tAge: " << age << endl; }
    void Input() {
        string n = " ";
        int a = 0;
        cin >> n;
        cin >> a;
        name = n;
        age = a;
    }
};
class Univer {
protected:
    string name;
    string addres;
public:
    Univer() = default;
    Univer(string n, string a) { name = n; addres = a; }
    void Show() { cout << "Name: " << name << "\tAddres: " << addres << endl; }
    void Input() {
        string n = " ", a = " ";
        cin >> n;
        cin >> a;
        name = n;
        addres = a;
    }
};
class Student : public Person, public Univer {
public:
    Student() = default;
    Student(string pn, int pa, string un, string ua) : Person(pn, pa), Univer(un, ua) {}
    void Show() {
        Person::Show();
        Univer::Show();
    }
    void Input() {
        string n = " ";
        int a = 0;
        cin >> n;
        cin >> a;
        Person::name = n;
        age = a;

        string n = " ", a = " ";
        cin >> n;
        cin >> a;
        Univer::name = n;
        addres = a;
    }
};
int main()
{
    Student student("Adel", 20, "Itstep", "Some addres");
    student.Person::Show();
    student.Univer::Show();
    student.Show();
}