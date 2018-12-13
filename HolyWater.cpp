#include<iostream>
#include<conio.h>
#include <sstream>
#include<cstring>
#include<fstream>
#include <stdlib.h>
#include <windows.h>
#include<ctime>

		//Decleration of Global Functions

using namespace std; 
int main();
void gotoxy(int,int);
void U();
void L();
void R();
void B();
void U_no();
void L_no();
void R_no();
void B_no();
		//Decleration of Global DataTypes
const double SANITATION_FEE = 20.41;
const double STORM_WATER_FEE = 5.80;

		//Structure for Saving data in the file
struct info{
    char name[50];
	char area[50];
	int block;
	string names;
}record[100];
class design{
	private:

	public:
		void heading_no_space(){
			cout<<"\t\t\t\t\t\t\t   _     _  _______  _______  _______  ______   "<<endl;
			cout<<"\t\t\t\t\t\t\t  | | _ | ||   _   ||       ||       ||    _ |  "<<endl;
			cout<<"\t\t\t\t\t\t\t  | || || ||  |_|  ||_     _||    ___||   | ||  "<<endl;
			cout<<"\t\t\t\t\t\t\t  |       ||       |  |   |  |   |___ |   |_||_ "<<endl;
			cout<<"\t\t\t\t\t\t\t  |       ||       |  |   |  |    ___||    __  |"<<endl;
			cout<<"\t\t\t\t\t\t\t  |   _   ||   _   |  |   |  |   |___ |   |  | |"<<endl;
			cout<<"\t\t\t\t\t\t\t  |__| |__||__| |__|  |___|  |_______||___|  |_|"<<endl;

			cout<<"\t\t\t\t\t   __   __  _______  __    _  _______  _______  __   __  _______  __    _  _______ "<<endl;
			cout<<"\t\t\t\t\t  |  |_|  ||   _   ||  |  | ||   _   ||       ||  |_|  ||       ||  |  | ||       |"<<endl;
			cout<<"\t\t\t\t\t  |       ||  |_|  ||   |_| ||  |_|  ||    ___||       ||    ___||   |_| ||_     _|"<<endl;
			cout<<"\t\t\t\t\t  |       ||       ||       ||       ||   | __ |       ||   |___ |       |  |   |  "<<endl;
			cout<<"\t\t\t\t\t  |       ||       ||  _    ||       ||   ||  ||       ||    ___||  _    |  |   |  "<<endl;
			cout<<"\t\t\t\t\t  | ||_|| ||   _   || | |   ||   _   ||   |_| || ||_|| ||   |___ | | |   |  |   |  "<<endl;
			cout<<"\t\t\t\t\t  |_|   |_||__| |__||_|  |__||__| |__||_______||_|   |_||_______||_|  |__|  |___|  "<<endl;

			cout<<"\t\t\t\t\t\t\t   _______  __   __  _______  _______  _______  __   __ "<<endl;
			cout<<"\t\t\t\t\t\t\t  |       ||  | |  ||       ||       ||       ||  |_|  |"<<endl;
			cout<<"\t\t\t\t\t\t\t  |  _____||  |_|  ||  _____||_     _||    ___||       |"<<endl;
			cout<<"\t\t\t\t\t\t\t  | |_____ |       || |_____   |   |  |   |___ |       |"<<endl;
			cout<<"\t\t\t\t\t\t\t  |_____  ||_     _||_____  |  |   |  |    ___||       |"<<endl;
			cout<<"\t\t\t\t\t\t\t   _____| |  |   |   _____| |  |   |  |   |___ | ||_|| |"<<endl;
			cout<<"\t\t\t\t\t\t\t  |_______|  |___|  |_______|  |___|  |_______||_|   |_|"<<endl;

		}
		void heading(){
			
			Sleep(100);
			cout<<"\t\t\t\t\t\t\t   _     _  _______  _______  _______  ______   "<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t\t\t  | | _ | ||   _   ||       ||       ||    _ |  "<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t\t\t  | || || ||  |_|  ||_     _||    ___||   | ||  "<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t\t\t  |       ||       |  |   |  |   |___ |   |_||_ "<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t\t\t  |       ||       |  |   |  |    ___||    __  |"<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t\t\t  |   _   ||   _   |  |   |  |   |___ |   |  | |"<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t\t\t  |__| |__||__| |__|  |___|  |_______||___|  |_|"<<endl;
			Sleep(100);

			Sleep(100);
			cout<<"\t\t\t\t\t   __   __  _______  __    _  _______  _______  __   __  _______  __    _  _______ "<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t  |  |_|  ||   _   ||  |  | ||   _   ||       ||  |_|  ||       ||  |  | ||       |"<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t  |       ||  |_|  ||   |_| ||  |_|  ||    ___||       ||    ___||   |_| ||_     _|"<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t  |       ||       ||       ||       ||   | __ |       ||   |___ |       |  |   |  "<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t  |       ||       ||  _    ||       ||   ||  ||       ||    ___||  _    |  |   |  "<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t  | ||_|| ||   _   || | |   ||   _   ||   |_| || ||_|| ||   |___ | | |   |  |   |  "<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t  |_|   |_||__| |__||_|  |__||__| |__||_______||_|   |_||_______||_|  |__|  |___|  "<<endl;
			Sleep(100);

			Sleep(100);
			cout<<"\t\t\t\t\t\t\t   _______  __   __  _______  _______  _______  __   __ "<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t\t\t  |       ||  | |  ||       ||       ||       ||  |_|  |"<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t\t\t  |  _____||  |_|  ||  _____||_     _||    ___||       |"<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t\t\t  | |_____ |       || |_____   |   |  |   |___ |       |"<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t\t\t  |_____  ||_     _||_____  |  |   |  |    ___||       |"<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t\t\t   _____| |  |   |   _____| |  |   |  |   |___ | ||_|| |"<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t\t\t  |_______|  |___|  |_______|  |___|  |_______||_|   |_|"<<endl;
			Sleep(100);
			
			

		}
		void add(){
			Sleep(100);
			cout<<"\t\t\t   _______  ______   ______     ______   _______  _______  _______  _______  _______  _______  _______ "<<endl;
			Sleep(100);
			cout<<"\t\t\t  |   _   ||      | |      |   |      | |   _   ||       ||   _   ||  _    ||   _   ||       ||       |"<<endl;
			Sleep(100);
			cout<<"\t\t\t  |  |_|  ||  _    ||  _    |  |  _    ||  |_|  ||_     _||  |_|  || |_|   ||  |_|  ||  _____||    ___|"<<endl;
			Sleep(100);
			cout<<"\t\t\t  |       || | |   || | |   |  | | |   ||       |  |   |  |       ||       ||       || |_____ |   |___ "<<endl;
			Sleep(100);
			cout<<"\t\t\t  |       || |_|   || |_|   |  | |_|   ||       |  |   |  |       ||  _   | |       ||_____  ||    ___|"<<endl;
			Sleep(100);
			cout<<"\t\t\t  |   _   ||       ||       |  |       ||   _   |  |   |  |   _   || |_|   ||   _   | _____| ||   |___ "<<endl;
			Sleep(100);
			cout<<"\t\t\t  |__| |__||______| |______|   |______| |__| |__|  |___|  |__| |__||_______||__| |__||_______||_______|"<<endl;
			Sleep(100);
		}
		void del_data(){
			Sleep(70);
			cout<<"\t\t\t\t\t\t   ______   _______  ___      _______  _______  _______                   "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  |      | |       ||   |    |       ||       ||       |                  "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  |  _    ||    ___||   |    |    ___||_     _||    ___|                  "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  | | |   ||   |___ |   |    |   |___   |   |  |   |___                   "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  | |_|   ||    ___||   |___ |    ___|  |   |  |    ___|                  "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  |       ||   |___ |       ||   |___   |   |  |   |___                   "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  |______| |_______||_______||_______|  |___|  |_______|                  "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t   ______   _______  _______  _______  _______  _______  _______  _______ "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t  |      | |   _   ||       ||   _   ||  _    ||   _   ||       ||       |"<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t  |  _    ||  |_|  ||_     _||  |_|  || |_|   ||  |_|  ||  _____||    ___|"<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t  | | |   ||       |  |   |  |       ||       ||       || |_____ |   |___ "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t  | |_|   ||       |  |   |  |       ||  _   | |       ||_____  ||    ___|"<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t  |       ||   _   |  |   |  |   _   || |_|   ||   _   | _____| ||   |___ "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t  |______| |__| |__|  |___|  |__| |__||_______||__| |__||_______||_______|"<<endl;
			Sleep(70);
		}
		void del_data_no_space(){
			cout<<"\t\t\t\t\t\t   ______   _______  ___      _______  _______  _______                   "<<endl;
			cout<<"\t\t\t\t\t\t  |      | |       ||   |    |       ||       ||       |                  "<<endl;
			cout<<"\t\t\t\t\t\t  |  _    ||    ___||   |    |    ___||_     _||    ___|                  "<<endl;
			cout<<"\t\t\t\t\t\t  | | |   ||   |___ |   |    |   |___   |   |  |   |___                   "<<endl;
			cout<<"\t\t\t\t\t\t  | |_|   ||    ___||   |___ |    ___|  |   |  |    ___|                  "<<endl;
			cout<<"\t\t\t\t\t\t  |       ||   |___ |       ||   |___   |   |  |   |___                   "<<endl;
			cout<<"\t\t\t\t\t\t  |______| |_______||_______||_______|  |___|  |_______|                  "<<endl;
			cout<<"\t\t\t\t\t   ______   _______  _______  _______  _______  _______  _______  _______ "<<endl;
			cout<<"\t\t\t\t\t  |      | |   _   ||       ||   _   ||  _    ||   _   ||       ||       |"<<endl;
			cout<<"\t\t\t\t\t  |  _    ||  |_|  ||_     _||  |_|  || |_|   ||  |_|  ||  _____||    ___|"<<endl;
			cout<<"\t\t\t\t\t  | | |   ||       |  |   |  |       ||       ||       || |_____ |   |___ "<<endl;
			cout<<"\t\t\t\t\t  | |_|   ||       |  |   |  |       ||  _   | |       ||_____  ||    ___|"<<endl;
			cout<<"\t\t\t\t\t  |       ||   _   |  |   |  |   _   || |_|   ||   _   | _____| ||   |___ "<<endl;
			cout<<"\t\t\t\t\t  |______| |__| |__|  |___|  |__| |__||_______||__| |__||_______||_______|"<<endl;
		}
		void search(){
			Sleep(70);
			cout<<"\t\t\t\t\t\t\t   _______  _______  _______  ______    _______  __   __                  "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t\t  |       ||       ||   _   ||    _ |  |       ||  | |  |                 "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t\t  |  _____||    ___||  |_|  ||   | ||  |       ||  |_|  |                 "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t\t  | |_____ |   |___ |       ||   |_||_ |       ||       |                 "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t\t  |_____  ||    ___||       ||    __  ||      _||       |                 "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t\t   _____| ||   |___ |   _   ||   |  | ||     |_ |   _   |                 "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t\t  |_______||_______||__| |__||___|  |_||_______||__| |__|                 "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t   ______   _______  _______  _______  _______  _______  _______  _______ "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  |      | |   _   ||       ||   _   ||  _    ||   _   ||       ||       |"<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  |  _    ||  |_|  ||_     _||  |_|  || |_|   ||  |_|  ||  _____||    ___|"<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  | | |   ||       |  |   |  |       ||       ||       || |_____ |   |___ "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  | |_|   ||       |  |   |  |       ||  _   | |       ||_____  ||    ___|"<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  |       ||   _   |  |   |  |   _   || |_|   ||   _   | _____| ||   |___ "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  |______| |__| |__|  |___|  |__| |__||_______||__| |__||_______||_______|"<<endl;
			Sleep(70);
		}
		void search_no_space(){
			cout<<"\t\t\t\t\t\t\t   _______  _______  _______  ______    _______  __   __                  "<<endl;
			cout<<"\t\t\t\t\t\t\t  |       ||       ||   _   ||    _ |  |       ||  | |  |                 "<<endl;
			cout<<"\t\t\t\t\t\t\t  |  _____||    ___||  |_|  ||   | ||  |       ||  |_|  |                 "<<endl;
			cout<<"\t\t\t\t\t\t\t  | |_____ |   |___ |       ||   |_||_ |       ||       |                 "<<endl;
			cout<<"\t\t\t\t\t\t\t  |_____  ||    ___||       ||    __  ||      _||       |                 "<<endl;
			cout<<"\t\t\t\t\t\t\t   _____| ||   |___ |   _   ||   |  | ||     |_ |   _   |                 "<<endl;
			cout<<"\t\t\t\t\t\t\t  |_______||_______||__| |__||___|  |_||_______||__| |__|                 "<<endl;
			cout<<"\t\t\t\t\t\t   ______   _______  _______  _______  _______  _______  _______  _______ "<<endl;
			cout<<"\t\t\t\t\t\t  |      | |   _   ||       ||   _   ||  _    ||   _   ||       ||       |"<<endl;
			cout<<"\t\t\t\t\t\t  |  _    ||  |_|  ||_     _||  |_|  || |_|   ||  |_|  ||  _____||    ___|"<<endl;
			cout<<"\t\t\t\t\t\t  | | |   ||       |  |   |  |       ||       ||       || |_____ |   |___ "<<endl;
			cout<<"\t\t\t\t\t\t  | |_|   ||       |  |   |  |       ||  _   | |       ||_____  ||    ___|"<<endl;
			cout<<"\t\t\t\t\t\t  |       ||   _   |  |   |  |   _   || |_|   ||   _   | _____| ||   |___ "<<endl;
			cout<<"\t\t\t\t\t\t  |______| |__| |__|  |___|  |__| |__||_______||__| |__||_______||_______|"<<endl;
		}
		void bill_head(){
			Sleep(100);
			cout<<"\t\t\t\t\t   _     _  _______  _______  _______  ______   "<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t  | | _ | ||   _   ||       ||       ||    _ |  "<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t  | || || ||  |_|  ||_     _||    ___||   | ||  "<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t  |       ||       |  |   |  |   |___ |   |_||_ "<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t  |       ||       |  |   |  |    ___||    __  |"<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t  |   _   ||   _   |  |   |  |   |___ |   |  | |"<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t  |__| |__||__| |__|  |___|  |_______||___|  |_|"<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t\t   _______  ___   ___      ___                  "<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t\t  |  _    ||   | |   |    |   |                 "<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t\t  | |_|   ||   | |   |    |   |                 "<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t\t  |       ||   | |   |    |   |                 "<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t\t  |  _   | |   | |   |___ |   |___              "<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t\t  | |_|   ||   | |       ||       |             "<<endl;
			Sleep(100);
			cout<<"\t\t\t\t\t\t  |_______||___| |_______||_______|             "<<endl;
			Sleep(100);
		}
		void email_head(){
			Sleep(70);
			cout<<"\t\t\t\t\t\t   _______  _______  __    _  ______   ___   __    _  _______ "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  |       ||       ||  |  | ||      | |   | |  |  | ||       |"<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  |  _____||    ___||   |_| ||  _    ||   | |   |_| ||    ___|"<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  | |_____ |   |___ |       || | |   ||   | |       ||   | __ "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  |_____  ||    ___||  _    || |_|   ||   | |  _    ||   ||  |"<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t   _____| ||   |___ | | |   ||       ||   | | | |   ||   |_| |"<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  |_______||_______||_|  |__||______| |___| |_|  |__||_______|"<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t\t   _______  __   __  _______  ___   ___                       "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t\t  |       ||  |_|  ||   _   ||   | |   |                      "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t\t  |    ___||       ||  |_|  ||   | |   |                      "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t\t  |   |___ |       ||       ||   | |   |                      "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t\t  |    ___||       ||       ||   | |   |___                   "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t\t  |   |___ | ||_|| ||   _   ||   | |       |                  "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t\t  |_______||_|   |_||__| |__||___| |_______|                  "<<endl;
			Sleep(70);
		}
		void print_out(){
			Sleep(70);
			cout<<"\t\t\t\t\t\t   _______  ______    ___   __    _  _______  ___   __    _  _______ "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  |       ||    _ |  |   | |  |  | ||       ||   | |  |  | ||       |"<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  |    _  ||   | ||  |   | |   |_| ||_     _||   | |   |_| ||    ___|"<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  |   |_| ||   |_||_ |   | |       |  |   |  |   | |       ||   | __ "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  |    ___||    __  ||   | |  _    |  |   |  |   | |  _    ||   ||  |"<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  |   |    |   |  | ||   | | | |   |  |   |  |   | | | |   ||   |_| |"<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  |___|    |___|  |_||___| |_|  |__|  |___|  |___| |_|  |__||_______|"<<endl;
			Sleep(70);
		}
		void put(){
			Sleep(70);
			cout<<"\t\t\t\t\t\t   ______   _______  _______  _______  _______  _______  _______  _______ "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  |      | |   _   ||       ||   _   ||  _    ||   _   ||       ||       |"<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  |  _    ||  |_|  ||_     _||  |_|  || |_|   ||  |_|  ||  _____||    ___|"<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  | | |   ||       |  |   |  |       ||       ||       || |_____ |   |___ "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  | |_|   ||       |  |   |  |       ||  _   | |       ||_____  ||    ___|"<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  |       ||   _   |  |   |  |   _   || |_|   ||   _   | _____| ||   |___ "<<endl;
			Sleep(70);
			cout<<"\t\t\t\t\t\t  |______| |__| |__|  |___|  |__| |__||_______||__| |__||_______||_______|"<<endl;
			Sleep(70);

		}
		void end(){
						
			cout<<"\t\t\t\t   _______  __   __  _______  __    _  ___   _  _______    _______  _______  ______   "<<endl;
			cout<<"\t\t\t\t  |       ||  | |  ||   _   ||  |  | ||   | | ||       |  |       ||       ||    _ |  "<<endl;
			cout<<"\t\t\t\t  |_     _||  |_|  ||  |_|  ||   |_| ||   |_| ||  _____|  |    ___||   _   ||   | ||  "<<endl;
			cout<<"\t\t\t\t    |   |  |       ||       ||       ||      _|| |_____   |   |___ |  | |  ||   |_||_ "<<endl;
			cout<<"\t\t\t\t    |   |  |       ||       ||  _    ||     |_ |_____  |  |    ___||  |_|  ||    __  |"<<endl;
			cout<<"\t\t\t\t    |   |  |   _   ||   _   || | |   ||    _  | _____| |  |   |    |       ||   |  | |"<<endl;
			cout<<"\t\t\t\t    |___|  |__| |__||__| |__||_|  |__||___| |_||_______|  |___|    |_______||___|  |_|"<<endl;
			cout<<"\t\t\t\t\t\t   __   __  _______  ___   __    _  _______                                           "<<endl;
			cout<<"\t\t\t\t\t\t  |  | |  ||       ||   | |  |  | ||       |                                          "<<endl;
			cout<<"\t\t\t\t\t\t  |  | |  ||  _____||   | |   |_| ||    ___|                                          "<<endl;
			cout<<"\t\t\t\t\t\t  |  |_|  || |_____ |   | |       ||   | __                                           "<<endl;
			cout<<"\t\t\t\t\t\t  |       ||_____  ||   | |  _    ||   ||  |                                          "<<endl;
			cout<<"\t\t\t\t\t\t  |       | _____| ||   | | | |   ||   |_| |                                          "<<endl;
			cout<<"\t\t\t\t\t\t  |_______||_______||___| |_|  |__||_______|                                          "<<endl;

		}
};
		//Admin_panel has an inherited Bill class
