#include "IT206.h"

#include <bits/stdc++.h>

using namespace std;

IT206::IT206(int ye)
{
    year = ye;
    for (int i = 0; i < 6; i++)
    {
        profid[i] = i + 20200000 + ((year+5) * 1000) + 1;
    }
}
string encoding_decoding::encode(string s)
{
    int len = s.length();

    stack<char> st;
    char *ss = new char[len];
    for (int i = 0; i < len; i++)
    {
        st.push(s[i] + 1);
    }
    int j = 0;
    for (int i = 0; i < len; i++)
    {
        ss[j] = st.top();
        st.pop();
        j++;
    }
    ss[j] = '\0';
    string sss = ss;
    delete ss;
    return sss;
}

string encoding_decoding::decode(string ss)
{

    int len = ss.length();
    stack<char> st;

    for (int i = 0; i < len; i++)
    {
        st.push(ss[i]);
    }
    int a = 0;
    for (int i = 0; i < len; i++)
    {
        ss[i] = st.top();
        st.pop();
        a++;
    }

    for (int i = 0; i < len; i++)
    {
        st.push(ss[i] - 1);
    }

    int j = len - 1;
    char *dec = new char[len];

    for (int i = 0; i < len; i++)
    {

        dec[j] = st.top();

        st.pop();
        j--;
    }
    dec[len] = '\0';
    string decoded = dec;
    delete dec;
    return decoded;
}
void IT206 ::student()
{
    char st;
    string pass;
    string tmpname;

     cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
    cout << "Student LogIn : " << endl;
    cout << "Enter any key to continue, Enter 'N' if you are new student : ";
    cin >> st;
     cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
    if (st == 'N') // for new student
    {
        cout << "Enter Your Name  : " << endl;
        cin.ignore();
        getline(cin, tmpname);
        sname.push_back(tmpname);

        while (1)
        {
            cout <<endl<< "Enter Your password : " << endl
                 << "[Condition of Valid Password : 1. Minimum length : 8 2.At Least One lowercase character 3.At least One Uppercase character]"
                 << endl;
            cin >> pass;
             cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
            int upper = 0;
            int lower = 0;
            int len = 0;
            for (int i = 0; i < pass.length(); i++)
            {
                if (pass[i] >= 65 && pass[i] <= 90)
                {
                    upper++;
                }
                if (pass[i] >= 97 && pass[i] <= 122)
                {
                    lower++;
                }
            }
            if (upper >= 1 && lower >= 1 && pass.length() >= 8)
            {
                break;
            }

            cout << "Enter valid password," << endl;
        } // get valid password

        stdpass.push_back(pass); //enter pass in database

         cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
        cout <<endl<< "Your STUDENT ID : " << current_stdid + 20200000 + (year * 1000) + 1 << endl;
         cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
        sid.push_back(current_stdid + 20200000 + (year * 1000) + 1);

        cout << endl<<"Select the courses you want to enroll :" << endl<<endl;
        for (int i = 0; i < 6; ++i)
        {
            char t_choice;
            cout << i + 1 << ". " << course_name[i] << " :" << endl;
            cout << "Enter 'Y' if you want to enroll else enter 'N'" << endl;
            cin >> t_choice;
            if (t_choice == 'Y')
            {
                enroll_list[current_stdid][i] = 1; //1 means enrolled
            }
        }
        current_stdid++;
    }

    int tmpsid, crntsid;
    string tmp_pass;

    while (1)
    {
         cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
        cout << "Enter your STUDENT ID : ";
        cin >> tmpsid;
        int checkid = tmpsid - 20200000 - (year * 1000) - 1;
        while (checkid < 0 || checkid > current_stdid)
        {
            cout << "Enter valid Student ID : " << endl;
            cin >> tmpsid;
            checkid = tmpsid - 20200000 - (year * 1000) - 1;
        }

        cout << endl;
        cout << "Enter password : ";
        cin >> tmp_pass;
        cout << endl;
        int flag = 0;
        for (int i = 0; i < sid.size(); i++)
        {

            int fm = tmp_pass.compare(stdpass[i]);
            if (sid[i] == tmpsid && !fm)
            {
                 cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl<<endl;
                cout << "Welcome, " << sname[i] << ",";
                cout << "Login successfully.";
                 cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl<<endl;
                crntsid = i;
                flag = 1;
                break;
            }
        }
        if (flag != 0)
        {
            break;
        }

        cout << "Enter right details :" << endl;
    }

    while (1)
    {
         cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
        cout << endl
             << "Select the option : " << endl
             << "1. Enter 't' for time table" << endl
             << "2. Enter 'c' for course material" << endl
             << "3. Enter 'e' to see your enrolled courses' name" << endl
             << "Enter any key to exit : " << endl;
        char ch;
        cin >> ch;


        if (ch != 't' && ch != 'c' && ch != 'e')
        {
            break;
        }

        switch (ch)
        {
        case 't':
        {
             cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
            int index;

            cout << "Enter course index : " << endl;
            for (int i = 0; i < 6; i++)
            {
                cout << i + 1 << ". " << course_name[i] << " " << endl;
            }
            cin >> index;
            while (index < 1 || index > 6)
            {
                cout << "Enter valid index : ";
                cin >> index;
            }
            cout << endl;

            int tmpnum = index - 1;
             cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 6; j++)
                {
                    if (time_table[i][j] == tmpnum)
                    {
                        if (j == 0)
                        {
                            cout << course_name[tmpnum] << " lecture schedule on MONDAY at ";
                        }
                        if (j == 1)
                        {
                            cout << course_name[tmpnum] << " lecture schedule on TUESDAY at ";
                        }
                        if (j == 3)
                        {
                            cout << course_name[tmpnum] << " lecture schedule on WEDNESDAY at ";
                        }
                        if (j == 4)
                        {
                            cout << course_name[tmpnum] << " lecture schedule on THURSDAY at ";
                        }
                        if (j == 5)
                        {
                            cout << course_name[tmpnum] << " lecture schedule on FRIDAY at ";
                        }
                        if (j == 6)
                        {
                            cout << course_name[tmpnum] << " lecture schedule on SATURDAY at ";
                        }
                        if (i == 0)
                        {
                            cout << "8 AM" << endl;
                        }
                        if (i == 1)
                        {
                            cout << "10 AM" << endl;
                        }
                        if (i == 2)
                        {
                            cout << "2 PM" << endl;
                        }
                    }
                }
            }
                 cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
            break;
        }
        case 'c':
        {
             cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
            cout << "Enter course index for course material : "<<endl;
            for (int i = 0; i < 6; i++)
            {
                cout << i+1 << ". " << course_name[i] << endl;
            }
            int te;
            cout << "Enter course index : ";
            cin >> te;

             cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;

            queue<string> g = material[te];
            cout << course_name[te-1] << " course material :" << endl;
            int i = 1;
            while (!g.empty())
            {
                cout << i << ". " << g.front() << endl;
                g.pop();
                i++;
            }
             cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
            break;
        }

        case 'e':
        {
             cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
            for (int i = 0; i < 6; i++)
            {
                if (enroll_list[crntsid][i] == 1)
                {
                    cout << "Course : " << course_name[i] << " Course Instructor: " << prof[i] << endl;
                }
            }
             cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
            break;
        }

        default:
        {
            break;
        }
        }
    }
}

