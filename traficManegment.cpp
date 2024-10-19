#include <iostream>
#include <windows.h>
#include<cstring>
#include<fstream>
#include<cstdlib>
using namespace std;
struct traffic
{string owner_name;//the name of the owner of the car
string vehicle_model;//the name of the vechile
string date;//date and time 
string distruction ;
string location;//may be where was occur
string owner_address;
struct rule
{string owner;
double fee;//the fees
string reasons;//what was the problem
}penality;
struct closed_roads
{
string reason;
string ro_location;
string length_of_duration;
string road_name;
string date_start;
}road;
struct add_vehicles
{
string proprietor_name;
string license_number;
string vehicle_type;
string insurance_info;
string registration_number;
string contact_info;
}add;
}Trafic_data;
void up_del_add_vehicles();//function to update and delete the vehicles information.
void up_del_accident_info();// Function to update and delete accident information.
void traffic_vio_penalty();// Function to add and view traffic violation penalties.
void showaccident_info();// Function to display previously occurred accidents.
void show_closed_roads();// Function to show information about closed roads.
void display_vehicles();// Function to show the list of added vehicles.
void accident_info();// Function to input details about accidents.
void add_vehicles();// Function to add a new vehicle for a specific road stream.
void closed_roads();// Function to manage closed road information.
void traffic();// Function to provide information about traffic.
int main_menu();// Function to display the main menu options.
int main()
{ 
system("cls");
system("color 2");
cout<<"\t*************************************************************\n\n";
cout<<"\t________  WELLCOME TO TRAFFIC MANAGEMENT PROGRAM  _________\n\n";
cout<<"\t\t\t*********************************\n\n\n";
cout<<"enter any key to go next\n";
cin.get();
system("cls");
int d;
do
{ 
d=main_menu();
switch (d)
{case 0:
up_del_add_vehicles();
break;
case 1:
closed_roads() ;
break;
case 2:
accident_info();
break;
case 3:
up_del_accident_info();
break;
case 4:
traffic_vio_penalty();
break;
case 5:
show_closed_roads();
break;
case 6:
display_vehicles();
break;
case 7:
showaccident_info();
break;
case 8:
add_vehicles();
break;
case 9:
traffic();
break;
case 10:
cout<<"EXITTING ...........................\n\n\n\n\n";
break;
default:
cout<<"wrong input please enter again\n";
cout<<"press enter to go menu\n\n";
cin.get();
break;
}
}while(d!=10);

return 0; 
}
int  main_menu()
{ int x;
system("cls");
cout<<"\t0,for put update and delete the information about vehicles\n";
cout<<"\t---------------------------------------------------------------\n";
cout<<"\t1,for put information about the road that will be closed\n";
cout<<"\t---------------------------------------------------------------\n";
cout<<"\t2, for record information regarding  accidents\n";
cout<<"\t----------------------------------------------------------------\n";
cout<<"\t3,for update or delete the information about add accidents \n";
cout<<"\t-----------------------------------------------------------------\n";
cout<<"\t4,for add and see punishments for violation of the law of traffic\n";
cout<<"\t------------------------------------------------------------------\n";
cout<<"\t5,for show the closed roads\n";
cout<<"\t--------------------------------------------\n";
cout<<"\t6,for display vechiles list and information\n";
cout<<"\t---------------------------------------------\n";
cout<<"\t7,for show the accidents\n";
cout<<"\t-----------------------------------\n";
cout<<"\t8, for add new vechiles\n";
cout<<"\t---------------------------------\n";
cout<<"\t9,for traffic flows\n";
cout<<"\t--------------------------------\n";
cout<<"\t10,for exit\n\n";
cout<<"__________________________________________________________________________\n";
cout<<"enter your choice!\n\n";
cin>>x;
cin.ignore();
return x;
}
///////////////////////////////////////////////////
//////////////////////////////////////////////////
void traffic(){
  system("cls");
for(int i=0;i<6;i++){
system("cls");
cout << "\n\n\t_____________________________________________" << endl<<endl;
cout<<"\t\tSTOP! UNTILL THE TIMING IS FINISHED"<<"            :"<<i<<"\n";
cout << "\t_________________________________________________" << endl<<endl;
system("color 0C");//about stop which is red
Sleep(1000);
}
for(int i=0;i<6;i++)
{
system("cls");
cout << "\n\n\t_____________________________________________" << endl<<endl;
cout<<"\t\tGO! UNTILL THE TIMING IS FINISHED"<<"            :"<<i<<"\n";
cout << "\t_________________________________________________" << endl<<endl;
system("color 0A");//about go green
Sleep(1000);}
for(int i=0;i<6;i++){
system("cls");
cout << "\n\n\t_____________________________________________" << endl<<endl;
cout<<"\t\tPREPARE TO STOP! UNTILL THE TIMING IS FINISHED"<<"            :"<<i<<"\n";
cout << "\t_________________________________________________" << endl<<endl;
system("color 0E");//yellow
Sleep(1000);
}
}
/////////////////////////////////////////////
////////////////////////////////////////////
void accident_info()
{system("cls");
system("color 1");
cout<<"----- WELLCOME TO ADD ACCIDENTS INFORMATION ENTER THE CORRECT INFORMATION!----\n\n\n";
cout<<"enter the vehicles model\n";
getline(cin,Trafic_data.vehicle_model);
cout<<"enter the owner full name \n";
getline(cin,Trafic_data.owner_name);
cout<<"enter the owner address city,worreda,kebele\n";
getline(cin,Trafic_data.owner_address);
cout<<"enter the address where the accedent is occur\n";
getline(cin,Trafic_data.location);
cout<<"enter the distructions\n";
getline(cin,Trafic_data.distruction);
cout<<"when it is occure (month/date/year)\n";
getline(cin,Trafic_data.date);
ofstream accident;
accident.open("accident.txt",ios::app);
if(accident.fail())
{  system("color 4");
cout<<"unable to open the file\n";
}
accident<<"OWNER NAME : "<<Trafic_data.owner_name<<endl<<"MODEL  : "<<Trafic_data.vehicle_model<<endl<<
"OWNER ADDRESS : "<<Trafic_data.owner_address<<endl<<"PLACE WHERE THE ACCIDENT IS OCCURE : "<<
Trafic_data.location<<endl<<"TOTAL DISTRUCTION : "<<Trafic_data.distruction<<endl<<"DATE :"<<Trafic_data.date<<endl;
accident<<"-----------------------------------------------------\n";
cout<<"SUCCESSFULLY!\n";
accident.close();
cin.get();
}
//////////////////////////////////////////////////////
/////////////////////////////////////////////////////
void add_vehicles()
{
system("cls");
system("color 6");
cout<<"\n\n\tWelcome to add vehicles page\n\n";
cout<<"Enter proprietor name: \n";
getline(cin, Trafic_data.add.proprietor_name);
cout<<"\nEnter license number: \n";
getline(cin, Trafic_data.add.license_number);
cout<<"\nEnter vehicle type: \n";
getline(cin, Trafic_data.add.vehicle_type);
cout<<"\nEnter insurance information: \n";
getline(cin, Trafic_data.add.insurance_info);
cout<<"\nEnter registration number: \n";
getline(cin, Trafic_data.add.registration_number);
cout<<"\nEnter contact information: \n";
getline(cin, Trafic_data.add.contact_info);
ofstream add_vehicles;
add_vehicles.open("vehicles_info.txt",ios::app);
if(add_vehicles.fail())
{  system("color 4");
cout<<"unable to open the file\n";
}
add_vehicles << Trafic_data.add.proprietor_name << endl;
add_vehicles << "LICENSE NUMBER : " << Trafic_data.add.license_number << endl;
add_vehicles<< "VEHICLE TYPE : " << Trafic_data.add.vehicle_type << endl;
add_vehicles << "INSURANCE INFORMATION : " <<Trafic_data. add.insurance_info << endl;
add_vehicles<< "REGISTRATION NUMBER : " << Trafic_data.add.registration_number << endl;
add_vehicles << "CONTACT INFORMATION : " <<Trafic_data. add.contact_info << endl;
add_vehicles << "---------------------------------------------" << endl;
add_vehicles.close();  
cout << "Trafic_data saved successfully in vehicles_info.txt" << endl;
cin.get();
}
///////////////////////////////////////////////////
//////////////////////////////////////////////////
void closed_roads() {
system ("cls");
cout<<"\t ABOUT CLOSED ROADS \n\n";
cout<<"Enter the name of the closed road: ";
getline(cin, Trafic_data.road.road_name);
cout<<"enter the location of the road city//subcity//kebelle:";
getline(cin,Trafic_data.road.ro_location);
cout<<"Enter the reason for closure: ";
getline(cin, Trafic_data.road.reason); 
cout<<"enter the date month/date/year\n";
getline(cin,Trafic_data.road.date_start);
cout<<"Enter the duration of closure: ";
getline(cin, Trafic_data.road.length_of_duration);
ofstream closed_roads;
closed_roads.open("ban_road.txt",ios::app);
if(closed_roads.fail())
{system("color 4");
cout<<"unable to open the file\n";
cin.get();
}
closed_roads << "ROAD NAME : " << Trafic_data.road.road_name << endl;
closed_roads<<"LOCATION OF THE ROAD :"<<Trafic_data.road.ro_location<<endl;
closed_roads << "REASON FOR CLOSURE : " << Trafic_data.road.reason << endl;
closed_roads<< Trafic_data.road.date_start << endl;
closed_roads << "DURATION OF CLOSURE : " << Trafic_data.road.length_of_duration << endl;
closed_roads << "---------------------------------------------" << endl;    
closed_roads.close();
cout << "Trafic_data saved successfully in ban_road.txt" << endl;
cin.get();
}
/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////
    void show_closed_roads()
    {  system ("cls");
    int choice;
    string information,target,info1,info2,info3,info4,info5,info6;
    cout<<"wellcome to see the closed roads \n";
    ifstream  c_roads;
    c_roads.open("ban_road.txt");
    if(c_roads.fail())
    {
    system("color 4");
    cout<<"unable to open the file\n";
    cin.get();
    }
    system("cls");
    cout<<"1,to see closed roads at a certine date\n\n";
    cout<<"2,to see all closed roads \n";
    cout<<"enter your choice \n";
    cin>>choice;
    cin.ignore();
    switch (choice)
    {
    case 1:
    cout<<"enter the date in this form month/date/year\n";
    getline(cin,target);
    c_roads.seekg(0, ios::beg); 
    while(getline(c_roads,info1)&&getline(c_roads,info2)&&getline(c_roads,info3)&&getline(c_roads,info4)&&getline(c_roads,info5)&&getline(c_roads,info6))
    {
    if(target==info4)
    {
    cout<<info1<<endl<<info2<<endl<<info3<<endl<<info4<<endl<<info5<<endl<<info6<<endl;
    cin.get();

    }
    cout<<"SUCCESSFULLY!\n";
    }
    c_roads.close();
    break;
    case 2:
    while(getline(c_roads,information)){
    cout<<information<<endl;
    }c_roads.close();
    break;
    default:
    cout<<"your input is wrong!!!!\n\n";
    break;
    }

    cout<<"press enter to go back\n";
    cin.get();
    }
    ///////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////
    void up_del_accident_info()
    { string inff[5]={"MODEL  : ","OWNER ADDRESS : ","PLACE WHERE THE ACCIDENT IS OCCURE : ","TOTAL DISTRUCTION : ","DATE :"};
    system("cls");
    cout<<"WELL COME TO UPDATE OR DELETE THE Trafic_data OF THE ACCIDENTS\n\n\n";
    string target;
    cout<<"if you want to back menu you can press one (1) other wise else :";
    char x;
    cin>>x;
    cin.ignore();
    if(x=='1'){
    return;}
    ifstream upaccident;
    ofstream temp;
    temp.open("temp.txt",ios::out);
    upaccident.open("accident.txt");
    if(upaccident.fail()||temp.fail())
    {
    system("color 4");
    cout<<"unable to open the file :";
    }
    cout<<"1,for delete the previous accident :\n";
    cout<<"------------------------------------- \n";
    cout<<"2,for update the previouse accidents :\n";
    cout<<"------------------------------------- \n";
    int option;
    bool found = false;
    string line;
    cin>>option;
    cin.ignore();
    switch(option)
    {
    case 1:
    cout << "Enter the owner of the vehicle for which the accident occurred: ";
    getline(cin, target);
    cout<<endl<<endl;
    while (getline(upaccident, line)) {
    if (!found && line =="OWNER NAME : "+target){
    found = true;
    for (int i = 0; i < 6; i++) {
        getline(upaccident, line);}
    cout << "Successfully deleted the accident information for " << "OWNER NAME : "+target << "!\n";
    } else {
    temp << line << endl;
    }
    }
    if (!found) 
    {
    cout << "Accident information for the specified vehicle not found.\n";
    }
    temp.close();
    upaccident.close();
    remove("accident.txt");
    rename("temp.txt", "accident.txt");

    cout << "Press enter to go back  :";
    cin.get();
    break;
    case 2:
    cout << "Enter the owner of the vehicle for which the accident occurred: ";
    getline(cin, target);
    while (getline(upaccident, line)) {
    if (!found && line == "OWNER NAME : "+target) {
    found = true;
    temp<<line<<endl;
    cout << "Enter the updated accident information for " << "OWNER NAME : "+target<< ":\n";
    for (int i = 0; i < 6; i++) {
    if(i<5){
    getline(upaccident, line);
    cout<<line<<endl;
    cout << "Enter updated information like the output pattern : \n";
    getline(cin, line);
    temp <<inff[i]+line << endl;
    }
    else{
    getline(upaccident, line);
    temp<<"-----------------------------------------------------\n";}
    }
    cout << "Successfully updated the accident information for " << target << "!\n";
    }
      else {
    temp << line << endl;
    }
    }
    if (!found) {
    cout << "Accident information for the specified vehicle not found.\n";
    }
    temp.close();
    upaccident.close();
    remove("accident.txt");
    rename("temp.txt", "accident.txt");
    break;
    default :
    cout<<"WRONG INPUTS \n";
    break;
    }
    cout << "Press enter to go back\n";
    cin.get();
    }
