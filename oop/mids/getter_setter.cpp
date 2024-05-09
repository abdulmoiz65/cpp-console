#include <iostream>
using namespace std;

class Details {
private:
    string name;
    int age;

public:
	
    void set_name(string user_name) {
        name = user_name;
    }

    void set_age(int user_age) {
        age = user_age;
    }

    string get_name() {
        return name;
    }
    int get_age() {
        return age;
    }
};

int main() {
    Details School;
    School.set_name("Huzaifa");
    School.set_age(19);
    cout << "Your Name is: " << School.get_name() << endl;
    cout << "Your Age is: " << School.get_age();

}