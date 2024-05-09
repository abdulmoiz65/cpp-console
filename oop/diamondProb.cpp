// diamond problem

#include <iostream>
using namespace std;

class employee{
    protected:
    string name;
    string code;
};
class manager :virtual public employee{
    protected:
    int no_team;
};
class consultant : virtual public employee{
    protected:
    int yrOfexp;
};
class const_manager :public manager,consultant{
    public:
    const_manager(string uname , string ucode , int uexp , int uteam){
        name = uname;
        code = ucode;
        yrOfexp = uexp;
        no_team = uteam; 
    }
    void display(){
        cout<<"Name "<<name<<endl;
        cout<<"Code "<<code<<endl;
        cout<<"Year of experience "<<yrOfexp<<endl;
        cout<<"Number of teams "<<no_team<<endl;
    }
};
int main(){

    const_manager obj("moiz","sp23",5,3);
    obj.display();


    return 0;
}