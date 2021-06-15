#include <bits/stdc++.h>

#include "IT206.h"


using namespace std;

int main()
{

    char choice = '0';

    IT206 y1(1), y2(2), y3(3), y4(4);

    y1.course_name[0] = {"IT105"};
    y1.course_name[1] = {"SC115"};
    y1.course_name[2] = {"El125"};
    y1.course_name[3] = {"HM135"};
    y1.course_name[4] = {"AC145"};
    y1.course_name[5] = {"DS155"};

    y2.course_name[0] = {"IT205"};
    y2.course_name[1] = {"SC215"};
    y2.course_name[2] = {"El225"};
    y2.course_name[3] = {"HM235"};
    y2.course_name[4] = {"AC245"};
    y2.course_name[5] = {"DS255"};

    y3.course_name[0] = {"IT305"};
    y3.course_name[1] = {"SC315"};
    y3.course_name[2] = {"El325"};
    y3.course_name[3] = {"HM335"};
    y3.course_name[4] = {"AC345"};
    y3.course_name[5] = {"DS355"};

    y4.course_name[0] = {"IT405"};
    y4.course_name[1] = {"SC415"};
    y4.course_name[2] = {"El425"};
    y4.course_name[3] = {"HM435"};
    y4.course_name[4] = {"AC445"};
    y4.course_name[5] = {"DS455"};

    y1.prof[0] = {"AK_sharma"};
    y1.prof[1] = {"HK_Agarawal"};
    y1.prof[2] = {"MN_Pandey"};
    y1.prof[3] = {"PK_Loomba"};
    y1.prof[4] = {"BH_Sharma"};
    y1.prof[5] = {"MY_Patel"};

    y2.prof[0] = {"BK_sharma"};
    y2.prof[1] = {"IK_Agarawal"};
    y2.prof[2] = {"JN_Pandey"};
    y2.prof[3] = {"RK_Loomba"};
    y2.prof[4] = {"CH_Sharma"};
    y2.prof[5] = {"NY_Patel"};

    y3.prof[0] = {"CK_sharma"};
    y3.prof[1] = {"JK_Agarawal"};
    y3.prof[2] = {"RN_Pandey"};
    y3.prof[3] = {"QK_Loomba"};
    y3.prof[4] = {"NH_Sharma"};
    y3.prof[5] = {"OY_Patel"};

    y4.prof[0] = {"DK_sharma"};
    y4.prof[1] = {"KK_Agarawal"};
    y4.prof[2] = {"PN_Pandey"};
    y4.prof[3] = {"SK_Loomba"};
    y4.prof[4] = {"NH_Sharma"};
    y4.prof[5] = {"PY_Patel"};

    for (int i = 0; i < 3; i++)
    {
        int k = i;
        for (int j = 0; j < 6; j++)
        {

            y1.time_table[i][j] = (k + j) % 7;
            k++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        int k = i;
        for (int j = 0; j < 6; j++)
        {

            y2.time_table[i][j] = (k + j) % 7;
            k++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        int k = i;
        for (int j = 0; j < 6; j++)
        {

            y3.time_table[i][j] = (k + j) % 7;
            k++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        int k = i;
        for (int j = 0; j < 6; j++)
        {

            y4.time_table[i][j] = (k + j) % 7;
            k++;
        }
    }



    y1.enterstdname("y1std_name.txt");
    y1.enterstdpass("y1stdpass.txt");
    y1.enterenrolllist("y1enroll_list.txt");
    y1.enterprofpass("y1profpass.txt");
    y1.entercoursemat("y1cm.txt");
    y1.enteradminpass("y1adminpass.txt");

    y2.enterstdname("y2std_name.txt");
    y2.enterstdpass("y2stdpass.txt");
    y2.enterenrolllist("y2enroll_list.txt");
    y2.enterprofpass("y2profpass.txt");
    y2.entercoursemat("y2cm.txt");
    y2.enteradminpass("y2adminpass.txt");

       y3.enterstdname("y3std_name.txt");
    y3.enterstdpass("y3stdpass.txt");
    y3.enterenrolllist("y3enroll_list.txt");
    y3.enterprofpass("y3profpass.txt");
    y3.entercoursemat("y3cm.txt");
    y3.enteradminpass("y3adminpass.txt");

       y4.enterstdname("y4std_name.txt");
    y4.enterstdpass("y4stdpass.txt");
    y4.enterenrolllist("y4enroll_list.txt");
    y4.enterprofpass("y4profpass.txt");
    y4.entercoursemat("y4cm.txt");
    y4.enteradminpass("y4adminpass.txt");



     cout<<      "====================================================================================================="<<endl;
         cout<<endl<<"-----------------------------Welcome to COURSE MANAGEMENT SYSTEM ------------------------------------"<<endl;
         cout<<endl<<"====================================================================================================="<<endl;


    do
    {


        int year;
        cout <<endl<< "Enter your current course year 1/2/3/4 : ";
            cin >> year;
         cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;


        while (year < 1 || year > 4)
        {
            cout << "You entered wrong year" << endl
                 << "Please, enter your course year again" << endl;
            cin >> year;
            cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
        }

        switch (year)
        {
        case 1:
        {
            int person;
            cout << "Enter 1 for student login:" << endl
                 << "Enter 2 for professor login:" << endl
                 << "Enter 3 for administrator login:" << endl;

            cin >> person;
            cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;

            while (person < 1 || person > 3)
            {
                cout << "Your entered input is wrong, please try again" << endl;
                cout << "Enter 1 for student login:" << endl
                     << "Enter 2 for professor login:" << endl
                     << "Enter 3 for administrator login:" << endl;
                cin >> person;
                cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
            }

            switch (person)
            {
            case 1:

                y1.student();
                break;

            case 2:
                y1.professor();
                break;

            case 3:
                y1.admin();
                break;

            default:
                break;
            }
            break;
        }
        case 2:
        {
             int person;
            cout << "Enter 1 for student login:" << endl
                 << "Enter 2 for professor login:" << endl
                 << "Enter 3 for administrator login:" << endl;
            cin >> person;
             cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;

            while (person < 1 || person > 3)
            {
                cout << "Your entered input is wrong, please try again" << endl;
                cout << "Enter 1 for student login:" << endl
                     << "Enter 2 for professor login:" << endl
                     << "Enter 3 for administrator login:" << endl;
                cin >> person;
                 cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
            }

            switch (person)
            {
            case 1:

                y2.student();
                break;

            case 2:
                y2.professor();
                break;

            case 3:
                y2.admin();
                break;

            default:
                break;
            }
            break;
        }

        case 3:
        {
             int person;
            cout << "Enter 1 for student login:" << endl
                 << "Enter 2 for professor login:" << endl
                 << "Enter 3 for administrator login:" << endl;
            cin >> person;
             cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;

            while (person < 1 || person > 3)
            {
                cout << "Your entered input is wrong, please try again" << endl;
                cout << "Enter 1 for student login:" << endl
                     << "Enter 2 for professor login:" << endl
                     << "Enter 3 for administrator login:" << endl;
                cin >> person;
                 cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
            }

            switch (person)
            {
            case 1:

                y3.student();
                break;

            case 2:
                y3.professor();
                break;

            case 3:
                y3.admin();
                break;

            default:
                break;
            }
            break;
        }

        case 4:
        {
             int person;
            cout << "Enter 1 for student login:" << endl
                 << "Enter 2 for professor login:" << endl
                 << "Enter 3 for administrator login:" << endl;
            cin >> person;
             cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;

            while (person < 1 || person > 3)
            {
                cout << "Your entered input is wrong, please try again" << endl;
                cout << "Enter 1 for student login:" << endl
                     << "Enter 2 for professor login:" << endl
                     << "Enter 3 for administrator login:" << endl;
                cin >> person;
                 cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
            }

            switch (person)
            {
            case 1:

                y4.student();
                break;

            case 2:
                y4.professor();
                break;

            case 3:
                y4.admin();
                break;

            default:
                break;
            }
            break;
        }

        default:
            break;
        }
         cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl<<endl;
        cout << "FOR, another login type 'Y' else any key to exist : ";
        cin >> choice;
         cout<<endl<<"-----------------------------------------------------------------------------------------------------"<<endl;
    } while (choice == 'Y');


    string filename = "y1std_name.txt";
    y1.endsname(filename);
    string filepass = "y1stdpass.txt";
    y1.endpass(filepass);
    string fileenroll = "y1enroll_list.txt";
    y1.endenroll(fileenroll);
    string fileprofpass = "y1profpass.txt";
    y1.endprofpass(fileprofpass);
    string filecm = "y1cm.txt";
    y1.endcm(filecm);
    string endadm = "y1adminpass.txt";
    y1.endadmin(endadm);

    filename = "y2std_name.txt";
    y2.endsname(filename);
    filepass = "y2stdpass.txt";
    y2.endpass(filepass);
    fileenroll = "y2enroll_list.txt";
    y2.endenroll(fileenroll);
    fileprofpass = "y2profpass.txt";
    y2.endprofpass(fileprofpass);
    filecm = "y2cm.txt";
    y2.endcm(filecm);
    endadm = "y2adminpass.txt";
    y2.endadmin(endadm);

      filename = "y3std_name.txt";
    y3.endsname(filename);
    filepass = "y3stdpass.txt";
    y3.endpass(filepass);
    fileenroll = "y3enroll_list.txt";
    y3.endenroll(fileenroll);
    fileprofpass = "y3profpass.txt";
    y3.endprofpass(fileprofpass);
    filecm = "y3cm.txt";
    y3.endcm(filecm);
    endadm = "y3adminpass.txt";
    y3.endadmin(endadm);

      filename = "y4std_name.txt";
    y4.endsname(filename);
    filepass = "y4stdpass.txt";
    y4.endpass(filepass);
    fileenroll = "y4enroll_list.txt";
    y4.endenroll(fileenroll);
    fileprofpass = "y4profpass.txt";
    y4.endprofpass(fileprofpass);
    filecm = "y4cm.txt";
    y4.endcm(filecm);
    endadm = "y4adminpass.txt";
    y4.endadmin(endadm);

    return 0;
}
