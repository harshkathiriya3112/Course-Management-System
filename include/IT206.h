#ifndef IT206_H
#define IT206_H

#include <bits/stdc++.h>

using namespace std;

class encoding_decoding
{

public:
    string encode(string);

    string decode(string);
};

class IT206 : public encoding_decoding
{

private:
    vector<int> sid;               //for students id
    vector<string> sname;          //for student name
    vector<string> stdpass;        //for students password
    queue<string> material[6];     //for mateiral store
    int pers;                      //for check who login
    int enroll_list[500][6] = {0}; //for enroll students
    int profid[6];                 //for prof ID
    vector<string> profpass;       //for professors password
    int admin_id = 20202020;       //admin ID which is common in all objects
    string admin_pass;             //admin password
public:
    string course_name[6]; // for course name
    int time_table[3][6];
    int year;
    IT206(int ye);
    void getname(string st);
    void getpass(string);
    void getenroll(int x, int row, int col);
    string prof[6]; //for professor
    void student();
    void professor();
    void admin();
    int current_stdid = 0;
    void endsname(string fname);
    void endpass(string fpass);
    void endenroll(string fenroll);
    void getprofpass(string st);
    void endprofpass(string);
    void getmat(string, char);
    void endcm(string);
    void getadmin(string);
    void endadmin(string);
    void enterstdname(string);
    void enterstdpass(string);
    void enterenrolllist(string);
    void enterprofpass(string);
    void entercoursemat(string);
    void enteradminpass(string);
};

#endif // IT206_H