class bill{
	private:
		int account_number;
    	double gallons_used;
    	double meter_size;
    	double water_cost;
    	double base_water_charge;
    	double water_per_gallon;
    	double total_cost;
	public:
		double METER_SIZE(double meter_size){
			double base_water_charge;

			if( meter_size == 0.625)
			    base_water_charge = 3.61;
			else if( meter_size == 0.75)
			    base_water_charge = 4.23;
			else if( meter_size == 1.0)
			    base_water_charge = 6.14;

			return base_water_charge;
		}
		int GALLONS_USED(double gallons_used){
			double water_cost;

			if( gallons_used <= 4000)
			    water_cost = ( ( 4000 - gallons_used) * 0.00141 );
			else if( gallons_used >= 4001 && gallons_used <= 10000)
			    water_cost = ( (gallons_used - 4000) * 0.00231 + (4000 * 0.00141) );
			else if( gallons_used >= 10001 && gallons_used <= 15000)
			    water_cost = ( (gallons_used - 10000) * 0.00320 + (10000 - 4000) * 0.00231 + (4000 * 0.00141) );
			else
			    water_cost = ( (gallons_used - 15000) * 0.00370 + (15000 - 10000) * 0.00320 + (10000 - 4000) * 0.00231 + (4000 * 0.00141) );

			return water_cost;
		}
		double TOTAL_COST(double total_cost, double base_water_charge, double water_cost){
    		total_cost = base_water_charge + water_cost + STORM_WATER_FEE + SANITATION_FEE;

    		return total_cost;
		}
		void bill_cal(){
			ofstream file;
			file.open("bill.txt");
			char press;


			file<<"   _______  ___   ___      ___     "<<endl;
			file<<"  |  _    ||   | |   |    |   |    "<<endl;
			file<<"  | |_|   ||   | |   |    |   |    "<<endl;
			file<<"  |       ||   | |   |    |   |    "<<endl;
			file<<"  |  _   | |   | |   |___ |   |___ "<<endl;
			file<<"  | |_|   ||   | |       ||       |"<<endl;
			file<<"  |_______||___| |_______||_______|"<<endl;



			cout<<"Example 0900XX"<<endl;
			cout<<"Enter Your Account Number(XX replaced with ID): "<<endl;
			cin>>account_number;
			file<<"Account Number: "<<account_number<<endl;

			cout<<"Sizes (0.18m) (0.05m) (0.2m)"<<endl;
			cout<<"Enter Meter Size: "<<endl;
			cin>>meter_size;
			if(meter_size==0.18 || meter_size==0.05 || meter_size==0.2){
				file<<"Meter-Size: "<<meter_size<<endl;
	
				cout << "Enter your total gallons used: " << endl;
		    	cin >> gallons_used;
		    	file<<"Gallons Used: "<<gallons_used<<endl;
	
		    	base_water_charge = METER_SIZE(meter_size);
	        	gallons_used = GALLONS_USED(gallons_used);
	        	total_cost = TOTAL_COST(total_cost, base_water_charge, water_cost);
	
				cout <<"Your Total Cost is: "<<total_cost<< endl;
				file<<"Total Cost: "<<total_cost<<endl;
	
				file.close();
			}
			else{
				cout<<"Wrong Input..."<<endl;
			}
		}
		void bill_print(){
			
			ofstream file;
			file.open("bill1.txt");
			char press;
			char choice;
			cout<<"Calculate the Bill...(y/n)"<<endl;
			cin>>choice;
			if(choice=='y'){
			
			


			file<<"   _______  ___   ___      ___     "<<endl;
			file<<"  |  _    ||   | |   |    |   |    "<<endl;
			file<<"  | |_|   ||   | |   |    |   |    "<<endl;
			file<<"  |       ||   | |   |    |   |    "<<endl;
			file<<"  |  _   | |   | |   |___ |   |___ "<<endl;
			file<<"  | |_|   ||   | |       ||       |"<<endl;
			file<<"  |_______||___| |_______||_______|"<<endl;




			cout<<"Example 0900XX"<<endl;
			cout<<"Enter Your Account Number(XX replaced with ID): "<<endl;
			cin>>account_number;
			file<<"Account Number: "<<account_number<<endl;

			cout<<"Sizes (0.18m) (0.05m) (0.2m)"<<endl;
			cout<<"Enter Meter Size: "<<endl;
			cin>>meter_size;
			if(meter_size==0.18 || meter_size==0.05 || meter_size==0.2){
				file<<"Meter-Size: "<<meter_size<<endl;
	
				cout << "Enter your total gallons used: " << endl;
		    	cin >> gallons_used;
		    	file<<"Gallons Used: "<<gallons_used<<endl;
	
		    	base_water_charge = METER_SIZE(meter_size);
	        	gallons_used = GALLONS_USED(gallons_used);
	        	total_cost = TOTAL_COST(total_cost, base_water_charge, water_cost);
	
				cout <<"Your Total Cost is: "<<total_cost<<endl;
				file<<"Total Cost: "<<total_cost<<endl;
	
				file.close();
				cout<<"Press Enter To Print...";
				getch();
				system("notepad /p bill1.txt");
				cout<<"Printing..";

				system("cls");
				}
			else{
					cout<<"Wrong Input..."<<endl;
			}
			}
		else{
			cout<<"Break...";
			getch();
			system("notepad /p bill1.txt");
			cout<<"Printing..";

			system("cls");	
		}


			do{
				//Recalling main
				cout<<"To go back to Main Menu...Press b"<<endl;
				cout<<"To exit the program...Press e"<<endl;
				cin>>press;
				if(press=='b'){
					return;
				}
				else if(press=='e'){
					exit(1);
				}
				else{
					cout<<"Wrong choice"<<endl;
				}
			}while(press=='b' || press=='e');
		}
		void back_end_copy_bill(){
			ifstream kaz;
			ofstream temp1;
			kaz.open("bill1.txt");
			temp1.open("temp1.txt");
			string line;
			
			while(getline(kaz,line)){
				temp1<<line<<endl;
			}
			temp1.close();
			kaz.close();
			remove("bill1.txt");
			rename("temp1.txt","bill1.txt");
			cout<<endl;
		}
};
		//Admin_panel has an inherited email class 
