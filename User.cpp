#include <iostream>
#include <string>

using namespace std;

class User {
	private:
		string name;
		string User_name;
		int User_Id;
		string Password;
		string email;
		string address;
	public:
		User();
		User(string u_name , string u_User_name , int u_User_Id , string u_Password , string u_email , string u_address);
		void addUser();
		void editUser(); 
		void deleteUser();
		void searchUser();
		void chck_offers();
		void request_project();
		
	};
		User::User()
		{
		}
		
		 User::User(string u_name , string u_User_name , int u_User_Id , string u_Password , string u_email , string u_address)
		{
			name = u_name;
			User_name = u_User_name;
			User_Id = u_User_Id;
			Password = u_Password;
			email = u_email;
			address = u_address;
			
			cout<<"Name: " << name << endl<< "User Name:" << User_name <<endl<< "User ID:" << User_Id<<endl<< "Password: "<<Password<<endl<< "Email: "<<email<<endl<< "Address: "<<address<<endl<<endl;	
			
		}
		void User::addUser(){
			cout<<"User added Successfully"<<endl;
		}
		
		
		void User::deleteUser(){
			cout<<"User deleted Successfully"<<endl;
		}
		
		
		void User::editUser(){
			cout<<"User edited Successfully"<<endl;
		}
		
		void User::searchUser(){
			cout<<"User searched"<<endl;
		}
		
		void User::chck_offers(){
			cout<<"User checked offers"<<endl;
		}
		
		void User::request_project(){
			cout<<"User requested a project"<<endl;
		}
		
		
		int main()
		{
			
			User u1("Sahla", "Sahla123" , 123 , "sah789" , "sahla@gmail.com" , "34, benedict street");
				
			u1.addUser();
			u1.deleteUser();
			u1.editUser();
			u1.searchUser();
			u1.chck_offers();
			u1.request_project();
				
		}
