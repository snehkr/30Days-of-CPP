#include <iostream>

using namespace std;

class Employee
{
private:
  string name;
  string company;
  int age;

public:
  void setName(string Name)
  {
    name = Name;
  }
  string getName()
  {
    return name;
  }

  void setCompany(string Company)
  {
    company = Company;
  }
  string getCompany()
  {
    return company;
  }

  void setAge(int Age)
  {
    if (Age >= 18)
    {
      age = Age;
    }
  }
  int getAge()
  {
    return age;
  }

  void IntroduceYourself()
  {
    cout << "Name - " << name << endl;
    cout << "Company - " << company << endl;
    cout << "Age - " << age << endl;
  }

  Employee(string Name, string Company, int Age)
  {
    name = Name;
    company = Company;
    age = Age;
  }
};

int main()
{
  Employee employee1 = Employee("Sahil", "Google", 28);
  employee1.IntroduceYourself();

  Employee employee2 = Employee("Simran", "Amazon", 25);
  employee2.IntroduceYourself();

  employee2.setAge(15);
  cout << employee2.getName() << " is " << employee2.getAge() << " years old" << endl;

  return 0;
}
