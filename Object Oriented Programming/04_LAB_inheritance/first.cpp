//wap to display and show the use of the inheritance
#include<iostream>
using namespace std;
class facebook{
    string message;

    public:
    void display(){
        message="Hi";

        cout<<"The message from facebook is:"<<message<<endl;
    }

};

class social_media :public facebook{ //the declaration of the inheritance

string type;

public:
void showdata(){
    type="tiktok";
cout<<"Another type is "<<type<<endl;
}
};

int main(){
    social_media s;
    s.display();
    s.showdata();

    return 0;
}