void IT206::professor()
{
    int tmppid, crntpid;
    string tmp_pass;

    while (1)
    {

        cout << "Enter your Professor ID : ";
        cin >> tmppid;
        cout << endl;
        cout << "Enter password : ";
        cin >> tmp_pass;
        cout << endl;
        int flag = 0;
        for (int i = 0; i < 6; i++)
        {

            int fm = tmp_pass.compare(profpass[i]);
            if (profid[i] == tmppid && !fm)
            {
                 cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl<<endl;
                cout << "Login successfully." << endl;
                cout << "Welcome, professor " << prof[i] << endl;
                 cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
                crntpid = i;
                flag = 1;
                break;
            }
        }
        if (flag != 0)
        {
            break;
        }
        cout << "Enter right details :" << endl;
    }

     cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl<<endl;

    for (int i = 0; i < 6; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (time_table[i][j] == crntpid)
            {
                if (i == 0)
                {
                    cout << course_name[crntpid] << " lecture schedule on MONDAY at ";
                }
                if (i == 1)
                {
                    cout << course_name[crntpid] << " lecture schedule on TUESDAY at ";
                }
                if (i == 3)
                {
                    cout << course_name[crntpid] << " lecture schedule on WEDNESDAY at ";
                }
                if (i == 4)
                {
                    cout << course_name[crntpid] << " lecture schedule on THURSDAY at ";
                }
                if (i == 5)
                {
                    cout << course_name[crntpid] << " lecture schedule on FRIDAY at ";
                }
                if (i == 6)
                {
                    cout << course_name[crntpid] << " lecture schedule on SATURDAY at ";
                }
                if (j == 0)
                {
                    cout << "8 AM" << endl;
                }
                if (j == 1)
                {
                    cout << "10 AM" << endl;
                }
                if (j == 2)
                {
                    cout << "2 PM" << endl;
                }
            }
        }
    }
     cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl<<endl;
    int count = 0;
    cout << "Numbers of students enroll in : ";
    for (int i = 0; i < 500; i++)
    {
        if (enroll_list[i][crntpid] == 1)
        {
            count++;
        }
    }
    cout << count << endl;
     cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl<<endl;

    char choice;
    int procnt = 0;
    cout << "Select the option : " << endl
         << "1. Enter 's' for student enroll list of " << course_name[crntpid] << endl
         << "2. Enter 'm' to add material in " << course_name[crntpid] << endl
         << "3. Enter 'e' to search students name and student's enroll list" << endl
         << "4. Enter 'n' to exit " << endl;
    cin >> choice;
     cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
    while (choice != 'n')
    {
        switch (choice)
        {
        case 's':
        {
            cout << "Students list of " << course_name[crntpid] << ":" << endl;
            for (int i = 0; i < 500; i++)
            {
                if (enroll_list[i][crntpid] == 1)
                {
                    cout << sid[i] << ": " << sname[i] << endl;
                }
            }
             cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
            break;
        }
        case 'm':
        {

            queue<string> g = material[crntpid];
            cout << course_name[crntpid] << " course material :" << endl;
            int i = 1;
            while (!g.empty())
            {
                cout << i << ". " << g.front() << endl;
                g.pop();
                i++;
            }
            while (1)
            {
                cout << "Enter 'A' to add material in " << course_name[crntpid] << " or enter any key to continue : " << endl;
                char choice;
                cin >> choice;
                if (choice == 'A')
                {
                    cout << "Enter material you want to add" << endl;
                    string mat;
                    cin >> mat;
                    material[crntpid].push(mat);
                    cout << mat << " entered sucessfully. " << endl;
                }
                else
                {
                     cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
                    break;
                }
            }
            break;
        }
        case 'e':
        {
            int t_id, t_sid;
            cout << "Enter Student's ID : " << endl;
            cin >> t_id;

            int checkid = t_id - 20200000 - (year * 1000) - 1;
            while (checkid < 0 || checkid > current_stdid)
            {
                cout << "Enter valid Student ID : " << endl;
                cin >> t_id;
                checkid = t_id - 20200000 - (year * 1000) - 1;
            }

            for (int i = 0; i < sid.size(); i++)
            {
                if (t_id == sid[i])
                {
                    t_sid = i;
                }
            }
            cout << "STUDENT NAME of " << t_id << " : " << sname[t_sid] << endl;
            for (int i = 0; i < 6; i++)
            {
                if (enroll_list[t_sid][i] == 1)
                {
                    cout << "Course : " << course_name[i] << " Course Instructor: " << prof[i] << endl;
                }
            }
             cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
            break;
        }
        default:
            cout << "Enter valid choice " << endl;
            break;

        }
         cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl<<endl;
        cout << "Select the option : " << endl
             << "1. Enter 's' for student enroll list of " << course_name[crntpid] << endl
             << "2. Enter 'm' to add material in " << course_name[crntpid] << endl
             << "3. Enter 'e' to search students name and student's enroll list" << endl
             << "4. Enter 'n' to exit " << endl;
        cin >> choice;
         cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
    }
}

