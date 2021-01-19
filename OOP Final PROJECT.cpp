#include<iostream>
#include<fstream>
#include<conio.h>
#include <windows.h>

using namespace std;

class Data
{
	private:
		string NU_ID;
		string NU_Password;
		string Degree_Program;
		string Batch;
		
		string Name;
		string Phone_Number;
		string CNIC_Number;
		string Email;

		string Address;
		
		string Father_Name;
		string Father_Phone_Number;
		string Father_CNIC_Number;
		string Father_Email;
		
		string CGPA;
		string SGPA;
		string Credit_Hours;
		string Course1_Name;
		string Course1_Marks;
		string Course2_Name;
		string Course2_Marks;
		string Course3_Name;
		string Course3_Marks;
		string Course4_Name;
		string Course4_Marks;
		string Course5_Name;
		string Course5_Marks;
	protected:
		friend class Student_Data;
	public:
		void Set_Phone_Number(string pn)
		{
			Phone_Number=pn;
		}
		void Set_Address(string a)
		{
			Address=a;
		}
		string Get_ID()const
		{
			return NU_ID;
		}
		string Get_Batch()const
		{
			return Batch;
		}
		string Get_Degree_Program()const
		{
			return Degree_Program;
		}
		string Get_Name()const
		{
			return Name;
		}
		string Get_Phone_Number()const
		{
			return Phone_Number;
		}
		string Get_CNIC_Number()const
		{
			return CNIC_Number;
		}
		string Get_Email()const
		{
			return Email;
		}
		string Get_Address()const
		{
			return Address;
		}
		string Get_Father_Name()const
		{
			return Father_Name;
		}
		string Get_Father_Phone_Number()const
		{
			return Father_Phone_Number;
		}
		string Get_Father_CNIC_Number()const
		{
			return Father_CNIC_Number;
		}
		string Get_Father_Email()const
		{
			return Father_Email;
		}
		string Get_CGPA()const
		{
			return CGPA;
		}
		string Get_SGPA()const
		{
			return SGPA;
		}
		string Get_Credit_Hours()const
		{
			return Credit_Hours;
		}
		string Get_Course1_Name()const
		{
			return Course1_Name;
		}
		string Get_Course1_Marks()const
		{
			return Course1_Marks;
		}
		string Get_Course2_Name()const
		{
			return Course2_Name;
		}
		string Get_Course2_Marks()const
		{
			return Course2_Marks;
		}
		string Get_Course3_Name()const
		{
			return Course3_Name;
		}
		string Get_Course3_Marks()const
		{
			return Course3_Marks;
		}
		string Get_Course4_Name()const
		{
			return Course4_Name;
		}
		string Get_Course4_Marks()const
		{
			return Course4_Marks;
		}
		string Get_Course5_Name()const
		{
			return Course5_Name;
		}
		string Get_Course5_Marks()const
		{
			return Course5_Marks;
		}
};
class Student_Data
{
	protected:
		Data SD;
		bool Write_Data()
		{
			Data TSD;
			ifstream File;
			ofstream Temp_File;
			File.open("Student_Details.txt");
			Temp_File.open("Temp_File.txt",ios_base::app);
			if(!File.is_open()&&!Temp_File.is_open())
			return false;
			while(!File.eof())
			{
				getline(File,TSD.NU_ID);
				getline(File,TSD.NU_Password);
				getline(File,TSD.Degree_Program);
				getline(File,TSD.Batch);
				getline(File,TSD.Name);
				getline(File,TSD.Phone_Number);
				getline(File,TSD.CNIC_Number);
				getline(File,TSD.Email);
				getline(File,TSD.Address);
				getline(File,TSD.Father_Name);
				getline(File,TSD.Father_Phone_Number);
				getline(File,TSD.Father_CNIC_Number);
				getline(File,TSD.Father_Email);
				getline(File,TSD.CGPA);
				getline(File,TSD.SGPA);
				getline(File,TSD.Credit_Hours);
				getline(File,TSD.Course1_Name);
				getline(File,TSD.Course1_Marks);
				getline(File,TSD.Course2_Name);
				getline(File,TSD.Course2_Marks);
				getline(File,TSD.Course3_Name);
				getline(File,TSD.Course3_Marks);
				getline(File,TSD.Course4_Name);
				getline(File,TSD.Course4_Marks);
				getline(File,TSD.Course5_Name);
				getline(File,TSD.Course5_Marks);
				if(SD.NU_ID==TSD.NU_ID)
				continue;
				Temp_File<<TSD.NU_ID<<endl;
				Temp_File<<TSD.NU_Password<<endl;
				Temp_File<<TSD.Degree_Program<<endl;
				Temp_File<<TSD.Batch<<endl;
				Temp_File<<TSD.Name<<endl;
				Temp_File<<TSD.Phone_Number<<endl;
				Temp_File<<TSD.CNIC_Number<<endl;
				Temp_File<<TSD.Email<<endl;
				Temp_File<<TSD.Address<<endl;
				Temp_File<<TSD.Father_Name<<endl;
				Temp_File<<TSD.Father_Phone_Number<<endl;
				Temp_File<<TSD.Father_CNIC_Number<<endl;
				Temp_File<<TSD.Father_Email<<endl;
				Temp_File<<TSD.CGPA<<endl;
				Temp_File<<TSD.SGPA<<endl;
				Temp_File<<TSD.Credit_Hours<<endl;
				Temp_File<<TSD.Course1_Name<<endl;
				Temp_File<<TSD.Course1_Marks<<endl;
				Temp_File<<TSD.Course2_Name<<endl;
				Temp_File<<TSD.Course2_Marks<<endl;
				Temp_File<<TSD.Course3_Name<<endl;
				Temp_File<<TSD.Course3_Marks<<endl;
				Temp_File<<TSD.Course4_Name<<endl;
				Temp_File<<TSD.Course4_Marks<<endl;
				Temp_File<<TSD.Course5_Name<<endl;
				Temp_File<<TSD.Course5_Marks<<endl;
			}
			Temp_File<<SD.NU_ID<<endl;
			Temp_File<<SD.NU_Password<<endl;
			Temp_File<<SD.Degree_Program<<endl;
			Temp_File<<SD.Batch<<endl;
			Temp_File<<SD.Name<<endl;
			Temp_File<<SD.Phone_Number<<endl;
			Temp_File<<SD.CNIC_Number<<endl;
			Temp_File<<SD.Email<<endl;
			Temp_File<<SD.Address<<endl;
			Temp_File<<SD.Father_Name<<endl;
			Temp_File<<SD.Father_Phone_Number<<endl;
			Temp_File<<SD.Father_CNIC_Number<<endl;
			Temp_File<<SD.Father_Email<<endl;
			Temp_File<<SD.CGPA<<endl;
			Temp_File<<SD.SGPA<<endl;
			Temp_File<<SD.Credit_Hours<<endl;
			Temp_File<<SD.Course1_Name<<endl;
			Temp_File<<SD.Course1_Marks<<endl;
			Temp_File<<SD.Course2_Name<<endl;
			Temp_File<<SD.Course2_Marks<<endl;
			Temp_File<<SD.Course3_Name<<endl;
			Temp_File<<SD.Course3_Marks<<endl;
			Temp_File<<SD.Course4_Name<<endl;
			Temp_File<<SD.Course4_Marks<<endl;
			Temp_File<<SD.Course5_Name<<endl;
			Temp_File<<SD.Course5_Marks<<endl;
			File.close();
			Temp_File.close();
			if(remove("Student_Details.txt")==0)
			return false;
			if(rename("Temp_File.txt","Student_Details.txt")==0)
			;
		}
		bool Read_Data(string const &Login_ID,string const &Login_Password,int const &Login_Type)
		{
			if(Login_Type==49)
			{
				ifstream File;
				File.open("Student_Details.txt");
				while(!File.eof())
				{
					getline(File,SD.NU_ID);
					getline(File,SD.NU_Password);
					getline(File,SD.Degree_Program);
					getline(File,SD.Batch);
					getline(File,SD.Name);
					getline(File,SD.Phone_Number);
					getline(File,SD.CNIC_Number);
					getline(File,SD.Email);
					getline(File,SD.Address);
					getline(File,SD.Father_Name);
					getline(File,SD.Father_Phone_Number);
					getline(File,SD.Father_CNIC_Number);
					getline(File,SD.Father_Email);	
					getline(File,SD.CGPA);
					getline(File,SD.SGPA);
					getline(File,SD.Credit_Hours);
					getline(File,SD.Course1_Name);
					getline(File,SD.Course1_Marks);
					getline(File,SD.Course2_Name);
					getline(File,SD.Course2_Marks);
					getline(File,SD.Course3_Name);
					getline(File,SD.Course3_Marks);
					getline(File,SD.Course4_Name);
					getline(File,SD.Course4_Marks);
					getline(File,SD.Course5_Name);
					getline(File,SD.Course5_Marks);
					if(Login_ID==SD.NU_ID&&Login_Password==SD.NU_Password)
					{
						File.close();
						return true;
					}
					else
					continue;
				}
				File.close();
				return false;
			}
			else
			{
				if(Login_ID=="admin"&&Login_Password=="admin")
				return true;
				else
				return false;
			}	
		}
	public:
		bool Read_Data(string const &Student_ID)
		{
			ifstream File;
			File.open("Student_Details.txt");
			while(!File.eof())
			{
				getline(File,SD.NU_ID);
				getline(File,SD.NU_Password);
				getline(File,SD.Degree_Program);
				getline(File,SD.Batch);
				getline(File,SD.Name);
				getline(File,SD.Phone_Number);
				getline(File,SD.CNIC_Number);
				getline(File,SD.Email);
				getline(File,SD.Address);
				getline(File,SD.Father_Name);
				getline(File,SD.Father_Phone_Number);
				getline(File,SD.Father_CNIC_Number);
				getline(File,SD.Father_Email);	
				getline(File,SD.CGPA);
				getline(File,SD.SGPA);
				getline(File,SD.Credit_Hours);
				getline(File,SD.Course1_Name);
				getline(File,SD.Course1_Marks);
				getline(File,SD.Course2_Name);
				getline(File,SD.Course2_Marks);
				getline(File,SD.Course3_Name);
				getline(File,SD.Course3_Marks);
				getline(File,SD.Course4_Name);
				getline(File,SD.Course4_Marks);
				getline(File,SD.Course5_Name);
				getline(File,SD.Course5_Marks);
				if(Student_ID==SD.NU_ID)
				{
					File.close();
					return true;
				}
				else
				continue;
			}
			File.close();
			return false;
		}
};
class Login:virtual private Student_Data
{
	private:
		string User_ID;
	protected:
		Login(int const &User_Type)
		{
			char User_Password[10]={0};
			bool Check;
			while(1)
			{
				system("cls");
				
	            cout<<"\n\t\t                  Sign In Details                ";
				
				cout<<endl<<"Enter Username : ";
				cin>>User_ID;
				cout<<"Enter Password : ";
				int i=0;
				while(1)
				{
					User_Password[i]=getch();
					if(User_Password[i]==13)
					{
						if(i==0)
						continue;
						User_Password[i]='\0';
						break;
					}
					else if(User_Password[i]==8)
					{
						if(i==0)
						continue;
						else
						{
							cout<<"\b \b";
							i--;
						}	
					}
					else
					{
						cout<<"*";
						i++;
					}
				}
				Check=Read_Data(User_ID,User_Password,User_Type);
				if(Check==true)
				break;
				else
				{
					system("cls");
					
	                cout<<"\n\t\t                   Invalid Password or User Name Entered                ";
				
					cout<<"Press Enter to Retry... ";
					while(1)
					if(getch()==13)
					break;
				}
			}
		}
};
class Student:virtual private Student_Data
{
	private:
		int S_Option;
	protected:
	public:
		void Get_Option(int const &Option)
		{
			if(Option==49)
			Personal_Information();
			return;
		}
		void Personal_Information()
		{
			system("cls");
			
	         cout<<"\n\t\t                 Your Information                 ";
		
			cout<<"\t\t\t     Press BackSpace To Back\n"<<endl;
			cout<<"1) View All Information"<<endl;
			cout<<"2) Update Information\n"<<endl;
			cout<<"Choose Any Option... ";
			S_Option=getch();
			if(S_Option==49)
			View_All_Information();
			else if(S_Option==50)
			EditInformation();
			else if(S_Option==51)
			cout<<"NotDone"<<endl;
			else if(S_Option==8)
			return;
			else
			{
				system("cls");
				
				cout<<"***** INVALID INPUT *****";
			
				cout<<endl;
				cout<<"Press Enter...";
				while(1)
				if(getch()==13)
				break;
				Personal_Information();
			}
		}
		void View_All_Information()
		{
			system("cls");
			
			cout<<"\n\t\t                   Student Information                 ";
		
			cout<<endl;
			cout<<"Roll Number(NU ID)  = "<<SD.Get_ID()<<endl;
			cout<<"Department          = "<<SD.Get_Degree_Program()<<endl;
			cout<<"Batch               = "<<SD.Get_Batch()<<endl;
			cout<<"Name                = "<<SD.Get_Name()<<endl;
			cout<<"Phone Number        = "<<SD.Get_Phone_Number()<<endl;
			cout<<"CNIC Number         = "<<SD.Get_CNIC_Number()<<endl;
			cout<<"Email               = "<<SD.Get_Email()<<endl;
			cout<<"Father Name         = "<<SD.Get_Father_Name()<<endl;
			cout<<"Father Phone Number = "<<SD.Get_Father_Phone_Number()<<endl;
			cout<<"Father CNIC Number  = "<<SD.Get_Father_CNIC_Number()<<endl;
			cout<<"Father Email        = "<<SD.Get_Father_Email()<<endl;
			cout<<"House Address       = "<<SD.Get_Address()<<endl;
			cout<<"\nEnter BackSpace...";
			while(1)
			if(getch()==8)
			break;
			system("cls");
			Personal_Information();
		}
		void EditInformation()
		{
			system("cls");
			
	        cout<<"\n\t\t                   Student Information                ";
	
			cout<<"\t\t\t     Press BackSpace To Back\n"<<endl;
			cout<<"1) Phone Number"<<endl;
			cout<<"2) Address\n"<<endl;
			cout<<"Choose Any Option... ";
			S_Option=getch();
			if(S_Option==49)
			{
				string input;
				cin>>input;
				SD.Set_Phone_Number(input);
				Write_Data();
			}
			else if(S_Option==50)
			EditInformation();
		}
};
class Teacher:virtual private Student_Data
{
	private:
		int T_Option;
	protected:
	public:
		void Get_Option(int const &Option)
		{
			system("cls");
			
	        cout<<"\n\t\t                   Student Information                ";
		
			cout<<endl;
			string ID;
			cout<<"Enter Stuent ID : ";
			cin>>ID;
			Read_Data(ID);
			if(Option==49)
			Personal_Information();
			return;
		}
		void Personal_Information()
		{
			system("cls");
		
	        cout<<"\n\t\t                  Your Information              ";
		
			cout<<"\t\t\t     Press BackSpace To Back\n"<<endl;
			cout<<"1) View All Information"<<endl;
			cout<<"2) Update Information\n"<<endl;
			cout<<"Choose Any Option... ";
			T_Option=getch();
			if(T_Option==49)
			View_All_Information();
			else if(T_Option==50)
			EditInformation();
			else if(T_Option==51)
			cout<<"NotDone"<<endl;
			else if(T_Option==8)
			return;
			else
			{
				system("cls");
				
				cout<<"***** INVALID INPUT *****";
				for(int i=0;i<80;i++)
				cout<<endl;
				cout<<"Press Enter...";
				while(1)
				if(getch()==13)
				break;
				Personal_Information();
			}
		}
		void View_All_Information()
		{
			system("cls");
			cout<<"\n\t\t                 Student Details              ";
			cout<<endl;
			cout<<"Student Roll Number(NU ID)  = "<<SD.Get_ID()<<endl;
			cout<<"Student Department          = "<<SD.Get_Degree_Program()<<endl;
			cout<<"Student Batch               = "<<SD.Get_Batch()<<endl;
			cout<<"Student Name                = "<<SD.Get_Name()<<endl;
			cout<<"Student Phone Number        = "<<SD.Get_Phone_Number()<<endl;
			cout<<"Student CNIC Number         = "<<SD.Get_CNIC_Number()<<endl;
			cout<<"Student Email               = "<<SD.Get_Email()<<endl;
			cout<<"Father Name                 = "<<SD.Get_Father_Name()<<endl;
			cout<<"Father Phone Number         = "<<SD.Get_Father_Phone_Number()<<endl;
			cout<<"Father CNIC Number          = "<<SD.Get_Father_CNIC_Number()<<endl;
			cout<<"Father Email                = "<<SD.Get_Father_Email()<<endl;
			cout<<"\nEnter BackSpace...";
			while(1)
			if(getch()==8)
			break;
			system("cls");
			Personal_Information();
		}
		void EditInformation()
		{
			system("cls");
			for(int i=0;i<80;i++)
			cout<<"-";
	        cout<<"\n\t\t                  Student Details                ";
			for(int i=0;i<80;i++)
			cout<<"-";
			cout<<endl;
			cout<<"\t\t\t     Press BackSpace To Back\n"<<endl;
			cout<<"1) Phone Number"<<endl;
			cout<<"2) Address\n"<<endl;
			cout<<"Choose Any Option... ";
			T_Option=getch();
			if(T_Option==49)
			{
				string input;
				cin>>input;
				SD.Set_Phone_Number(input);
				Write_Data();
			}
			else if(T_Option==50)
			EditInformation();
		}
		
};
class Interface:private Login,public Student,public Teacher
{
	private:
		int I_Option;
	protected:
	public:
		Interface(int const &Type):Login(Type)
		{
			if(Type==49)
			Student_Portal();
			else if(Type==50)
			Teacher_Portal();
		}
		void Student_Portal()
		{
			while(1)
			{
				system("cls");
				
	            cout<<"\n\t\t                   Welcome to Student Portal                ";
				cout<<endl;
				cout<<"1) Student Details"<<endl;
				cout<<"2) Transcript"<<endl;
				cout<<"3) Log Out\n"<<endl;
				cout<<"Choose Any Option... ";
				I_Option=getch();
				if(I_Option==49)
				break;
				else if(I_Option==50)
				Transcript();
				else if(I_Option==51)
				return;
			}
			Student::Get_Option(I_Option);
			Student_Portal();
		}
		void Teacher_Portal()
		{
			while(1)
			{
				system("cls");

	            cout<<"\n\t\t                   Welcome to Teacher Portal                 ";
				cout<<endl;
				cout<<"1) Student Information"<<endl;
				cout<<"2) Transcript"<<endl;
				cout<<"3) Log Out\n"<<endl;
				cout<<"Choose Any Option... ";
				I_Option=getch();
				if(I_Option==49)
				break;
				else if(I_Option==50)
				Transcript();
				else if(I_Option==51)
				return;
			}
			Teacher::Get_Option(I_Option);
			Teacher_Portal();
		}
		void Transcript()
		{
			system("cls");
			cout<<"Not Done"<<endl;
			getch();
		}	
};
int main()
{

    HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE); //just once
	int Type;
	while(1)
	{
		system("cls");
	SetConsoleTextAttribute(color, 10);
	cout<<"\n\n\t\t   *******************************************************************";
	cout<<"\n\t\t                   Welcome to Student Management System                 ";
	cout<<"\n\t\t   *******************************************************************";
     SetConsoleTextAttribute(color, 11);
	cout<<"\n\n\t\t                  Please Select Your User Mode (1/2):               ";
     SetConsoleTextAttribute(color, 12);
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";

	cout<<"1) Student"<<endl;
	cout<<"2) Teacher\n"<<endl;
    SetConsoleTextAttribute(color, 13);
	cout<<"\n\n\t\t                  Press Esc To Exit from the system"<<endl;

		while(1)
		{
			Type=getch();
			if(Type==49|Type==50)
			break;
			else if(Type==27)
			{
				system("cls");
				
	            cout<<"\n\t\t                   Thanks for visiting system!                  ";				
				return 0;
			}
		}
		Interface I(Type);
	}
}
