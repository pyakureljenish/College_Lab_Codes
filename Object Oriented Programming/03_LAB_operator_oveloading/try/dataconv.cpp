/*This is the program to demonstrate the basic type to class type

#include<iostream>
using namespace std;
class Time{
    int hour;
    int mins;

    public:
    Time(){
        hour=0;
        mins=0;
    }

    //Now we make the constructor which converts the type int to Time;

    Time(int number){
        hour=number/60;
        mins=number %60;
    }

    void display(){
        cout<<"Time="<<hour  <<":"<< mins <<endl;
    }

};
int main(){
    Time t;
    //Here we have alloted the required time here
    //int d=100;

    //Here conversion of the int type to class type is done with the help of object
    //t=d;
    t=100;

    cout<<"Required Time conversion:"<<endl;
    t.display();


    return 0;
}*/

/*This is the program to convert the class type to the basic type here the constructor donot wor6+k

#include<iostream>
using namespace std;
class Time{
    int hours,minutes;
    public:
    Time(){}

     Time(int h,int m){
        hours=h;
        minutes=m;
     }

     //now declare the casting operator function 

     operator int();

     ~Time(){
        cout<<"The object has been destroyed"<<endl;
     }

     void show(){
        cout<<hours<<":"<<minutes<<endl;
     }


};

Time::operator int(){
    return(hours*60+minutes);
}

int main(){
    Time t(2,30);
    cout<<"Before conversion"<<endl;
    t.show();


    //calling the casting operator
    int d=t;

    cout<<"After Conversion"<<endl;
    cout<<d<<endl;

    return 0;
}*/


/*This is the program to demostrate from the one class type to another class type

 #include<iostream>
using namespace std;

//DESTINATION CLASS
class stock2{
    int code;
    float value;
    public:
    stock2(){
        code=0; value=0;
    }

    stock2(int c,float v){
        code=c;
        value=v;
    }

    void display(){
        cout<<"Stock code="<<code<<endl;
        cout<<"Total Stock value Rs.="<<value<<endl;
    }

};

/*SOURCE CLASS
class stock1{
    int code,count;
    float price;

    public:
    stock1(int c,int i,float p){
        code=c;
        count=i;
        price=p;
    }

    void display(){
        cout<<"Stock code="<<code<<endl;
        cout<<"Stock count="<<count<<endl;
        cout<<"Price per stock rs.="<<price<<endl;            
        }

        operator stock2(){
            int stock2code=code;
            float stock2value=count*price;
            stock2 s2(stock2code,stock2value);
            return s2;
        }

};



int main(){
    stock1 s1(888,100,150.0);
    stock2 s2;

    s2=s1;//s2=s1.operator stock2();

    cout<<"Stock details of stock-1"<<endl;
    s1.display();

    cout<<"Stock details of stock-2"<<endl;
    s2.display();

 return 0;
}*/


/*WAP to convert an integer number into class type. Define a class 
Currency with data members rupee and paisa. Convert a number 
into currency.[rupee =n/100, paisa=n%100, Use Test data n >100

#include<iostream>
using namespace std;
class currency{
    int rupee,paisa;
    public:
    currency(){
        rupee=0;
        paisa=0;

    }

    currency(int n){
        rupee=n/100;
        paisa=n%100;

    }

    void show(){
        cout<<rupee<<"and"<<paisa<<endl;

    }


};
int main(){
    currency c;
    int cc=150;//This here is the value of a paisa
    c=cc;

    c.show();
    return 0;
}*/



/*Define a class Distance with data members kilometer(km) and 
meter(m). WAP to convert class Distance into basic type- integer 
number.


#include<iostream>
using namespace std;

class Distance{
    int km;
    int meter;

    public:

    Distance(){
        km=0;
        meter=0;
    }
    
    Distance(int k,int m){
        km=k;
        meter=m;
    }

    operator int();
    
    void show(){
        cout<<km<<","<<meter<<endl;
    }



};

Distance::operator int(){
    return (km*1000+meter);
}


int main(){
    Distance d(1,50);
    cout<<"Before converrsion"<<endl;
    d.show();

    int dd=d;

    cout<<"After conversion"<<endl;
    cout<<dd;


    return 0;
} * /


/*Define a class Exam with data members student_name, 
sub1_marks,sub2_marks,sub3_marks. Define another class Result 
with data members student_name, total_marks and avg_marks. 
Write a conversion function to convert class Exam into class Result. 
Use both casting operator and constructor concept one by one

#include<iostream>
using namespace std;

//DESTINATION CLASS


class Result{
  string student_name;
  int total_marks;
  int avg_marks;


  public:
  Result(){
    total_marks=0;
    avg_marks=0;
  }

  Result(int t,int a){
    total_marks=t;
    avg_marks=a;
  }

  void showResult(){
    cout<<"Total Marks"<<total_marks<<endl;
    cout<<"Average Marks="<<avg_marks<<endl;
  }


/*Result(int sub1, int sub2, int sub3){
    
    student_name="Jenish Pyakurel";
    total_marks=sub1+sub2+sub3;
    avg_marks=total_marks/3;
}


};



//SOURCE CLASS

class Exam{
   string  student_name;
int sub1_marks,sub2_marks,sub3_marks;

public:
Exam(){}

Exam(string s,int s1,int s2,int s3){
    student_name=s;
    sub1_marks=s1;
    sub2_marks=s2;
    sub3_marks=s3;
}

operator Result(){
    int total_marks=sub1_marks+sub2_marks+sub3_marks;
    float avg_marks=(total_marks)/3;

    Result r(total_marks,avg_marks);
    return r;
}

};

int main(){

Exam e("JenishPkl",90,95,99);
Result r;
r=e;

r.showResult();
    
    return 0;
}
*/