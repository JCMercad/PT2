#include<iostream>
#include <fstream>
using namespace std;

int main()
{
        int marks[7], i, name;
        float sum=0,avg;
        ifstream fin;
        ofstream fout;
        fin.open("PT4.txt", ios :: app);
        fout.open("PT4.txt", ios :: app);

        cout<<"\n Enter Marks of Student \n";
        fout<<"\n Enter Marks of Student \n";
        cout<<"--------------------------------------------";
        fout<<"--------------------------------------------";
        cout<<"\n Chemistry : ";
        fout<<"\n Chemistry : ";
        cin>>marks[0];
        fin>>marks[0];
        cout<<"\n English Language arts : ";
        fout<<"\n English Language arts : ";
        cin>>marks[1];
        fin>>marks[1];
        cout<<"\n Calculus : ";
        fout<<"\n Calculus : ";
        cin>>marks[2];
        fin>>marks[2];
        cout<<"\n Biology : ";
        fout<<"\n Biology : ";
        cin>>marks[3];
        fin>>marks[3];
        cout<<"\n Computer Science : ";
        fout<<"\n Computer Science : ";
        cin>>marks[4];
        fin>>marks[4];
        cout<<"\n Economics : ";
        fout<<"\n Economics : ";
        cin>>marks[5];
        fin>>marks[5];
        cout<<"\n Communications : ";
        fout<<"\n Communications : "<< endl;
        cin>>marks[6];
        fin>>marks[6];

        for(i=0;i<7;i++)
        {
                sum=sum+marks[i];
        }
        cout<<"-------------------------------------------";
        fout<<"-------------------------------------------";
        cout<<"\n Total Score of Student = "<<sum;
        fout<<"\n Total Score of Student = "<<sum;
        avg=sum/7;
        cout<<"\n Average = "<<avg;
        fout<<"\n Average = "<<avg;
        cout<<"\n Grade   = ";
        fout<<"\n Grade   = ";

        if(avg>80)
        {
                cout<<"A";
        }
        else if(avg>60 && avg<=80)
        {
                cout<<"B";
        }
        else if(avg>40 && avg<=60)
        {
                cout<<"C";
        }
        else
        {
                cout<<"D";
        }

        fin.close();
        fout.close();
        return 0;
}