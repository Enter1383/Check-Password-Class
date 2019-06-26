#include<iostream>

#include"checkpassword.h"


int main(){


	std::cout<<"Hello!"<<std::endl;
	Password pass;
	
	int Counter = 1;

	for (int i=1000;i>100;i++){
		
		
		
		if (Counter == 1){
			
			pass.createpass();
			
			pass.Passcreate(Counter);
		}
		
		
		pass.getpass();
		pass.checkpass();
		
	}
	
	



}
