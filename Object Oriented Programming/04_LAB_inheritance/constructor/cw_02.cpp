/*Define a class HealthWorker with data members name, age and exp(experience in years). Define
class Doctor with data members NMC_no, specialization(eg. Surgeon, Physician) derived from
class HealthWorker. Define another class Nurse with no data members derived from class
HealthWorker. Define necessary constructor and member functions to display details of two
doctors and two nurses*/

#include<iostream>
using namespace std;
class HealthWorker{
    string name;
    int age,ex;
    
    public:
    HealthWorker(string n,int a,int e){
        name=n;
        age=a;
        ex=e;
    }
    
    void showHealthWorker(){
        cout<<"Name="<<name<<endl;
        cout<<"Age="<<age<<endl;
        cout<<"Experience Year="<<ex<<endl;
    }
    
};

class Doctor:public HealthWorker {
    string specialization;
    int NMC_no;
    
    public:
    
    Doctor(string n,int a,int ex,string s,int nm):HealthWorker(n,a,ex){
        specialization=s;
        NMC_no=nm;
    }
    
    void showDoctor(){
        cout<<"Specialization="<<specialization<<endl;
        cout<<"NMC number="<< NMC_no<<endl;
    }
};

class Nurse:public HealthWorker{
    public:
    Nurse(string n,int a,int ex):HealthWorker(n,a,ex){
        
    }
    
};





int main() {
    Doctor d1("Sant K Yadav",30,3,"General Surgery",00000214);
    d1. showHealthWorker();
    
    Doctor d2("Bikas Nepal",36,12,"Internal Medicine",14566464);
        d2. showHealthWorker();
    Nurse n1("Sangita Rai",28,5);
        n1. showHealthWorker();
    Nurse n2("Pralad khadka",20,0);
    n2. showHealthWorker();
  

    return 0;
}