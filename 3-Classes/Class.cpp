#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student
{
    private:
        int Age, Standard;
        string First_Name, Last_Name;
        
    public:
        /* setter and getter for age */
        void set_age(int age)
        {
            Age = age;
        }
        
        int get_age()
        {
            return Age;
        }
        
        
        /* setter and getter for standard */
        void set_standard(int standard)
        {
            Standard = standard;
        }
        
        int get_standard()
        {
            return Standard;
        }
        
        /* setter and getter for first name */
        void set_first_name(string first_name)
        {
            First_Name = first_name;
        }
        
        string get_first_name()
        {
            return First_Name;
        }
        
        
        /* setter and getter for last name */
        void set_last_name(string last_name)
        {
            Last_Name = last_name;
        }
        
        string get_last_name()
        {
            return Last_Name;
        }
        
        /* function to string */
        string to_string()
        {
            stringstream s;
            s << Age << ',' << First_Name << ',' << Last_Name << ',' << Standard;
            return s.str();
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
