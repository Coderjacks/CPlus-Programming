#include<iostream>   //priya@incapp.in
#include<fstream>
#include<string>
#include<string.h>
#include<conio.h>
using namespace std;
void College_Function();
void Student_Function();
void Trainer_Function();
void  Admin_Function();
void start_Function();
void end_Function();
void delay();
/*------------------------------Admin Class-------------------------*/
class Admin
{
    char user_id[20],password[20],id[20];
    public:
        fstream afile;
        void admin_Input_Details()
        {
             system("cls");
              int i=0,found=0;
            char ch;
            afile.open("Admin.txt",ios::in);
            if(afile.fail())
            {
                cout<<"Admin File is not Created Yet.\n You are the First User to Add as Admin."<<endl;
                cout<<"Enter Admin ID (without Space): "<<endl;
                cin.ignore();
                cin>>id;
            }
            else{
                        cout<<"Enter Admin ID (without Space): "<<endl;
                         cin.ignore();
                        cin>>id;
                        while(1)
                        {
                            afile>>user_id>>password;
                            if(afile.eof())
                            {
                                break;
                            }
                           if(!strcmp(id,user_id))
                            {
                                found=1;
                                cout<<"\n This "<<id<<" Admin is Already exit. "<<endl;
                                cout<<endl;
                            }
                        }
               }
               afile.close();
               if(found==0)
               {
                     afile.open("Admin.txt",ios::app);
                    strcpy(user_id,id);
                    cout<<"Enter Password (without Space): "<<endl;
                    cin.ignore();
                    ch=_getch();
                    i=0;
                    while(ch!=13)
                    {
                        cout<<"*";
                        password[i]=ch;
                        ch=_getch();
                        i++;
                    }
                    password[i]='\0';
                    afile<<user_id<<" "<<password<<endl;
                    cout<<"\nplease wait. .";
                    delay();

                    cout<<"\nNew Admin Added SuccessFully."<<endl<<endl;
                    afile.close();
               }
        }
        void admin_View_Details()
        {
                system("cls");
              int num=1;
            afile.open("Admin.txt",ios::in);
            if(afile.fail())
            {
                cout<<"Admin File is not Created Yet."<<endl;
            }
            else{
                        while(1)
                        {
                            afile>>user_id>>password;
                            if(afile.eof())
                            {
                                break;
                            }
                                cout<<num<<" Admin Details: "<<endl;
                                cout<<"\nAdmin ID: "<<user_id<<endl;
                                cout<<"Password: "<<password<<endl;
                                num++;
                            }
                }
                afile.close();
        }
/*------------------------------Admin Login Function-------------------------*/
        int admin_login()
        {
                system("cls");
                char id[30],pass[30],ch;
                int found=0,i;
                afile.open("Admin.txt",ios::in);
                if(afile.fail())
                {
                    cout<<"Admin File is not Created Yet."<<endl;
                }
                else{
                        cout<<"For Update Information Please Login First."<<endl;
                        cout<<"Enter Admin ID : "<<endl;
                        cin.ignore();
                        cin>>id;
                        cout<<"Enter Password: "<<endl;
                        cin.ignore();
                        ch=_getch();
                        i=0;
                        while(ch!=13)
                        {
                            cout<<"*";
                            pass[i]=ch;
                            ch=_getch();
                            i++;
                        }
                        pass[i]='\0';
                        while(1)
                        {
                            afile>>user_id>>password;
                            if(afile.eof())
                            {
                                break;
                            }
                           if((!strcmp(id,user_id)) && (!strcmp(pass,password)))
                            {
                                found=1;
                                cout<<"\n Admin login Sucessfully. "<<endl;
                                cout<<"\n Please wait . ";
                                delay();
                                return 1;
                            }
                        }
                        if(found==0)
                        {
                            cout<<"\n Wrong User ID & Password. Please Try again."<<endl;
                            delay();
                             return 0;
                        }
                }
                afile.close();
        }
};
/*------------------------------Admin Function-------------------------*/
void Admin_Function()
{
        system("color E4");
        Admin a;
        int x;
     do
     {
           system("cls");
            cout<<"\nPress 1: Add New Admin Registration."<<endl;
            cout<<"Press 2: View All Admin Details."<<endl;
            cout<<"Enter your Choice:-  ";
            cin>>x;
            switch(x)
            {
                case 1: a.admin_Input_Details();
                            break;
                case 2: cout<<" For New Addmin Update Get Admin Login First Here."<<endl;
                             a.admin_View_Details();
                            break;
                default: cout<<"Invalid Choice."<<endl;
            }
            cout<<"Press 1: Check Again Admin Details"<<endl;
            cout<<"Press 2: Go to Main Menu"<<endl;
            cin>>x;

     }while(x==1);
}
/*------------------------------College Class------------------------*/
class College:public virtual Admin
{
    string college_ID;
    char college_Name[30],college_Address[30];
    public:
    fstream file,file2,cfile;
        void college_Input_Details()
        {
           cfile.open("College.txt",ios::out);
            cout<<"\nEnter College ID: "<<endl;
            cin>>college_ID;
            cout<<"Enter College Name: "<<endl;
            cin.ignore();
              cin.getline(college_Name,30);
            cout<<"Enter College Address: "<<endl;
            cin.getline(college_Address,30);
            cfile<<college_ID<<" "<<college_Name<<"@ "<<college_Address<<"@"<<endl<<endl;
            cout<<"please wait. .";
            delay();
            cout<<"\nCollege Details Updated SuccessFully."<<endl<<endl;
            cfile.close();
        }
        void college_View_Details()
        {
            char ch;
            int i=0;
             cfile.open("College.txt",ios::in);
             if(cfile.fail())
             {
                 cout<<"File is Not created yet."<<endl;
                 delay();
                 College_Function();

             }
             while(1)
            {
                    cfile>>college_ID;
                     if(cfile.eof())
                     {
                         break;
                     }
                     ch=cfile.get();
                     while(ch!='@')
                     {
                         college_Name[i]=ch;
                         ch=cfile.get();
                         i++;
                     }
                     college_Name[i]='\0';
                    i=0;
                      ch=cfile.get();
                     while(ch!='@')
                     {
                         college_Address[i]=ch;
                         ch=cfile.get();
                         i++;
                     }
                     college_Address[i]='\0';
                    cout<<"College ID: "<<college_ID<<endl;
                    cout<<"College Name: "<<college_Name<<endl;
                    cout<<"Enter College Address: "<<college_Address<<endl<<endl;
            }
            cfile.close();
        }
};
/*------------------------------College Function-------------------------*/
void College_Function()
{
     system("color E4");
     College c;
     int w;
    int x;
     do
     {
           system("cls");
            cout<<"\nPress 1: View College Details."<<endl;
            cout<<"Press 2: Update College Details."<<endl;
            cout<<"Enter your Choice:-  ";
            cin>>x;
            switch(x)
            {
                case 1: c.college_View_Details();
                            break;
                case 2: cout<<" For College Information Update Get Admin Login First Here."<<endl;
                              w= c.admin_login();
                              if(w==1)
                             {
                                 c.college_Input_Details();
                             }
                            break;
                default: cout<<"Invalid Choice."<<endl;
            }
            cout<<"Press 1:- Check Again College Details"<<endl;
            cout<<"Press 2:- Go to Main Menu "<<endl;
            cin>>x;

     }while(x==1);
}
/*------------------------------Student Class-------------------------*/
class Student: public College
{
     int student_rollno,age;
     char student_name[20],student_address[30];
     long long student_Mobno;
     char Student_Course[20];
    public:
         void Input_Details()
         {
               system("cls");
               file.open("Student.txt",ios::in);
               int rollno,i=0,found=0;
               char ch;
               if(file.fail())
               {
                   cout<<"Student File is not Created Yet. \n You are the First Student in this College."<<endl;
                    cout<<"Enter Student Rollno: "<<endl;
                    cin>>rollno;
               }
               else{
                        cout<<"\nEnter Student Rollno: "<<endl;
                        cin>>rollno;
                        while(1)
                        {
                            file>>student_rollno>>age;
                            if(file.eof())
                            {
                                break;
                            }
                                    ch=file.get();
                                     while(ch!='@')
                                     {
                                         student_name[i]=ch;
                                         ch=file.get();
                                         i++;
                                     }
                                     student_name[i]='\0';

                                    i=0;
                                      ch=file.get();
                                     while(ch!='@')
                                     {
                                         student_address[i]=ch;
                                         ch=file.get();
                                         i++;
                                     }
                                     student_address[i]='\0';

                                     file>>student_Mobno;

                                      i=0;
                                      ch=file.get();
                                     while(ch!='@')
                                     {
                                         Student_Course[i]=ch;
                                         ch=file.get();
                                         i++;
                                     }
                                     Student_Course[i]='\0';
                                     if(rollno==student_rollno)
                                     {
                                         found=1;
                                         cout<<rollno <<"\n Student Details are Already exit. "<<endl;
                                        cout<<"Rollno: "<<student_rollno<<endl;
                                        cout<<"Name: "<<student_name<<endl;
                                        cout<<"Age: "<<age<<endl;
                                        cout<<"Address: "<<student_address<<endl;
                                        cout<<"Mobile Number : "<<student_Mobno<<endl;
                                         cout<<" Course : "<<Student_Course<<endl;
                                         college_View_Details();
                                         cout<<endl;

                                     }

                        }
               }
               file.close();
               if(found==0)
               {
                     file.open("Student.txt",ios::app);

                     long long temp;
                    student_rollno=rollno;
                    cout<<"Enter Student Name: "<<endl;
                    cin.ignore();
                    cin.getline(student_name,30);
                    cout<<"Enter Student Age: "<<endl;
                    cin>>age;
                    cout<<"Enter Student Address: "<<endl;
                    cin.ignore();
                    cin.getline(student_address,30);
                    while(1)
                    {
                        int length=0;
                            cout<<"Enter Student Mobile Number: "<<endl;
                            cin>>student_Mobno;
                            temp=student_Mobno;
                            while(temp!=0)
                            {
                                temp/=10;
                                length++;
                            }
                            if(length !=10)
                            {
                                cout<<"Invalid Mobile Number. Please Input again:\n ";
                            }
                            else{
                                break;
                            }
                    }
                    cout<<"Enter Student Course: "<<endl;
                    cin.ignore();
                    cin.getline(Student_Course,30);

                    file<<student_rollno<<" "<<age<<" "<<student_name<<"@ "<<student_address<<"@ "<<student_Mobno<<" "<<Student_Course<<"@"<<endl;
                    cout<<"please wait. .";
                    delay();

                    cout<<"\nStudent Details Added SuccessFully."<<endl<<endl;
                    file.close();
               }

         }
         void View_Details()
            {
                    system("cls");
                    char ch;
                    int i=0,num=1;
                     file.open("Student.txt",ios::in);
                     if(file.fail())
                     {
                         cout<<"Student File in not created yet."<<endl;
                           delay();
                            Student_Function();
                     }
                     college_View_Details();
                     cout<<"------------------------------------------------------------"<<endl;
                     while(1)
                    {
                           i=0;
                            file>>student_rollno>>age;
                             if(file.eof())
                             {
                                 break;
                             }
                             ch=file.get();
                             while(ch!='@')
                             {
                                 student_name[i]=ch;
                                 ch=file.get();
                                 i++;
                             }
                             student_name[i]='\0';

                            i=0;
                              ch=file.get();
                             while(ch!='@')
                             {
                                 student_address[i]=ch;
                                 ch=file.get();
                                 i++;
                             }
                             student_address[i]='\0';
                             file>>student_Mobno;
                               i=0;
                              ch=file.get();
                             while(ch!='@')
                             {
                                 Student_Course[i]=ch;
                                 ch=file.get();
                                 i++;
                             }
                             Student_Course[i]='\0';
                            cout<<num<<" Student Details are: "<<endl;
                           cout<<"Rollno: "<<student_rollno<<endl;
                           cout<<"Name: "<<student_name<<endl;
                           cout<<"Age: "<<age<<endl;
                           cout<<"Address: "<<student_address<<endl;
                           cout<<"Mobile Number : "<<student_Mobno<<endl;
                           cout<<" Course : "<<Student_Course<<endl<<endl;
                           cout<<"------------------------------------------------------------"<<endl;
                           num++;
                    }
                    file.close();
            }
            void  Search_Details()
            {
                system("cls");
               file.open("Student.txt",ios::in);
               int rollno,i=0,found=0;
               char ch;
               if(file.fail())
               {
                   cout<<"Student File is not Created Yet."<<endl;
               }
               else{
                        cout<<"Enter Student Rollno: "<<endl;
                        cin>>rollno;
                        while(1)
                        {
                            i=0;
                            file>>student_rollno>>age;
                          //  file.getline(student_name,'@');
                            if(file.eof())
                            {
                                break;
                            }
                                    ch=file.get();
                                     while(ch!='@')
                                     {
                                         student_name[i]=ch;
                                         ch=file.get();
                                         i++;
                                     }
                                    student_name[i]='\0';

                                    i=0;
                                      ch=file.get();
                                     while(ch!='@')
                                     {
                                         student_address[i]=ch;
                                         ch=file.get();
                                         i++;
                                     }
                                     student_address[i]='\0';

                                     file>>student_Mobno;

                                      i=0;
                                      ch=file.get();
                                     while(ch!='@')
                                     {
                                         Student_Course[i]=ch;
                                         ch=file.get();
                                         i++;
                                     }
                                     Student_Course[i]='\0';
                                     if(rollno==student_rollno)
                                     {
                                         cout<<"\nStudent Details are:-  "<<endl;
                                        cout<<"Rollno: "<<student_rollno<<endl;
                                        cout<<"Name: "<<student_name<<endl;
                                        cout<<"Age: "<<age<<endl;
                                        cout<<"Address: "<<student_address<<endl;
                                        cout<<"Mobile Number : "<<student_Mobno<<endl;
                                         cout<<" Course : "<<Student_Course<<endl;
                                         college_View_Details();
                                         cout<<endl;
                                         found=1;

                                     }

                        }
                        if(found==0)
                        {
                            cout<<rollno<<" Rollno is not exit."<<endl<<endl;
                        }
               }
               file.close();
            }
            void Update_Details()
            {
                system("cls");
               file.open("Student.txt",ios::in);
               file2.open("StudentCopy.txt",ios::app);
               int rollno,i=0,found=0;
               char ch,name[20],address[30],course[30];
               int a;
               long long Mobno;
               if(file.fail())
               {
                   cout<<"Student File is not Created Yet."<<endl;
                   exit(0);
               }
               else{
                         cout<<"Enter Student Roll-no for Update Details: "<<endl;
                         cin>>rollno;
                        while(1)
                        {
                            file>>student_rollno>>age;
                            if(file.eof())
                            {
                                break;
                            }
                               i=0;
                                    ch=file.get();
                                     while(ch!='@')
                                     {
                                         student_name[i]=ch;
                                         ch=file.get();
                                         i++;
                                     }
                                     student_name[i]='\0';

                                    i=0;
                                      ch=file.get();
                                     while(ch!='@')
                                     {
                                         student_address[i]=ch;
                                         ch=file.get();
                                         i++;
                                     }
                                     student_address[i]='\0';

                                     file>>student_Mobno;

                                      i=0;
                                      ch=file.get();
                                     while(ch!='@')
                                     {
                                         Student_Course[i]=ch;
                                         ch=file.get();
                                         i++;
                                     }
                                     Student_Course[i]='\0';
                                     if(rollno==student_rollno)
                                     {
                                         found=1;
                                          long long temp;
                                            cout<<"Input Student New Details for Update: "<<endl<<endl;
                                            cout<<"Enter Student Name: "<<endl;
                                            cin.ignore();
                                            cin.getline(name,30);
                                            cout<<"Enter Student Age: "<<endl;
                                            cin>>a;
                                            cout<<"Enter Student Address: "<<endl;
                                             cin.ignore();
                                            cin.getline(address,30);
                                            while(1)
                                            {
                                                int length=0;
                                                    cout<<"Enter Student Mobile Number: "<<endl;
                                                    cin>>Mobno;
                                                    temp=Mobno;
                                                    while(temp!=0)
                                                    {
                                                        temp/=10;
                                                        length++;
                                                    }
                                                    if(length !=10)
                                                    {
                                                        cout<<"Invalid Mobile Number. Please Input again: ";
                                                    }
                                                    else{
                                                        break;
                                                    }
                                            }
                                            cout<<"Enter Student Course: "<<endl;
                                           cin.ignore();
                                            cin.getline(course,30);
                                            student_rollno=rollno;
                                            strcpy(student_name,name);
                                            age=a;
                                            strcpy(student_address,address);
                                            student_Mobno=Mobno;
                                            strcpy(Student_Course,course);

                                     }
                                    file2<<student_rollno<<" "<<age<<" "<<student_name<<"@"<<student_address<<"@"<<student_Mobno<<" "<<Student_Course<<"@"<<endl;
                        }
                         cout<<"please wait. . ";
                    delay();

                    cout<<"\nStudent Details Updated SuccessFully."<<endl<<endl;
                     file.close();
                file2.close();
                remove("student.txt");
                rename("studentcopy.txt","student.txt");
                }

               if(found==0)
               {
                   cout<<student_rollno<<" :- this Rollno's Student is not exit."<<endl<<endl;
               }

            }
};
/*------------------------------Student Function-------------------------*/
void  Student_Function()
{
     system("color E4");
     Student s;
    int x;
     do
     {
           system("cls");
           int w;
            cout<<"\nPress 1: Add New Student Details."<<endl;
            cout<<"Press 2: View All Student Details."<<endl;
            cout<<"Press 3: Search Student Details By Rollno."<<endl;
            cout<<"Press 4: Update Student Details."<<endl;
            cout<<"Enter your Choice:-  ";
            cin>>x;
            switch(x)
            {
                case 1: s.Input_Details();
                            break;
                case 2:  s.View_Details();
                              break;
                 case 3:  s.Search_Details();
                              break;
                case 4:    cout<<" For Student Information Update Get Admin Login First Here."<<endl;
                            w= s.admin_login();
                              if(w==1)
                              {
                                 s.Update_Details();
                              }
                                break;
                default: cout<<"Invalid Choice."<<endl;
            }
            cout<<"\nPress 1: Check Again Student Details. "<<endl;
             cout<<"Press 2:- Go to Main Menu "<<endl;
            cin>>x;
     }while(x==1);
}
/*------------------------------Delay Function-------------------------*/
void delay()
{
     for(int i=0;i<10;i++)
    {
            for(int j=1;j<20000000;j++)
            {
                    j++;j--;
            }
            cout<<" . ";
    }
}
/*------------------------------Trainer Class-------------------------*/
class Trainer:public College
{
     int trainer_ID,age;
     char trainer_name[20],trainer_address[30];
     long long trainer_Mobno;
     int trainer_salary;
     fstream tfile,tfile2;
    public:
         void Input_Details()
         {
               system("cls");
               tfile.open("Trainer.txt",ios::in);
               int id,i=0,found=0;
               char ch;
               if(tfile.fail())
               {
                   cout<<"Trainer File is not Created Yet. \nYou are the First Trainer of this College."<<endl;
                    cout<<"Enter Trainer ID: "<<endl;
                    cin>>id;
               }
               else{
                        cout<<"\nEnter Trainer ID: "<<endl;
                        cin>>id;
                        while(1)
                        {
                            tfile>>trainer_ID>>age;
                            if(tfile.eof())
                            {
                                break;
                            }
                                   i=0;
                                    ch=tfile.get();
                                     while(ch!='@')
                                     {
                                         trainer_name[i]=ch;
                                         ch=tfile.get();
                                         i++;
                                     }
                                     trainer_name[i]='\0';

                                    i=0;
                                      ch=tfile.get();
                                     while(ch!='@')
                                     {
                                         trainer_address[i]=ch;
                                         ch=tfile.get();
                                         i++;
                                     }
                                     trainer_address[i]='\0';
                                     tfile>>trainer_Mobno>>trainer_salary;
                                     if(id==trainer_ID)
                                     {
                                         found=1;
                                         cout<<id <<"\n Trainer Details are Already exit. "<<endl;
                                        cout<<"Name: "<<trainer_name<<endl;
                                        cout<<"Age: "<<age<<endl;
                                        cout<<"Address: "<<trainer_address<<endl;
                                        cout<<"Mobile Number : "<<trainer_Mobno<<endl;
                                         cout<<" Salary : "<<trainer_salary<<endl;
                                         college_View_Details();
                                         cout<<endl;
                                     }
                        }
               }
               tfile.close();
               if(found==0)
               {
                     tfile.open("Trainer.txt",ios::app);

                     long long temp;
                    trainer_ID=id;
                    cout<<"Enter Trainer Name: "<<endl;
                    cin.ignore();
                    cin.getline(trainer_name,30);
                    cout<<"Enter Trainer Age: "<<endl;
                    cin>>age;
                    cout<<"Enter Trainer Address: "<<endl;
                    cin.ignore();
                    cin.getline(trainer_address,30);
                    while(1)
                    {
                        int length=0;
                            cout<<"Enter Trainer Mobile Number: "<<endl;
                            cin>>trainer_Mobno;
                            temp=trainer_Mobno;
                            while(temp!=0)
                            {
                                temp/=10;
                                length++;
                            }
                            if(length !=10)
                            {
                                cout<<"Invalid Mobile Number. Please Input again:\n ";
                            }
                            else{
                                break;
                            }
                    }
                    cout<<"Enter Trainer Salary: "<<endl;
                    cin>>trainer_salary;

                    tfile<<trainer_ID<<" "<<age<<" "<<trainer_name<<"@ "<<trainer_address<<"@ "<<trainer_Mobno<<" "<<trainer_salary<<endl;
                    cout<<"please wait. .";
                    delay();

                    cout<<"\nTrainer Details Added SuccessFully."<<endl<<endl;
                    tfile.close();
               }

         }
         void View_Details()
            {
                    system("cls");
                    char ch;
                    int i=0,num=1;
                     tfile.open("Trainer.txt",ios::in);
                     if(tfile.fail())
                     {
                         cout<<"Trainer File in not created yet."<<endl;
                           delay();
                            Trainer_Function();
                     }
                     college_View_Details();
                     cout<<"------------------------------------------------------------"<<endl;
                     while(1)
                    {

                            tfile>>trainer_ID>>age;
                             if(tfile.eof())
                             {
                                 break;
                             }
                              i=0;
                             ch=tfile.get();
                             while(ch!='@')
                             {
                                 trainer_name[i]=ch;
                                 ch=tfile.get();
                                 i++;
                             }
                             trainer_name[i]='\0';

                            i=0;
                              ch=tfile.get();
                             while(ch!='@')
                             {
                                 trainer_address[i]=ch;
                                 ch=tfile.get();
                                 i++;
                             }
                             trainer_address[i]='\0';
                             tfile>>trainer_Mobno>>trainer_salary;

                            cout<<num<<" Trainer Details are: "<<endl;
                           cout<<"Trainer ID: " <<trainer_ID<<endl;
                            cout<<"Name: "<<trainer_name<<endl;
                            cout<<"Age: "<<age<<endl;
                            cout<<"Address: "<<trainer_address<<endl;
                            cout<<"Mobile Number : "<<trainer_Mobno<<endl;
                            cout<<" Salary : "<<trainer_salary<<endl;
                           cout<<"------------------------------------------------------------"<<endl;
                           num++;
                    }
                    tfile.close();
            }
            void  Search_Details()
            {
                system("cls");
               tfile.open("Trainer.txt",ios::in);
               int id,i=0,found=0;
               char ch;
               if(tfile.fail())
               {
                   cout<<"Trainer File is not Created Yet."<<endl;
               }
               else{
                        cout<<"Enter Trainer ID: "<<endl;
                        cin>>id;
                        while(1)
                        {
                            i=0;
                            tfile>>trainer_ID>>age;
                            if(tfile.eof())
                            {
                                break;
                            }
                                    ch=tfile.get();
                                     while(ch!='@')
                                     {
                                         trainer_name[i]=ch;
                                         ch=tfile.get();
                                         i++;
                                     }
                                    trainer_name[i]='\0';

                                    i=0;
                                      ch=tfile.get();
                                     while(ch!='@')
                                     {
                                         trainer_address[i]=ch;
                                         ch=tfile.get();
                                         i++;
                                     }
                                     trainer_address[i]='\0';
                                     tfile>>trainer_Mobno>>trainer_salary;
                                     if(id==trainer_ID)
                                     {
                                        cout<<"Trainer ID: " <<trainer_ID<<endl;
                                        cout<<"Name: "<<trainer_name<<endl;
                                        cout<<"Age: "<<age<<endl;
                                        cout<<"Address: "<<trainer_address<<endl;
                                        cout<<"Mobile Number : "<<trainer_Mobno<<endl;
                                        cout<<" Salary : "<<trainer_salary<<endl;
                                         college_View_Details();
                                         cout<<endl;
                                         found=1;
                                     }
                        }
                        if(found==0)
                        {
                            cout<<id<<" This ID Trainer is not exit."<<endl<<endl;
                        }
               }
               tfile.close();
            }
            void Update_Details()
            {
                system("cls");
               tfile.open("Trainer.txt",ios::in);
               tfile2.open("TrainerCopy.txt",ios::app);
               int id,i=0,found=0;
               char ch,name[20],address[30];
               int a,salary;
               long long Mobno;
               if(tfile.fail())
               {
                   cout<<"Trainer File is not Created Yet."<<endl;
                   delay();
                   Trainer_Function();
               }
               else{
                         cout<<"Enter Trainer ID for Update Details: "<<endl;
                         cin>>id;
                        while(1)
                        {
                           i=0;
                            tfile>>trainer_ID>>age;
                            if(tfile.eof())
                            {
                                break;
                            }
                                    ch=tfile.get();
                                     while(ch!='@')
                                     {
                                         trainer_name[i]=ch;
                                         ch=tfile.get();
                                         i++;
                                     }
                                    trainer_name[i]='\0';

                                    i=0;
                                      ch=tfile.get();
                                     while(ch!='@')
                                     {
                                         trainer_address[i]=ch;
                                         ch=tfile.get();
                                         i++;
                                     }
                                     trainer_address[i]='\0';
                                     tfile>>trainer_Mobno>>trainer_salary;
                                     if(id==trainer_ID)
                                     {
                                         found=1;
                                          long long temp;
                                            cout<<"Input Trainer New Details for Update: "<<endl<<endl;
                                            cout<<"Enter Trainer Name: "<<endl;
                                            cin.ignore();
                                            cin.getline(name,30);
                                            cout<<"Enter Trainer Age: "<<endl;
                                            cin>>a;
                                            cout<<"Enter Trainer Address: "<<endl;
                                            cin.ignore();
                                            cin.getline(address,30);
                                            while(1)
                                            {
                                                int length=0;
                                                    cout<<"Enter Trainer Mobile Number: "<<endl;
                                                    cin>>Mobno;
                                                    temp=Mobno;
                                                    while(temp!=0)
                                                    {
                                                        temp/=10;
                                                        length++;
                                                    }
                                                    if(length !=10)
                                                    {
                                                        cout<<"Invalid Mobile Number. Please Input again:\n ";
                                                    }
                                                    else{
                                                        break;
                                                    }
                                            }
                                            cout<<"Enter Trainer Salary: "<<endl;
                                            cin>>salary;
                                            trainer_ID=id;
                                            strcpy(trainer_name,name);
                                            age=a;
                                            strcpy(trainer_address,address);
                                            trainer_Mobno=Mobno;
                                            trainer_salary=salary;

                                     }
                                    tfile2<<trainer_ID<<" "<<age<<" "<<trainer_name<<"@"<<trainer_address<<"@"<<trainer_Mobno<<" "<<trainer_salary<<endl;
                        }
                         cout<<"please wait. . ";
                    delay();

                    cout<<"\nTrainer Details Updated SuccessFully."<<endl<<endl;
                     tfile.close();
                tfile2.close();
                remove("Trainer.txt");
                rename("TrainerCopy.txt","Trainer.txt");
               if(found==0)
               {
                   cout<<id<<" :- this Id Trainer is not exit."<<endl<<endl;
               }
             }
            }
            void Salary_Update()
            {
                    system("cls");
                   tfile.open("Trainer.txt",ios::in);
                   tfile2.open("TrainerCopy.txt",ios::app);
                   int id,i=0,found=0;
                   char ch;
                   int increment;
                   if(tfile.fail())
                   {
                       cout<<"Trainer File is not Created Yet."<<endl;
                       delay();
                       Trainer_Function();
                   }
                   else{
                             cout<<"Enter Trainer ID for Salary Update: "<<endl;
                             cin>>id;
                            while(1)
                            {
                               i=0;
                                tfile>>trainer_ID>>age;
                                if(tfile.eof())
                                {
                                    break;
                                }
                                        ch=tfile.get();
                                         while(ch!='@')
                                         {
                                             trainer_name[i]=ch;
                                             ch=tfile.get();
                                             i++;
                                         }
                                        trainer_name[i]='\0';

                                        i=0;
                                          ch=tfile.get();
                                         while(ch!='@')
                                         {
                                             trainer_address[i]=ch;
                                             ch=tfile.get();
                                             i++;
                                         }
                                         trainer_address[i]='\0';
                                         tfile>>trainer_Mobno>>trainer_salary;
                                         if(id==trainer_ID)
                                         {
                                             found=1;
                                                while(1)
                                                {
                                                    cout<<"Enter Salary Increment (in Percentage(%) ): "<<endl<<endl;
                                                    cin>>increment;
                                                    if(increment>0 && increment<=100)
                                                    {
                                                         trainer_salary=trainer_salary+ ((trainer_salary*increment)/100);
                                                         cout<<"please wait. . ";
                                                            delay();
                                                            cout<<"\n"<<trainer_name<<" Salary Updated SuccessFully."<<endl<<endl;
                                                          break;
                                                    }
                                                    else{
                                                          cout<<"invalid increment."<<endl;
                                                    }
                                                }
                                         }
                                        tfile2<<trainer_ID<<" "<<age<<" "<<trainer_name<<"@"<<trainer_address<<"@"<<trainer_Mobno<<" "<<trainer_salary<<endl;
                            }
                         tfile.close();
                         tfile2.close();
                       remove("Trainer.txt");
                       rename("TrainerCopy.txt","Trainer.txt");
                   if(found==0)
                   {
                       cout<<id<<" :- this Id Trainer is not exit."<<endl<<endl;
                   }
                }
            }
};
/*------------------------------Trainer Function-------------------------*/
void Trainer_Function()
{
     int x;
     Trainer t;
     do
     {
           system("cls");
           int w;
           system("color E4");
            cout<<"\nPress 1: Add New Trainer Details."<<endl;
            cout<<"Press 2: View All Trainer Details."<<endl;
            cout<<"Press 3: Search Trainer Details By Trainer ID."<<endl;
            cout<<"Press 4: Update Trainer Details."<<endl;
            cout<<"Press 5: Update Trainer Salary Details."<<endl;
            cout<<"Enter your Choice:-  ";
            cin>>x;
            switch(x)
            {
                case 1: t.Input_Details();
                            break;
                case 2:  t.View_Details();
                              break;
                 case 3:  t.Search_Details();
                              break;
                case 4:    cout<<" For Trainer Information Update Get Admin Login First Here."<<endl;
                                w= t.admin_login();
                              if(w==1)
                              {
                                 t.Update_Details();
                              }
                                break;
                case 5:    cout<<" For Trainer Salary Update Get Admin Login First Here."<<endl;
                                t.Salary_Update();
                                break;
                default: cout<<"Invalid Choice."<<endl;
            }
            cout<<"\nPress 1:-  Check Again Trainer Details: "<<endl;
            cout<<"Press 2:- Go to Main Menu "<<endl;
            cin>>x;
     }while(x==1);
}