class email{
	private:
		//char mail_address_notify[50];
		//char mail_address_bill[50];
		bill obj;
	public:
		void send_notification(){
			char press;
			string rcpnt;
            char *c;
			stringstream command;
			cout<<"Enter your email tu recieve notification : "<<endl;
			cin>>rcpnt;
		 	command << "curl smtp://smtp.gmail.com:587 -v --mail-from \"testedwebb@gmail.com\" --mail-rcpt \""<<rcpnt<<"\" --ssl -u testedwebb@gmail.com:Ultracloud -T \"ATTACHMENT.txt\" -k --anyauth";
    		WinExec(command.str().c_str(), SW_HIDE);
    		//c= "curl smtp://smtp.gmail.com:587 -v --mail-from \"syedshameersarwar@gmail.com\" --mail-rcpt \"rkazim79@gmail.com\" --ssl -u syedshameersarwar@gmail.com:mathswithwick123:D -T \"ATTACHMENT.txt\" -k --anyauth";
    		//WinExec(c, SW_HIDE);
    		//system("cls");
    		do{
				//Recalling main
				cout<<"To go back to Main Menu...Press b"<<endl;
				cout<<"To exit the program...Press e"<<endl;
				cin>>press;
				if(press=='b'){
					return;
				}
				else if(press=='e'){
					exit(1);
				}
				else{
					cout<<"Wrong choice"<<endl;
				}
			}while(press=='b' || press=='e');
		}
		void send_bill(){
			obj.back_end_copy_bill();
			char press;
			string rcpnt;
			char choice;
            char *c;
			stringstream command;
			cout<<"Calculate the Bill...(y/n)"<<endl;
			cin>>choice;
			if(choice=='y'){
				obj.bill_cal();
			}
			cout<<"Enter your email tu recieve bill : "<<endl;
			cin>>rcpnt;
			command << "curl smtp://smtp.gmail.com:587 -v --mail-from \"testedwebb@gmail.com\" --mail-rcpt \""<<rcpnt<<"\" --ssl -u testedwebb@gmail.com:Ultracloud -T \"bill1.txt\" -k --anyauth";
	    	WinExec(command.str().c_str(), SW_HIDE);
    		do{
				//Recalling main
				cout<<"To go back to Main Menu...Press b"<<endl;
				cout<<"To exit the program...Press e"<<endl;
				cin>>press;
				if(press=='b'){
					return;
				}
				else if(press=='e'){
					exit(1);
				}
				else{
					cout<<"Wrong choice"<<endl;
				}
			}while(press=='b' || press=='e');
		}
};
		//Admin_panel class composition in admin class 
