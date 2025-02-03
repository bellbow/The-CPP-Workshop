// Activity 3: SignUp Application.
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

struct Record {
      std::string name;
      int age;
};
std::vector<Record> records;

Record FetchRecord(int UserID) {
   return records.at(UserID);
};

void AddRecord(std::string newName, int newAge) {
   Record newRecord;
   newRecord.age = newAge;
   newRecord.name = newName;
   records.push_back(newRecord);
   std::cout << "\nNew User Added Correctly.\n\n";
};

int main() {
   bool bIsRunning = true;
   while (bIsRunning) {
      std::cout << "User Sign Up Application\n";

      std::cout << "Please select an Option:\n";
      std::cout << "1. Add Record\n";
      std::cout << "2. Fetch Record\n";
      std::cout << "3. Exit\n";

      std::string input;
      std::getline(std::cin, input);
      std::cout << "\n";
      switch (std::stoi(input))
         {
         case 1:
            {
            int age = 0;
            std::string name = "";
            std::cout << "Add User Name and Age: \n";
            std::cout << "Name: ";
            getline(std::cin, name);
            std::cout << "Age: ";
            getline(std::cin, input);
            age = std::stoi(input);
            AddRecord(name, age);
            }
            break;

         case 2:
            {
            std::cout << "Fetch User Information: \n";
            std::cout << "User ID: ";
            getline(std::cin,input);
            Record record;
            try {
               record = FetchRecord(std::stoi(input));
            }
            catch (const std::out_of_range& oor) {
               std::cout << "Invalid User ID\n";
            }
            std::cout << "User Name: " << record.name << std::endl;
            std::cout << "User Age: " << record.age << std::endl;
            std::cout << "\n\n";
            }
            break;
         
         case 3:
            {bIsRunning = false;}
            break;

         default:
            {std::cout << "Invalid input.\n";}
            break;
      }
   }
}