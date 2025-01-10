#include<iostream>
using namespace std;
class myself{
    string name,college_name,department,semester;
   

    public:

    void getme(string name,string college_name,string semester){
       /*name=my_name;
       college=my_college;*/


        name="Jenish";
        college_name="CAB-T";
        semester="Second";
    }

    void showme(){
        cout<<"Name="<<name<<endl;
        cout<<"College Name="<<college_name<<endl;
        cout<<"Semester"<<semester<<endl;
}

};

int main(){

myself me;
cout<<"My first ooop program is"<<endl;
me.getme("Prasanga","CABT","Second");
me.showme();


    return 0;
}