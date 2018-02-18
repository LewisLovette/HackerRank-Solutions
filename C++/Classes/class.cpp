#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    private:
        int age;
        int standard;
        string first_name;
        string last_name;

    public:
        //setters
        void set_age(int newAge){
            age = newAge;
        }
        void set_standard(int newStandard){
            standard = newStandard;
        }
        void set_first_name(string newFName){
            first_name = newFName;
        }
        void set_last_name(string newLName){
            last_name = newLName;
        }

        //getters
        int get_age(){
            return age;
        }
        int get_standard(){
            return standard;
        }
        string get_first_name(){
            return first_name;
        }
        string get_last_name(){
            return last_name;
        }
    
    //can't return stringstream so make string class, then make sstream and then reutrn sstream.str() for string return
    string to_string(){
        stringstream toString;
        toString << age << "," << first_name << "," << last_name << "," << standard;
        return toString.str();
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
