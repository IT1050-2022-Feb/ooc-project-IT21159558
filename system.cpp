#include <iostream>
#include <cstring>
using namespace std;
class system_{
	private:
		int system_Id;
		string email;
		
	public:	
	system_();
	system_(int sid,string s_email);
	void getdetails();
	void email_verification();
	void update_database();
	void chck_manager_login();
	
};


	system_::system_(){
	}
	system_::system_(int sid,string s_email)
	{
        system_Id=sid;
        email=s_email;
    }
void system_::getdetails(){
	cout<<"Id: "<<system_Id<<endl<<"email: "<<email<<endl<<endl;
}

void system_::email_verification()
		{
			cout<<"System sends an email verification"<<endl;
			
		}
		
		void system_::update_database()
		{
			cout<<"System updates the database"<<endl;
		}	
		
		void system_::chck_manager_login()	
		{
			cout<<"System checks manager login"<<endl;
		}
 

int main()
		{
	
			system_ s1(110,"123.gmail.com");
			s1.getdetails();
			s1.chck_manager_login();
			s1.email_verification();
			s1.update_database();
		
		}