/*------------------------------Start Function-------------------------*/
 void start_Function()
{
    char ch;
    do
    {
        int x;
             system("cls");
            cout<<"\nPress 1 for College."<<endl;
            cout<<"\nPress 2 for Student."<<endl;
            cout<<"\nPress 3 for Trainer."<<endl;
            cout<<"\nPress 4 for Admin."<<endl;
            cout<<"\nPress 5 for Exit."<<endl;
            cout<<"Enter your Choice:-  ";
            cin>>x;
            switch(x)
            {
                 case 1:  College_Function();
                               break;
                 case 2:  Student_Function();
                               break;
                 case 3:  Trainer_Function();
                               break;
                 case 4:  Admin_Function();
                               break;
                 case 5: end_Function();
                                exit(0);
                               break;
                default: cout<<"Invalid choice."<<endl;
            }
            cout<<"Do you want to Go main Menu. Then Press y: "<<endl;
            cin.ignore();
            cin>>ch;
            if(ch!='y')
            {
                    cout<<"Are you sure you want exit. If No then Press y: "<<endl;
                     cin.ignore();
                    cin>>ch;
            }
    }while(ch=='y');
}

/*------------------------------End Function-------------------------*/
void end_Function()
{
     char logout[]=">>>>>>>>>Logout From Project<<<<<<<<<";
            for(int i=0;i<37;i++)
            {
                for(int j=1;j<20000000;j++)
                {
                    j++;j--;
                }
                cout<<logout[i];
            }
}
/*------------------------------Main Function-------------------------*/
main()
{
            system("color E4");
            char welcome[]=">>>>>>>>>Welcome to Our Project<<<<<<<<<";
            for(int i=0;i<40;i++)
            {
                for(int j=1;j<20000000;j++)
                {
                    j++;j--;
                }
                cout<<welcome[i];
            }
           start_Function();
           end_Function();
}