class admin_panel:public email, public bill{
	public:
		int time;
		int num;
	public:
		admin_panel(){
			time=24;
		}
		void put_data(int flag=0){
			string temp;
			char press;
			ifstream kaz("kazim.txt");
			if(kaz.is_open()){
				while(getline(kaz,temp)){
					cout<<temp<<endl;
				}
				kaz.close();
			}
			else{
				cout<<"unable to read!"<<endl;
			}
			if(flag==0){
				do{
					//Recalling main
					cout<<"To go back to Main Menu...Press b"<<endl;
					cout<<"To exit the program...Press e"<<endl;
					cin>>press;
					if(press=='b'){
						return;
					}
					else if(press=='e'){
						exit(1);
					}
					else{
						cout<<"Wrong choice"<<endl;
					}
				}while(press=='b' || press=='e');
			}
			else{
				do{
					//Recalling main
					cout<<"To go back to Main Menu...Press b"<<endl;
					cout<<"To exit the program...Press e"<<endl;
					cin>>press;
					if(press=='b'){
						return;
					}
					else if(press=='e'){
						exit(1);
					}
					else{
						cout<<"Wrong choice"<<endl;
					}
				}while(press=='b' || press=='e');
			}
		}

		void getdata(){
			//string names;
			struct info;
			int i,pak;
			int members=0;
			design kaz;
			char press;
			fstream file;
			file.open("kazim.txt",std::fstream::in | std::fstream::out | std::fstream::app);
			
			gotoxy(30,10);
			cout<<"How Many Members to add: "<<endl;
			gotoxy(55,10);
			cin>>members;

			for(i=0;i<members;i++){
				system("cls");
				num=rand()%34+66;
				gotoxy(30,11);
				//cout<<"ID Number: "<<num<<endl;
				//file<<num<<endl;

				gotoxy(30,12);
				cout<<"Name: "<<endl;
				pak=0;
				gotoxy(36,12);
				fflush(stdin);
				cin.getline(record[i].name,50);
				//file<<"Name: "<<record[i].name<<endl;

				gotoxy(30,13);
				cout<<"Area: "<<endl;
				gotoxy(36,13);
				cin.getline(record[i].area,50);
				fflush(stdin);
				//file<<"Area: "<<record[i].area<<endl;

				gotoxy(30,14);
				cout<<"Block(1-15): "<<endl;
				gotoxy(45,14);
				cin>>record[i].block;
				if(record[i].block>0 && record[i].block<=15){
					pak=1;
					//file<<"Block: "<<record[i].block<<endl;
					fflush(stdin);
				}
				else{
					gotoxy(30,15);	
					cout<<"Wrong Block Input!"<<endl;
				}

				//Automatic Assigned Time
				if(pak==1){
					time=((24)-(record[i].block));
					if(time<=12){
						file<<num<<endl;
						file<<"Name: "<<record[i].name<<endl;
						file<<"Area: "<<record[i].area<<endl;
						file<<"Block: "<<record[i].block<<endl;
						gotoxy(30,16);
						cout<<"Water Timing: "<<time<<":00 a.m"<<endl;
						file<<"Water Timing: "<<time<<":00 a.m"<<endl;
						gotoxy(30,17);
						cout<<"Unique ID is: "<<num<<endl;
					}
					else{
						file<<num<<endl;
						file<<"Name: "<<record[i].name<<endl;
						file<<"Area: "<<record[i].area<<endl;
						file<<"Block: "<<record[i].block<<endl;
						gotoxy(30,16);
						cout<<"Water Timing: "<<time<<":00 p.m"<<endl;
					 	file<<"Water Timing: "<<time<<":00 p.m"<<endl;
					 	gotoxy(30,17);
						cout<<"Unique ID is: "<<num<<endl;
					}
				}
				file<<endl;
				file<<endl;
			}
			file.close();
			do{
				//Recalling main
				gotoxy(30,20);
				cout<<"To go back to Main Menu...Press b"<<endl;
				gotoxy(30,21);
				cout<<"To exit the program...Press e"<<endl;
				gotoxy(30,22);
				cout<<"Choice: "<<endl;
				gotoxy(37,22);
				cin>>press;
				if(press=='b'){
					return;
				}
				else if(press=='e'){
					exit(1);
				}
				else{
					gotoxy(30,22);
					cout<<"Wrong choice"<<endl;
				}
			}while(press=='b' || press=='e');
	}
		void search_data(int place=0){
			string temp;
			string info;
			string ID;
			char press;
			char search_again;
			design haz;
			do{
				system("cls");
				haz.search_no_space();
				ifstream kaz("kazim.txt");
				bool flag=true;
				ID="";
				gotoxy(50,15);
				cout<<"ID-Number:";
				gotoxy(60,15);
				cin>>ID;
				if(kaz.is_open()){
					while(getline(kaz,temp)){
						if(temp==ID){
							flag=true;
							getline(kaz,info);
							gotoxy(50,17);
							cout<<info<<endl;
			
							getline(kaz,info);
							gotoxy(50,18);
							cout<<info<<endl;
							
							getline(kaz,info);
							gotoxy(50,19);
							cout<<info<<endl;
							
							getline(kaz,info);
							gotoxy(50,20);
							cout<<info<<endl;
							break;
						}
						else{
							flag=false;
						}
					}
					if(flag==false)
					{
						gotoxy(50,20);
						cout<<"Searched ID does not exist"<<endl;

					}
				}
			if(place==0){
				gotoxy(50,22);
				cout<<"Search Again?....Press s."<<endl;
				gotoxy(50,23);
				cout<<"To go back to Main Menu...Press b"<<endl;
				gotoxy(50,24);
				cout<<"To exit the program...Press e"<<endl;
				gotoxy(50,26);
				cout<<"Choice: "<<endl;
				gotoxy(57,26);
				cin>>search_again;
	
				if(search_again=='b'){
					return;
				}
				else if(search_again=='e'){
					exit(1);
				}
				else{
					cout<<"Wrong choice"<<endl;
				}
			}
			else{
				gotoxy(50,22);
				cout<<"Search Again?....Press s."<<endl;
				gotoxy(50,23);
				cout<<"To go back to Main Menu...Press b"<<endl;
				gotoxy(50,24);
				cout<<"To exit the program...Press e"<<endl;
				gotoxy(50,26);
				cout<<"Choice:";
				gotoxy(57,26);
				cin>>search_again;
	
				if(search_again=='b'){
					return;
				}
				else if(search_again=='e'){
					exit(1);
				}
				else{
					cout<<"Wrong choice"<<endl;
				}
			}
		kaz.close();
		}while(search_again=='s' || search_again=='b' ||search_again=='e');
			
}
		void del_data(){

			int skip=0;
			string deleteline;
			string line;
			char press;
			design hm;
			l:
			system("cls");
			hm.del_data_no_space();
			ifstream kaz;
			ofstream temp;
			bool khan=false;
			kaz.open("kazim.txt");
			temp.open("temp.txt");
			gotoxy(35,15);
			cout<<"Enter ID: "<<endl;
			gotoxy(50,15);
			cin>>deleteline;
			while(getline(kaz,line)){
				if((line != deleteline) && !(skip>0)){
					temp<<line<<endl;
				}
				else{
					if(skip==0){
						skip=4;
						khan=true;
						
					}
					else{
						--skip;
					}
				}
			}
			if(khan==true){
				gotoxy(38,16);
				cout<<"User has been deleted from the database"<<endl;
			}
			else{
				gotoxy(38,16);
				cout<<"User was not found in database"<<endl;
			}
			temp.close();
			kaz.close();
			remove("kazim.txt");
			rename("temp.txt","kazim.txt");
			cout<<endl;

			do{
				//Recalling main
				gotoxy(35,17);
				cout<<"To go back to Main Menu...Press b"<<endl;
				gotoxy(35,18);
				cout<<"To Delete again...Press a"<<endl;
				gotoxy(35,19);
				cout<<"To exit the program...Press e"<<endl;
				gotoxy(35,20);
				cout<<"Choice: ";
				gotoxy(42,20);
				cin>>press;
				if(press=='b'){
					return;
				}
				else if(press=='e'){
					exit(1);
				}
				else if(press=='a'){
					goto l;
				}
				else{
					gotoxy(35,21);
					cout<<"Wrong choice"<<endl;
				}
			}while(press=='b' || press=='e' || press=='a');
		}
};
class user_panel:public admin_panel{
	private:

	public:
				//Declered The get_data() fucntion again because we have restricted the user to only add one member at a time.
			void get_data(int flag=0){
			//string names;
			struct info;
			int i,pak;
			int members=1;
			design kaz;
			char press;
			fstream file;
			file.open("kazim.txt",std::fstream::in | std::fstream::out | std::fstream::app);

			for(i=0;i<members;i++){
				system("cls");
				num=rand()%34+66;
				gotoxy(30,11);
				//cout<<"ID Number: "<<num<<endl;
				//file<<num<<endl;

				gotoxy(30,12);
				cout<<"Name: "<<endl;
				pak=0;
				gotoxy(36,12);
				fflush(stdin);
				cin.getline(record[i].name,50);
				//file<<"Name: "<<record[i].name<<endl;

				gotoxy(30,13);
				cout<<"Area: "<<endl;
				gotoxy(36,13);
				cin.getline(record[i].area,50);
				fflush(stdin);
				//file<<"Area: "<<record[i].area<<endl;

				gotoxy(30,14);
				cout<<"Block(1-15): "<<endl;
				gotoxy(45,14);
				cin>>record[i].block;
				if(record[i].block>0 && record[i].block<=15){
					pak=1;
					//file<<"Block: "<<record[i].block<<endl;
					fflush(stdin);
				}
				else{
					gotoxy(30,15);
					cout<<"Wrong Block Input!"<<endl;
				}

				//Automatic Assigned Time
				if(pak==1){
					time=((24)-(record[i].block));
					if(time<=12){
						file<<num<<endl;
						file<<"Name: "<<record[i].name<<endl;
						file<<"Area: "<<record[i].area<<endl;
						file<<"Block: "<<record[i].block<<endl;
						gotoxy(30,16);
						cout<<"Water Timing: "<<time<<":00 a.m"<<endl;
						file<<"Water Timing: "<<time<<":00 a.m"<<endl;
						gotoxy(30,17);
						cout<<"Unique ID is: "<<num<<endl;
					}
					else{
						file<<num<<endl;
						file<<"Name: "<<record[i].name<<endl;
						file<<"Area: "<<record[i].area<<endl;
						file<<"Block: "<<record[i].block<<endl;
						gotoxy(30,16);
						cout<<"Water Timing: "<<time<<":00 p.m"<<endl;
					 	file<<"Water Timing: "<<time<<":00 p.m"<<endl;
					 	gotoxy(30,17);
						cout<<"Unique ID is: "<<num<<endl;
					}
				}
				file<<endl;
				file<<endl;
			}
			file.close();
			do{
				//Recalling main
				gotoxy(30,19);
				cout<<"To go back to Main Menu...Press b"<<endl;
				gotoxy(30,20);
				cout<<"To exit the program...Press e"<<endl;
				gotoxy(30,21);
				cout<<"Choice: "<<endl;
				gotoxy(37,21);
				cin>>press;
				if(press=='b'){
					return;
				}
				else if(press=='e'){
					exit(1);
				}
				else{
					gotoxy(30,22);
					cout<<"Wrong choice"<<endl;
				}
			}while(press=='b' || press=='e');
	}
		void search_data(int flag=0){
			admin_panel::search_data(1);
		}
		void put_data(int flag=0){
			admin_panel::put_data(1);
		}
};
class admin:public design{
	private:
		char name[50];
		char pass[50];
		int chance;
		admin_panel	kaz1;
		user_panel	kaz2;
		design		kaz3;
	public:
		admin(){
			chance=1;
		}
		void login_admin(){
			char ch;
			char another;
			int choice;
			do{
				int i=0;
				system("cls");
				kaz3.heading_no_space();
				U_no();
				L_no();
				R_no();
				B_no();
				gotoxy(50,25);
				cout<<"Enter Name: "<<endl;
				gotoxy(62,25);
				cin>>name;

				gotoxy(50,26);
				cout<<"Enter Password: "<<endl;
				gotoxy(62,26);
				while((ch=getch())!=13){

					if(ch==8){
					    	if(i>0){

					    	cout<<"\b \b";
					    	i--;
					    }
					}
					else{
						pass[i++]=ch;
						gotoxy(66,26);
				    	cout<<"*";
				   }

				  }
				  pass[i]='\0';
				cout<<endl;

				if(strcmp(name,"kazim")==0 && strcmp(pass,"server")==0){
					menu();
				}
				else{
					if(chance!=5){
						cout<<"Wrong Input....("<<chance<<"/5)"<<endl;
						cout<<"Try Again(y/n)";
						cin>>another;
						chance++;
					}
					else{
						exit(1);
					}
				}
			}while(another=='y');
		}
		/*void change_admin(){
			cout<<"Enter Previous Username and Password"<<endl;
			cout<<"Name: ";
			cin>>name;
			cout<<endl;

			cout<<"Password: ";
			cin>>pass;
			cout<<endl;

			if(strcmp(name,"kazim")==0 && strcmp(pass,"server")==0){
				cout<<"New Username: ";
				cin>>name;
				cout<<endl;
				cout<<"New Password: ";
				cin>>pass;
				cout<<endl;
			}
		}*/
		void menu(){
			//decleration
			int choice;
			char another;
			
			//Options
			n:
			do{
				system("cls");
				design::heading_no_space();
				U_no();
				L_no();
				R_no();
				B_no();
				gotoxy(50,25);
				cout<<"1) Enter New Members"<<endl;
				gotoxy(50,26);
				cout<<"2) Display All Members"<<endl;
				gotoxy(50,27);
				cout<<"3) Search Member"<<endl;
				gotoxy(50,28);
				cout<<"4) Delete Member"<<endl;
				gotoxy(50,29);
				cout<<"5) Notify Member"<<endl;
				gotoxy(50,30);
				cout<<"6) Calculate Bill and Mail"<<endl;
				gotoxy(50,31);
				cout<<"7) Calculate Bill and Printout(hard copy)"<<endl;
				gotoxy(50,32);
				cout<<"8) Exit pls"<<endl;
				cout<<endl;
				gotoxy(50,33);
				cout<<"0) Main Screen"<<endl;
				
				gotoxy(50,34);
				cout<<"Choice: ";
				gotoxy(57,34);
				cin>>choice;
				system("cls");
				switch(choice){
					case 1:
						design::add();
						kaz1.getdata();
						break;
					case 2:
						design::put();
						kaz1.put_data();
						break;
					case 3:
						design::search();
						kaz1.search_data();
						break;
					case 4:
						design::del_data();
						kaz1.del_data();
						break;
					case 5:
						design::email_head();
						kaz1.send_notification();
						break;
					case 6:
						design::bill_head();
						kaz1.send_bill();
						kaz1.back_end_copy_bill();
						break;
					case 7:
						design::print_out();
						kaz1.bill_print();
						break;
					case 8:
						design::end();
						exit(1);
					case 0:
						main();
						break;
					default:
						cout<<"Wrong Option"<<endl;
				}
				goto n;
				cout<<"Want to continue...(y/n)"<<endl;
				cin>>another;
			}while(another=='y');
		}
		void user_menu(){
			int choice;
			char another;
			k:
			do{
				system("cls");
				design::heading_no_space();
				U_no();
				L_no();
				R_no();
				B_no();
				gotoxy(50,25);
				cout<<"1)Get Register"<<endl;
				gotoxy(50,26);
				cout<<"2)Display Users"<<endl;
				gotoxy(50,27);
				cout<<"3)Search User"<<endl;
				gotoxy(50,28);
				cout<<"4) Calculate Bill and Mail"<<endl;
				gotoxy(50,29);
				cout<<"5) Calculate Bill and Printout(hard copy)"<<endl;
				gotoxy(50,30);
				cout<<"6) Exit pls"<<endl;
				gotoxy(50,31);
				cout<<endl;
				gotoxy(50,32);
				cout<<"0) Main Screen"<<endl;
				
				gotoxy(50,33);
				cout<<"Choice:";
				gotoxy(57,33);
				cin>>choice;
				system("cls");
				
				switch(choice){
					case 1:
						design::add();
						kaz2.get_data(1);
						break;
					case 2:
						design::put();
						kaz2.put_data(1);
						break;
					case 3:
						design::search();
						kaz2.search_data(1);
						break;
					case 4:
						design::bill_head();
						kaz2.send_bill();
						kaz2.back_end_copy_bill();
						break;
					case 5:
						design::print_out();
						kaz2.bill_print();
						break;
					case 6:
						design::end();
						exit(1);
					case 0:
						main();
						break;
					default:
						cout<<"Wrong Choice"<<endl;
				}
				goto k;
				cout<<"Want to continue...(y/n)"<<endl;
				cin>>another;
			}while(another=='y');
		}
};
int main(){
	admin kaz;
	design kaz2;
	
	int choice;
	char another;
	kaz2.heading();
	U();
	L();
	R();
	B();
	
	gotoxy(50,25);
	cout<<"1) Admin Panel"<<endl;
	gotoxy(50,26);
	cout<<"2) User Panel"<<endl;
	gotoxy(50,27);
	cout<<"3) Exit"<<endl;
	gotoxy(50,30);
	cout<<"Choice: ";
	cin>>choice;
	do{
		switch(choice){
			case 1:
				kaz.login_admin();
				break;
			case 2:
				kaz.user_menu();
				break;
			case 3:
				exit(1);
			default:
				cout<<"Wrong Option"<<endl;
				break;
		}
		cout<<"Want to Continue....(y/n)"<<endl;
		cin>>another;
	}while(another=='y');
}