////////////////////////////////////////////////////
///////////////////////////////////////////////////
 void showaccident_info()
 {system("cls");
cout<<"this is about to see the accident informations :\n";
cout<<"1,to see all accident  :";
cout<<"------------------------------- :\n";
cout<<"2,to see the accident you want  :\n";
cout<<"------------------------------- :\n";
cout<<"enter your choice \n";
string target,s1,s2,s3,s4,s5,s6,s7;
int x;
cin>>x;
ifstream read;
read.open("accident.txt");
if(read.fail())
{
  cout<<"unable to open the file\n\n";
}
switch (x)
{
case 1:
cout<<"######   this is all accidets that was occured\n";
while(!read.eof()){
getline(read,s1);
cout<<s1<<endl;
}
break;
case 2:
cout<<"enter the model of the veichle to know the accident information about it!!\n";
getline(cin,target);
while(getline(read,s1)&&getline(read,s2)&&getline(read,s3)&&getline(read,s4)&&getline(read,s5)&&getline(read,s6)&&getline(read,s7))
{
if(target=="MODEL  : "+s2){
cout<<"THIS IS ALL INFORMATION \n\n";
cout<<s1<<endl<<s2<<endl<<s3<<endl<<s4<<endl<<s5<<s6<<endl<<s7<<endl;
}else 
cout<<"NOT FOUND!!!\n";
}
default:
cout<<"the input is wrong \n";
break;
}
cout<<"press enter to go back  :";
cin.get();
}
//////////////////////////////////////////////////
/////////////////////////////////////////////////
void display_vehicles()
 {
system("cls");
cout<<"THIS IS THE LIST OF THE VECHILES THAT ARE REGUSTERED\n\n";
string str;
ifstream file;
file.open("vehicles_info.txt");
if(file.fail()){
  cout<<"error opening file\n";
}
while(getline(file,str))
{
  cout<<str<<endl;
}cout<<"press enter to go back\n";
cin.get();
}
/////////////////////////////////////////////////////
////////////////////////////////////////////////////