void IT206::getname(string st)
{
    sname.push_back(st);
    sid.push_back(current_stdid + 20200000 + (year * 1000) + 1);
}

void IT206::getpass(string st)
{
    stdpass.push_back(st);
}

void IT206::getprofpass(string st)
{

    profpass.push_back(st);
}

void IT206 ::getenroll(int x, int row, int col)
{
    enroll_list[row][col] = x;
}

void IT206 ::admin()
{
    int tmppid, crntpid;
    string tmp_pass;

    while (1)
    {

        cout << "Enter your Admin ID : ";
        cin >> tmppid;

        cout << endl;
        cout << "Enter password : ";
        cin >> tmp_pass;
        cout << endl;
        int flag = 0;
        int fm = tmp_pass.compare(admin_pass);
        if (admin_id == tmppid && !fm)
        {
             cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl<<endl;
            cout << "Login successfully." << endl;
            cout << "Welcome, Administrator : " << endl;

             cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl<<endl;
            flag = 1;
            break;
        }
        if (flag != 0)
        {
            break;
        }
        cout << "Enter right details :" << endl;
         cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
    }
    char choice;

    while (1)
    {
        cout << endl
             << "Enter '1' to see student details :" << endl
             << "Enter '2' to change student name :" << endl
             << "Enter '3' to change student password :" << endl
             << "Enter '4' to change studnet enroll list : " << endl
             << "Enter '5' to change professor password :" << endl
             << "Enter '6' to change administrator password :" << endl
             << "Enter any key to exit : " << endl;

        cin >> choice;
         cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
        if (choice < '1' || choice > '6')
        {
            break;
        }
        switch (choice)
        {
        case '1':
        {
             cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
            int t_id, t_sid;
            cout << "Enter Student's ID : " << endl;
            cin >> t_id;
            int checkid = t_id - 20200000 - (year * 1000) - 1;
            while (checkid < 0 || checkid > current_stdid)
            {
                cout << "Enter valid Student ID : " << endl;
                cin >> t_id;
                checkid = t_id - 20200000 - (year * 1000) - 1;
            }

            for (int i = 0; i < sid.size(); i++)
            {
                if (t_id == sid[i])
                {
                    t_sid = i;
                }
            }
            cout << "STUDENT NAME of " << t_id << " : " << sname[t_sid] << endl<<endl;
            for (int i = 0; i < 6; i++)
            {
                if (enroll_list[t_sid][i] == 1)
                {
                    cout << "Course : " << course_name[i] << " Course Instructor: " << prof[i] << endl;
                }
            }
             cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
            break;
        }
        case '2':
        {
            int t_id, t_sid;
            string newname;
            cout << "Enter Student's ID : " << endl;
            cin >> t_id;
            int checkid = t_id - 20200000 - (year * 1000) - 1;
            while (checkid < 0 || checkid > current_stdid)
            {
                cout << "Enter valid Student ID : " << endl;
                cin >> t_id;
                checkid = t_id - 20200000 - (year * 1000) - 1;
            }

            for (int i = 0; i < sid.size(); i++)
            {
                if (t_id == sid[i])
                {
                    t_sid = i;
                }
            }
            cout << "STUDENT NAME of " << t_id << " : " << sname[t_sid] << endl;
            cout << "Enter new name of student ID " << t_id << " : " << endl;
            cin.ignore();
            getline(cin, newname);
            sname[t_sid] = newname;
            cout << "Updated Student Name of " << t_id << " : " << sname[t_sid] << endl;
             cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
            break;
        }
        case '3':
        {
            int t_id, t_sid;
            string newpass;
            cout << "Enter Student's ID : " << endl;
            cin >> t_id;
            int checkid = t_id - 20200000 - (year * 1000) - 1;
            while (checkid < 0 || checkid > current_stdid)
            {
                cout << "Enter valid Student ID : " << endl;
                cin >> t_id;
                checkid = t_id - 20200000 - (year * 1000) - 1;
            }

            for (int i = 0; i < sid.size(); i++)
            {
                if (t_id == sid[i])
                {
                    t_sid = i;
                }
            }
            cout << "Enter new password of " << sname[t_sid] << " (student ID : " << t_id << " )" << endl;
            cin.ignore();
            getline(cin, newpass);
            stdpass[t_sid] = newpass;
            cout << "Password change successfully ." << endl;
             cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
            break;
        }
        case '4':
        {
            int t_id, t_sid;
            string newpass;
            cout << "Enter Student's ID : " << endl;
            cin >> t_id;
            int checkid = t_id - 20200000 - (year * 1000) - 1;
            while (checkid < 0 || checkid > current_stdid)
            {
                cout << "Enter valid Student ID : " << endl;
                cin >> t_id;
                checkid = t_id - 20200000 - (year * 1000) - 1;
            }

            for (int i = 0; i < sid.size(); i++)
            {
                if (t_id == sid[i])
                {
                    t_sid = i;
                }
            }

            cout << "Enter new enroll details of " << sname[t_sid] << "Student ID:" << sid[t_sid] << ") : " << endl;
            for (int i = 0; i < 6; ++i)
            {
                char t_choice;
                cout << i + 1 << ". " << course_name[i] << " :" << endl;
                cout << "Enter 'Y' if you want to enroll else enter 'N'" << endl;
                cin >> t_choice;
                if (t_choice == 'Y')
                {
                    enroll_list[t_sid][i] = 1; //1 means enrolled
                }
            }
            cout << "Details added successfully." << endl;
             cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
            break;
        }
        case '5':
        {
            int p_id, p_sid;
            string newpass;
            cout << "Enter Professor's ID : " << endl;
            cin >> p_id;
            int checkid = p_id - 20200000 - (year * 3000) - 1;
            while (checkid < 0 || checkid > 5)
            {
                cout << "Enter valid Professor ID : " << endl;
                cin >> p_id;
                checkid = p_id - 20200000 - (year * 1000) - 1;
            }

            for (int i = 0; i < 6; i++)
            {
                if (p_id == profid[i])
                {
                    p_sid = i;
                }
            }

            cout << "Enter new password of Professor ID " << p_id << " : " << endl;
            cin.ignore();
            getline(cin, newpass);
            profpass[p_sid] = newpass;
            cout << "Password changed successfully for " << p_id << endl;
             cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
            break;
        }
        case '6':
        {
            string old_pass, new_pass;
            cout << "Enter your old Password : ";
            cin.ignore();
            getline(cin, old_pass);
            while (1)
            {
                int fn = old_pass.compare(admin_pass);
                if (!fn)
                {
                    cout << "Enter New Password : ";
                    cin.ignore();
                    getline(cin, new_pass);
                    admin_pass = new_pass;
                    break;
                }
                else
                {
                    cout << "Enter valid password : ";
                    cin.ignore();
                    getline(cin, old_pass);
                }
            }
             cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
            break;
        }
        default:
            break;
        }
    }
}

