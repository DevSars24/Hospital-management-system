🩺 Hospital Management System 🩺

🌟 Overview
This Hospital Management System is a C++ project showcasing core Object-Oriented Programming (OOP) concepts like Abstraction, Encapsulation, Inheritance, Polymorphism, and Aggregation. It manages two key entities: 👨‍⚕️ Doctors and 🤒 Patients, handling their roles and billing details in a hospital setting.

✨ Key Features

🛡️ Abstraction: The person class serves as an abstract base with pure virtual functions (displayrole, displaybill), ensuring a consistent interface for all derived classes.
🔒 Encapsulation: Sensitive data like name, id, medicalhistory, and specialization are protected or private, accessible only via getters and setters.
🌳 Inheritance: patient and doctor classes inherit from the person base class.
🎭 Polymorphism: Virtual functions allow runtime selection of the correct displayrole, calculatebill, or displaybill method based on the object type.
🤝 Aggregation: The hospitalmanagementsystem class manages a collection of person objects (doctors and patients) using a vector of pointers.


📂 Project Structure

👤 person: Abstract base class defining the interface for all individuals in the system.
🤒 patient: Derived class for patients, tracking medical history and treatment costs.
👨‍⚕️ doctor: Derived class for doctors, storing specialization details.
🏥 hospitalmanagementsystem: Manages a list of people (patients and doctors) and displays their roles.
🚀 main: Program entry point, creating and managing patient and doctor instances.


🩺 How It Works

👤 Person Class: An abstract class with protected attributes (name, id) and pure virtual functions to enforce implementation in derived classes.
🤒 Patient Class: Represents a patient with medical history and treatment cost, calculating bills with an added flat fee.
👨‍⚕️ Doctor Class: Represents a doctor with a specialization. Doctors do not incur bills.
🏥 Hospital Management System: Aggregates person objects and displays their roles using polymorphic behavior.
🚀 Main Function: Initializes patient and doctor objects, adds them to the system, and displays their roles.


📜 Example Output
Running the program produces:
Patient: Saurabh Singh, ID: 101
Doctor: Dr. Smith, Specialization: Cardiology


🛠️ How to Run

Install a C++ compiler (e.g., g++ or clang++).
Save the code in a file named hospital.cpp.
Compile the code:g++ hospital.cpp -o hospital


Run the executable:./hospital




📋 Requirements

C++ Compiler: g++, clang++, or any standard-compliant compiler.
STL: Uses vector and string from the Standard Template Library.


🚀 Future Enhancements

🩺 Add functionality to update and view patient medical history.
💸 Include detailed billing for multiple treatments.
💾 Implement file I/O for saving/loading hospital data.
🖥️ Create a user interface for easier interaction.


🐛 Bug Fixes

Fixed an error in main where a doctor object was incorrectly created as a patient.
Corrected the call to displayallroles for proper role display.


📄 License
This project is licensed under the MIT License. Feel free to use, modify, and share it!

🩺 Stay healthy, code smart! 🩺