void traffic_vio_penalty()
{ string str1;
system("cls");
ofstream pun;
pun.open("punishment.txt",ios::app);
ifstream punishment;
punishment.open("punishment.txt");
if(pun.fail()||punishment.fail()){
  cout<<"unable to open the files \n";
}
int x,y;
cout<<"1,for add penality\n";
cout<<"-----------------------\n";
cout<<"2,to see the penality history\n";
cout<<"----------------------------------------- \n";
cout<<"enter your choice \n";
cin>>y;
cin.ignore();
switch (y)
{ 
case 1:
cout<<"enter the user name of the traffic code \n";
cin>>x;// imagine that the code for traffic punishment is 1234
cin.ignore();
for(int i=0;i<4;i++){
if(x!=1234)
{if (i==3){
cout<<"your finished your try\n";
return;
}
system("cls");
cout<<"enter the code again you left "<<2-i<<" chance\n";
cin>>x;
cin.ignore();
}}
cout<<"enter the owner of the vehicle\n\n";
getline(cin,Trafic_data.penality.owner);
cout<<"enter the reason \n";
getline(cin,Trafic_data.penality.reasons);
cout<<"enter the fee\n";
cin>>Trafic_data.penality.fee;
cin.ignore();
pun<<Trafic_data.penality.owner<<endl<<"REASONS :"<<Trafic_data.penality.reasons<<endl<<"FEES :"<<Trafic_data.penality.fee<<endl;
pun<<"--------------------------------------------------------------------------\n";
pun.close();
break;
case 2:
system("cls");
cout<<" these are all punishment\n\n\n";
while(!punishment.eof()){
  getline(punishment,str1);
  cout<<str1<<endl;
  }
  punishment.close();
  break;
default:
cout<<"wrong input\n";
  break;
  }
cout<<"press enter to go back\n";
cin.get();
}
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
void up_del_add_vehicles()
{system("color 5");
system("cls");
cout<<"\t well come to update and delete vehicles information\n\n";
ifstream vvv("vehicles_info.txt");
ofstream tempp("tempp.txt",ios::app);
if(vvv.fail()||tempp.fail()){
  cout<<"sorry unable to open the file\n";
  cin.get();
  return;
}
string target,line;
string about[5]={ "LICENSE NUMBER : ","VEHICLE TYPE : ","INSURANCE INFORMATION : ","REGISTRATION NUMBER : ","CONTACT INFORMATION : "};
int x;
cout<<"1,for deletion\n";
cout<<"-----------------\n";
cout<<"2,for update Trafic_data\n";
cout<<"-----------------\n";
cin>>x;
cin.ignore();
bool chance=false;
switch (x)
{
case 1:
cout<<"enter owner name of the vehicle\n";
getline(cin,target);
while(getline(vvv,line)){
if(!chance&&target==line)
{
  chance =true;
for(int i=0;i<6;i++){
  getline(vvv,line);
}
cout<<"successfuly delete!!!!!!!!!!\n";
}
  else
  tempp<<line<<endl;
}
if (!chance) {
    cout << "there is no information of vechile about your input.\n";
    }
    tempp.close();
    vvv.close();
    remove("vehicles_info.txt");
    rename("tempp.txt","vehicles_info.txt");
    break;
    case 2:
    cout << "Enter the owner of the vehicle which you want to update \n: ";
    getline(cin, target);
    while (getline(vvv, line)) {
    if (!chance && target==line) {
    chance = true;
    tempp<<line<<endl;
    cout << "Enter the updated vechiles information for " << "OWNER NAME : "+target<< ":\n";
    for (int i = 0; i < 6; i++) {
    if(i<5){
    getline(vvv, line);
    cout<<line<<endl;
    cout << "Enter updated information like the output pattern : \n";
    getline(cin, line);
    tempp<<about[i]+line << endl;
    }
    else{
    getline(vvv, line);
    tempp<<"-----------------------------------------------------\n";}
    }
    cout << "Successfully updated the vehicle information for " << target << "!\n";
    }
      else {
    tempp << line << endl;
    }
    }
    if (!chance) {
    cout << "Accident information for the specified vehicle not found.\n";
    }
    tempp.close();
    vvv.close();
    remove("vehicles_info.txt");
    rename("tempp.txt", "vehicles_info.txt");
    break;
    default :
    cout<<"WRONG INPUTS \n";
    break;
    }
    cout << "Press enter to go back\n";
    cin.get();
}