void IT206::endsname(string fname)
{
    ofstream out(fname, ios::trunc);
    int i;
    for (i = 0; i < sname.size() - 1; i++)
    {
        string encsname = encode(sname[i]);
        out << encsname << endl;
    }
    string enccsname = encode(sname[i]);
    out << enccsname;
    out.close();
}

void IT206 ::endpass(string fpass)
{
    ofstream out(fpass, ios::trunc);
    int i;
    for (i = 0; i < stdpass.size() - 1; i++)
    {
        string b = encode(stdpass[i]); //harsh
        out << b << endl;
    }
    string bb = encode(stdpass[i]);
    out << bb;
    out.close();
}

void IT206 ::endenroll(string fenroll)
{
    ofstream out(fenroll, ios::trunc);
    int i, j;
    for (i = 0; i < current_stdid - 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            out << enroll_list[i][j] << endl;
        }
    }
    for (int k = 0; k < 5; k++)
    {
        out << enroll_list[i][k] << endl;
    }
    out << enroll_list[i][5];
    out.close();
}

void IT206 ::endprofpass(string st)
{
    ofstream out(st, ios::trunc);
    int i;
    for (i = 0; i < 5; i++)
    {
        string b = encode(profpass[i]); //harsh
        out << b << endl;
    }
    string bb = encode(profpass[i]);
    out << bb;
    out.close();
}
void IT206 ::getmat(string st, char ind)
{
    st.erase(st.begin());

    material[ind - '0'].push(st);
}

