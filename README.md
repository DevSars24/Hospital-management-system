Hospital Management System
Overview
This project is a simple Hospital Management System implemented in C++ to demonstrate key Object-Oriented Programming (OOP) concepts such as Abstraction, Encapsulation, Inheritance, Polymorphism, and Aggregation. The system manages two types of entities: Patients and Doctors, with functionality to track their roles and billing information.
Features

Abstraction: The person class is an abstract base class with pure virtual functions (displayrole and displaybill) to enforce a common interface for derived classes.
Encapsulation: Private/protected members (e.g., name, id, medicalhistory, specialization) ensure data hiding and controlled access via getters and setters.
Inheritance: The patient and doctor classes inherit from the person class.
Polymorphism: Virtual functions (displayrole, calculatebill, displaybill) allow runtime binding to the appropriate derived class method.
Aggregation: The hospitalmanagementsystem class manages a collection of person objects (patients and doctors) using a vector of base-class pointers.

Project Structure

person: Abstract base class defining the interface for all people (patients and doctors).
patient: Derived class representing a patient with attributes like medical history and treatment cost.
doctor: Derived class representing a doctor with attributes like specialization.
hospitalmanagementsystem: Manages a list of people (patients and doctors) and provides functionality to display their roles.
main: Entry point of the program, demonstrating the creation and management of patients and doctors.

How It Works

Person Class: An abstract class with protected attributes (name, id) and pure virtual functions to enforce implementation in derived classes.
Patient Class: Represents a patient with a medical history and treatment cost. It calculates a bill with an additional flat fee.
Doctor Class: Represents a doctor with a specialization. Doctors do not have bills.
Hospital Management System: Aggregates person objects (patients or doctors) and displays their roles using polymorphic behavior.
Main Function: Creates instances of patient and doctor, adds them to the hospital management system, and displays their roles.

Example Output
When you run the program, it will output:
Patient: Saurabh Singh, ID: 101
Doctor: Dr. Smith, Specialization: Cardiology

How to Run

Ensure you have a C++ compiler installed (e.g., g++).
Save the code in a file named hospital.cpp.
Compile the code:g++ hospital.cpp -o hospital


Run the executable:./hospital



Requirements

C++ compiler (e.g., g++, clang++)
Standard Template Library (STL) for vector and string

Future Enhancements

Add functionality to update and display patient medical history.
Implement billing details for multiple treatments.
Add file I/O to save/load hospital data.
Introduce a user interface for easier interaction.

Bug Fixes

Corrected an issue in the main function where a doctor object was mistakenly created as a patient.
Fixed the function call to displayallroles for proper role display.

License
This project is licensed under the MIT License. Feel free to use and modify it as needed.
