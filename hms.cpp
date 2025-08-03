#include <iostream>
#include <vector>
#include <string>
using namespace std;

// --------------------- Abstraction starts here ---------------------------
// 'person' is an abstract class — it defines a generic "interface"
// that all derived classes (like patient, doctor) must implement.
class person {
protected:
    string name;
    int id;  // Encapsulation: these are kept protected

public:
    // Pure virtual function – forces derived classes to implement their own version
    virtual void displayrole() = 0;  // --> Abstraction (interface definition)

    virtual double calculatebill() { return 0.0; }
    virtual void displaybill() = 0;

    // Encapsulation: Setter
    void setname(string n) {
        name = n;
    }

    // Encapsulation: Getter
    string getname() {
        return name;
    }
};
// --------------------- Abstraction ends here ---------------------------


// --------------------- Patient Class ---------------------------
// Inherits from abstract class 'person' --> Inheritance
// Implements abstract methods --> Polymorphism (Runtime)

class patient : public person {
    string medicalhistory;  // Encapsulation: private to class
    double treatmentcost;

public:
    patient(string n, int i, double cost) : treatmentcost(cost) {
        name = n;
        id = i;
        medicalhistory = "";
    }

    void updatemedicalhistory(string history) {
        medicalhistory += history + "\n";
    }

    void displayrole() override {  // --> Polymorphism: overriding virtual function
        cout << "Patient: " << name << ", ID: " << id << endl;
    }

    double calculatebill() override {  // --> Polymorphism
        return treatmentcost + 100;  // Flat fee added
    }

    void displaybill() override {
        cout << "Patient Bill: $" << calculatebill() << endl;
    }
};
// --------------------- End of Patient ---------------------------


// --------------------- Doctor Class ---------------------------
class doctor : public person {
private:
    string specialization;  // Encapsulation

public:
    doctor(string n, int i, string s) : specialization(s) {
        name = n;
        id = i;
    }

    void displayrole() override {  // --> Polymorphism
        cout << "Doctor: " << name << ", Specialization: " << specialization << endl;
    }

    double calculatebill() override {
        return 0.0;  // Doctors don't pay
    }

    void displaybill() override {
        cout << "Doctor does not have a bill to pay." << endl;
    }
};
// --------------------- End of Doctor ---------------------------


// --------------------- Hospital Management System ---------------------------
// Uses Aggregation – manages a list of persons (patients/doctors)

class hospitalmanagementsystem {
private:
    vector<person*> people;  // --> Polymorphism: storing base-class pointers

public:
    void addperson(person* p) {
        people.push_back(p);  // Can add any subclass object (patient/doctor)
    }

    void displayallroles() {
        for (person* p : people) {
            p->displayrole();  // --> Polymorphism: correct function called at runtime
        }
    }
};
// --------------------- End of H.M.S ---------------------------


// --------------------- Main Function ---------------------------
int main() {
    hospitalmanagementsystem hms;

    // Adding a patient — uses abstraction (only calling via interface)
    hms.addperson(new patient("Saurabh Singh", 101, 500.0));

    // Bug fix: This was mistakenly written as patient — corrected to doctor
    hms.addperson(new doctor("Dr. Smith", 201, "Cardiology"));

    hms.displayallroles();  // corrected function call

    return 0;
}

