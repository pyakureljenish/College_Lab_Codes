/*Overload the comparison operator i.e < , <=

#include<iostream>
using namespace std;
class Test{
    private:
    int score;
    public:
    Test(int s){
        score=s;
    }

    int operator < (Test t){
        if(score <t.score)
        return 1;

        else
        return 0;
    }


    int operator <= (Test t){
        if(score <=t.score)
        return 1;

        else
        return 0;
    }
};

int main(){

    Test t1(25),t2(26);
    if(t1<t2){
        cout<<"t1 is less than t2"<<endl;
    }

    else if(t1<=t2){
         cout<<"t1 is less than or equal to t2"<<endl;

    }

    else{
        cout<<"t1 is not less than or equal to t2";
    }

    return 0;
}*/


/*overload > and >=

#include<iostream>
using namespace std;
class age{
    private:
    int age_no;
    public:
age(){}

    age(int a){
        age_no=a;
    }

    int operator >(age aa){

        if(age_no> aa.age_no)
            return 1;
        
        else
            return 0;
        

    }

     int operator >=(age aa){

        if(age_no>= aa.age_no)
            return 1;
        
        else
            return 0;
        }


};
int main(){
    age a1(21),a2(23);

    if(a1>a2){
        cout<<"a1 is greater than a2"<<endl;
    }

    else if(a1>=a2){
        cout<<"a1 is greater than or equal to a2"<<endl;
    }

    else{
        cout<<"a1 is less than to a2"<<endl;
    }

    return 0;
}*/

//overload = operator

#include<iostream>
using namespace std;
class age{
    private:
    int age_no;
    public:
age(){}

    age(int a){
        age_no=a;
    }

    int operator =(age aa){

        if(age_no=aa.age_no)
            return 1;
        
        else
            return 0;
        

    }

     

};
int main(){
    age a1(21),a2(21);

    if(a1=a2){
        cout<<"yes equal"<<endl;
    }

   

    else{
        cout<<"not equal"<<endl;
    }

    return 0;
}