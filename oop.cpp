#include <iostream>
#include <string>

using namespace std;

class AbstractEmployee {
    virtual void AskforPromotion() = 0;
};

class Employee : AbstractEmployee {
private: 
    string company;
    int age;

protected:
    string name;

public:
    Employee(string _name, string _company, int _age) {
        name = _name;
        company = _company;
        age = _age;
    }
    
    void setName(string _name) {name = _name;}
    void setCompany(string _company) {company = _company;}
    void setAge(int _age) {age = _age;}

    string getName() {return name;}
    string getCompany() {return company;}
    int getAge() {return age;}

    void IntrodueYourself() {
        cout << "Name - " << name << ". Company - " << company << " . Age - " << age << endl;
    }

    void AskforPromotion() override {
        if (age > 30) {
            cout << name << " got promoted!" << endl;
        } else {
            cout << name << " didn't get promoted!" << endl;
        }
    }

    virtual void Work() {
        cout << name << " checking email,..." << endl;
    }
};


class Developer : public Employee {
public:
    string FavProgrammingLanguage;
    
    Developer(string _name, string _company, int _age, string _FavProgrammingLanguage) : Employee(_name, _company, _age){
        FavProgrammingLanguage = _FavProgrammingLanguage;
    }

    void FixBug() {
        cout << name << " fixed bug using " << FavProgrammingLanguage << endl;
    }

    void Work() override {
        cout << name << " is writing " << FavProgrammingLanguage  << " code."<< endl;
    }
};

class Teacher : public Employee {
public:
    string Subject;

    Teacher(string _name, string _company, int _age, string _Subject) : Employee(_name, _company, _age) {
        Subject = _Subject;
    }

    void PrepareLesson() {
        cout << name << " is preparing " << Subject << " lesson" << endl;
    }

    void Work() override {
        cout << name << " is teaching " << Subject  << " lesson."<< endl;
    }
};

int main() {

    Developer dev1("Khoa", "MS", 23, "C++");

    Teacher t("Binh", "TDM", 50, "Biology");

    Employee *e1 = &dev1;
    Employee *e2 = &t;

    e1->Work();
    e2->Work();

    

    return 0;
}