void IT206 ::endcm(string st)
{
    ofstream out(st, ios::trunc);
    for (int i = 0; i < 5; i++)
    {
        while (!material[i].empty())
        {
            out << i << material[i].front() << endl;
            material[i].pop();
        }
    }
    for (int k = 0; k < material[5].size() - 1; k++)
    {
        out << 5 << material[5].front() << endl;
        material[5].pop();
    }
    out << 5 << material[5].front();
    material[5].pop();
    out.close();
}

void IT206 ::getadmin(string pass)
{
    admin_pass = pass;
}

void IT206::endadmin(string fn)
{
    ofstream out(fn, ios::trunc);
    string bb = encode(admin_pass);
    out << bb << endl;
}

void IT206 :: enterstdname(string st)
{
    fstream file;
    string tmpname;

    file.open(st, ios::out | ios::in);
    while (!file.eof())
    {
        getline(file, tmpname);

        getname(decode(tmpname));

        current_stdid++;
    }
    file.close();
}

void IT206 :: enterstdpass(string st)
{
    fstream file;
    string tmppass;
    file.open(st, ios::out | ios::in);
    while (!file.eof())
    {
        getline(file, tmppass);
        string dectemppass = decode(tmppass);
        getpass(dectemppass);
    }
    file.close();

}