//USELESS PART BACK-END BORING WORK
void gotoxy( int column, int line )
{
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );
}

int wherex()
{
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  COORD  result;
  if (!GetConsoleScreenBufferInfo(
         GetStdHandle( STD_OUTPUT_HANDLE ),
         &csbi
         ))
    return -1;
  return result.X;
}

int wherey()
{
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  COORD  result;
  if (!GetConsoleScreenBufferInfo(
         GetStdHandle( STD_OUTPUT_HANDLE ),
         &csbi
         ))
    return -1;
  return result.Y;
}
void U(){
	int i=22;
	cout<<endl;
	gotoxy(10,i);
	Sleep(100);
	cout<<"  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
	Sleep(100);
	gotoxy(10,i+1);
	cout<<"  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
}
void L(){
	int i=24;
	gotoxy(10,i);
	Sleep(100);	
	cout<<"  |||     "<<endl;
	gotoxy(10,i+1);
	Sleep(100);
	cout<<"  |||     "<<endl;
	Sleep(100);
	gotoxy(10,i+2);
	cout<<"  |||     "<<endl;
	Sleep(100);
	gotoxy(10,i+3);
	cout<<"  |||     "<<endl;
	Sleep(100);
	gotoxy(10,i+4);
	cout<<"  |||     "<<endl;
	Sleep(100);
	gotoxy(10,i+5);
	cout<<"  |||     "<<endl;
	Sleep(100);
	gotoxy(10,i+6);
	cout<<"  |||     "<<endl;
	Sleep(100);
	gotoxy(10,i+7);
	cout<<"  |||     "<<endl;
	Sleep(100);
	gotoxy(10,i+8);
	cout<<"  |||     "<<endl;
	Sleep(100);
	gotoxy(10,i+9);
	cout<<"  |||     "<<endl;
	Sleep(100);
	gotoxy(10,i+10);
	cout<<"  |||     "<<endl;
	Sleep(100);
	gotoxy(10,i+11);
	cout<<"  |||     "<<endl;
}
void B(){
	int i=36;
	cout<<endl;
	gotoxy(10,i);
	Sleep(100);
	cout<<"  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
	Sleep(100);
	gotoxy(10,i+1);
	cout<<"  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
}
void R(){
	int i=24;
	int j=155;
	gotoxy(j,i);
	Sleep(100);	
	cout<<"  |||     "<<endl;
	gotoxy(j,i+1);
	Sleep(100);
	cout<<"  |||     "<<endl;
	Sleep(100);
	gotoxy(j,i+2);
	cout<<"  |||     "<<endl;
	Sleep(100);
	gotoxy(j,i+3);
	cout<<"  |||     "<<endl;
	Sleep(100);
	gotoxy(j,i+4);
	cout<<"  |||     "<<endl;
	Sleep(100);
	gotoxy(j,i+5);
	cout<<"  |||     "<<endl;
	Sleep(100);
	gotoxy(j,i+6);
	cout<<"  |||     "<<endl;
	Sleep(100);
	gotoxy(j,i+7);
	cout<<"  |||     "<<endl;
	Sleep(100);
	gotoxy(j,i+8);
	cout<<"  |||     "<<endl;
	Sleep(100);
	gotoxy(j,i+9);
	cout<<"  |||     "<<endl;
	Sleep(100);
	gotoxy(j,i+10);
	cout<<"  |||     "<<endl;
	Sleep(100);
	gotoxy(j,i+11);
	cout<<"  |||     "<<endl;
}
void U_no(){
	int i=22;
	cout<<endl;
	gotoxy(10,i);
	cout<<"  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
	gotoxy(10,i+1);
	cout<<"  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
}
void L_no(){
	int i=24;
	gotoxy(10,i);
	cout<<"  |||     "<<endl;
	gotoxy(10,i+1);
	cout<<"  |||     "<<endl;
	gotoxy(10,i+2);
	cout<<"  |||     "<<endl;
	gotoxy(10,i+3);
	cout<<"  |||     "<<endl;
	gotoxy(10,i+4);
	cout<<"  |||     "<<endl;
	gotoxy(10,i+5);
	cout<<"  |||     "<<endl;
	gotoxy(10,i+6);
	cout<<"  |||     "<<endl;
	gotoxy(10,i+7);
	cout<<"  |||     "<<endl;
	gotoxy(10,i+8);
	cout<<"  |||     "<<endl;
	gotoxy(10,i+9);
	cout<<"  |||     "<<endl;
	gotoxy(10,i+10);
	cout<<"  |||     "<<endl;
	gotoxy(10,i+11);
	cout<<"  |||     "<<endl;
}
void B_no(){
	int i=36;
	cout<<endl;
	gotoxy(10,i);
	cout<<"  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
	gotoxy(10,i+1);
	cout<<"  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
}
void R_no(){
	int i=24;
	int j=155;
	gotoxy(j,i);
	cout<<"  |||     "<<endl;
	gotoxy(j,i+1);
	cout<<"  |||     "<<endl;
	gotoxy(j,i+2);
	cout<<"  |||     "<<endl;
	gotoxy(j,i+3);
	cout<<"  |||     "<<endl;
	gotoxy(j,i+4);
	cout<<"  |||     "<<endl;
	gotoxy(j,i+5);
	cout<<"  |||     "<<endl;
	gotoxy(j,i+6);
	cout<<"  |||     "<<endl;
	gotoxy(j,i+7);
	cout<<"  |||     "<<endl;
	gotoxy(j,i+8);
	cout<<"  |||     "<<endl;
	gotoxy(j,i+9);
	cout<<"  |||     "<<endl;
	gotoxy(j,i+10);
	cout<<"  |||     "<<endl;
	gotoxy(j,i+11);
	cout<<"  |||     "<<endl;
}
