#include <iostream>
using namespace std;
class userdata
{
    int user_id;
    char user_firstname;
    char user_lastname;
    int user_phonenumber;
    int user_zipcode;
    char user_address;
    char user_bloodtype;


public:
  userdata(int input_id, char input_firstname, char input_lastname,
           int input_phonenumber, int input_zipcode, char input_address, char input_bloodtype);
  ~userdata() {};

  int get_id();
  char get_firstname();
  char get_lastname();
  int get_phonenumber();
  int get_zipcode();
  char get_address();
  char get_bloodtype();
};

userdata::userdata(int input_id, char input_firstname, char input_lastname,
                   int input_phonenumber, int input_zipcode, char input_address,
                   char input_bloodtype)
                   {

  user_id = input_id;
  user_firstname = input_firstname;
  user_lastname = input_lastname;
  user_phonenumber = input_phonenumber;
  user_zipcode = input_zipcode;
  user_address = input_address;
  user_bloodtype = input_bloodtype;
}

int userdata::get_id()
{
  return user_id;
}
char userdata::get_firstname()
{
  return user_firstname;
}
char userdata::get_lastname()
{
  return user_lastname;
}
int userdata::get_phonenumber()
{
  return user_phonenumber;
}
int userdata::get_zipcode()
{
  return user_zipcode;
}
char userdata::get_address()
{
  return user_address;
}
char userdata::get_bloodtype()
{
  return user_bloodtype;
}
