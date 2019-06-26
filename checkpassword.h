#include<iostream>

class Password{
	
	public:
	
		
		void createpass(){
				std::cout<<"Enter A Password For Your App: ";
				std::cin>>PassGetted;		
		}
		
		void getpass(){

					std::cout<<"Please Enter The Password: ";
					std::cin>>Password;
					}
						
		void checkpass(){
				if(Password == PassGetted)
					std::cout<<"Welcome To App!"<<std::endl;

				else
					std::cout<<"The Password Not Correct!"<<std::endl;			

				}
				
		void Passcreate(int &a){
	
			a++;
		}
		
	private:

	std::string Password;
	std::string PassGetted;
	
};