void IT206 :: enterenrolllist(string st)
{
   fstream file;
    string checklist;
    int checkrow = 0;
    int checkcolumn = 0;

    file.open(st, ios::out | ios::in);
    while (!file.eof())
    {
        getline(file, checklist);
        int x = stoi(checklist);
        getenroll(x, checkrow, checkcolumn);
        checkcolumn++;
        if (checkcolumn == 6)
        {
            checkcolumn = 0;
            checkrow++;
        }
    }
    file.close();
}

void IT206 :: enterprofpass(string st)
{
    fstream file;
    string tmpprofpass;
    file.open(st, ios::out | ios::in);
    while (!file.eof())
    {

        getline(file, tmpprofpass);
        string dectemppass = decode(tmpprofpass);
        getprofpass(dectemppass);
    }
    file.close();
}

void IT206 :: entercoursemat(string st)
{

    fstream file;
    string tmpcm;
    file.open("y1cm.txt", ios::out | ios::in);
    while (!file.eof())
    {
        getline(file, tmpcm);
        char index = tmpcm[0];

        getmat(tmpcm, index);
    }
    file.close();
}

void IT206 :: enteradminpass(string st)
{
    fstream file;
    string tmpadmin;
    file.open(st, ios::out | ios::in);
    getline(file, tmpadmin);
    string decadmin = decode(tmpadmin);
    getadmin(decadmin);
    file.close();
}

