#include <iostream>
using namespace std;
int degree, year, semester;
int facultyofBachelorDegrees, facultyofba;
int facultyoffb;

void program()
{
    cout << "\t==============>>3 Main degrees<<============\n";
    cout << "\t1.Bachelor Degrees\n";
    cout << "\t2.Master's Degrees\n";
    cout << "\t3.Doctoral Degrees\n";
    cout << "\tPlease Enter the Degree:";
    cin >> degree;
}
void faculties()
{
    system("cls");
    switch (degree)
    {
    case 1:
        cout << "\t===============>>Bachelor Degrees<<=============\n";
        cout << "\t1.Faculty of Business Administration\n";
        cout << "\t2.Faculty of Finance and Banking\n";
        cout << "\t3.Faculty of Economics\n";
        cout << "\t4.Faculty of Law\n";
        cout << "\t5.Faculty of Education,Arts and Humanities\n";
        cout << "\t6.Faculty of Tourism and Hospitality\n";
        cout << "\t7.Faculty of Information Technology and Science\n";
        cout << "\t8.Faculty of Digital and Telecommunication Technology\n";
        cout << "\t9.Faculty of Engineering\n";
        cout << "\t10.Faculty of Architecture\n";
        cout << "\t11.Faculty of International Relations\n";
        cout << "\t12.Faculty of Civil Aviation\n";
        cout << "\tPlease Enter the Facuty:";
        cin >> facultyofBachelorDegrees;
        break;
    case 2:
        cout << "\t===============>>Master's Degrees<<=============\n";
        cout << "\t1.Faculty of Business Administration\n";
        cout << "\t2.Faculty of Finance and Banking\n";
        cout << "\t3.Faculty of Economics\n";
        cout << "\t4.Faculty of Law\n";
        cout << "\t5.Faculty of Education,Arts and Humanities\n";
        cout << "\t6.Faculty of Tourism and Hospitality\n";
        cout << "\t7.Faculty of Information Technology and Science\n";
        cout << "\t8.Faculty of Digital and Telecommunication Technology\n";
        cout << "\t9.Faculty of Engineering\n";
        cout << "\t10.Faculty of Architecture\n";
        cout << "\t11.Faculty of International Relations\n";
        cout << "\t12.Faculty of Civil Aviation\n";
        break;
    case 3:
        cout << "\t===============>>Doctoral Degrees<<=============\n";
        cout << "\t1.Faculty of Business Administration\n";
        cout << "\t2.Faculty of Finance and Banking\n";
        cout << "\t3.Faculty of Economics\n";
        cout << "\t4.Faculty of Law\n";
        cout << "\t5.Faculty of Education,Arts and Humanities\n";
        cout << "\t6.Faculty of Tourism and Hospitality\n";
        cout << "\t7.Faculty of Information Technology and Science\n";
        cout << "\t8.Faculty of Digital and Telecommunication Technology\n";
        cout << "\t9.Faculty of Engineering\n";
        cout << "\t10.Faculty of Architecture\n";
        cout << "\t11.Faculty of International Relations\n";
        cout << "\t12.Faculty of Civil Aviation\n";
        break;
    default:
        break;
    }
}
void BachelorDegrees()
{
    system("cls");
    switch (facultyofBachelorDegrees)
    {
    case 1:
        cout << "\t====>>Faculty of Business Administration<<===\n";
        cout << "\t1.Bachelor of Business Adminsitration,General Management\n";
        cout << "\t2.Bachelor of Business Adminsitration in International Business\n";
        cout << "\t3.Bachelor of Business Adminsitration in Entrepreneurship and Innovation\n";
        cout << "\t4.Bachelor of Business Adminsitration in Accounting\n";
        cout << "\t5.Bachelor of Business Adminsitration in Marketing\n";
        cout << "\tPlease Enter the Faculty:";
        cin >> facultyofba;
        break;
    case 2:
        cout << "\t===>>Faculty of Finance and Banking<<===\n";
        cout << "\t1.Bachelor of Finance and Banking in Finance and Banking\n";
        cout << "\t2.Bachelor of Finance and Banking in International Banking\n";
        cout << "\t3.Bachelor of Finance and Banking in Financial Technology\n";
        cout << "\tPlease Enter the Faculty:";
        cin >> facultyoffb;
        break;
    case 3:
        cout << "\t===>>Faculty of Economics<<===\n";
        cout << "\t1.Bachelor of Economics\n";
        cout << "\t2.Bachelor of Economics Development\n";
        cout << "\t3.Bachelor of International Economics\n";
        cout << "\t4.Bachelor of Digital Economics\n";
        break;
    case 4:
        cout << "\t===>>Faculty of Law<<===\n";
        cout << "\t1.Bachelor of Laws\n";
        cout << "\t2.Bachelor of Laws in Private Law\n";
        cout << "\t3.Bachelor of Laws in International Law\n";
        cout << "\t4.Bachelor of Laws in Public Administration\n";
        break;
    case 5:
        cout << "\t===>>Faculty of Education,Arts and Humanities<<===\n";
        cout << "\t1.Bachelor of Education in Education Administration and Leadership\n";
        cout << "\t2.Bachelor of Education in English Language Teaching\n";
        cout << "\t3.Bachelor of Education in Communication\n";
        cout << "\t4.Bachelor of Education in Khmer Literature\n";
        cout << "\t5.Bachelor of Education in Mathematics\n";
        cout << "\t6.Bachelor of Education in Physics\n";
        cout << "\t7.Bachelor of Education in Chemistry\n";
        break;
    case 6:
        cout << "\t===>>Faculty of Tourism and Hospitality<<===\t";
        cout << "\t1.Bachelor of Torism and Hospitality in Tourism Management\n";
        cout << "\t2.Bachelor of Torism and Hospitality in Hotel Management\n";
        cout << "\t3.Bachelor of Torism and Hospitality in Hospitality Management\n";
        break;
    case 7:
        cout << "\t===>>Faculty of Information Technology and Science<<===\n";
        cout << "1.Bachelor of Information Technology in Software Engineering\n";
        cout << "2.Bachelor of Information Technology in Computer Networking and Information Security\n";
        cout << "3.Bachelor of Information Technology in Digital Communication and Media\n";
        break;
    case 8:
        cout << "\t===>>Faculty of Digital and Telecommunication Technology<<===\n";
        cout << "\t1.Bachelor of Science in Digital Technology\n";
        cout << "\t2.Bachelor of Science in Digital Communication and Media\n";
        cout << "\t3.Bachelor of Science in Electrical and Telecommunication Engineering\n";
        break;
    case 9:
        cout << "\t===>>Faculty of Engineering<<==\n";
        cout << "\t1.Bachelor of Engineering in Civil Engineering\n";
        cout << "\t2.Bachelor of Engineering in Civil Engineering Management\n";
        break;
    case 10:
        cout << "===>>Faculty of Architecture<<===\n";
        cout << "\t1.Bachelor of Architecture in Architecture and Urban Planning\n";
        cout << "\t2.Bachelor of Architecture in Building Architecture\n";
        break;
    case 11:
        cout << "\t===>>Faculty of International Relations<<===\n";
        cout << "\t1.Bachelor of International Relations\n";
        cout << "\t2.Bachelor of Diplomacy\n";
        cout << "\t3.Bachelor of International Affairs and Negotiation\n";
        break;
    case 12:
        cout << "\t===>>Faculty of Civil Aviation<<===\n";
        cout << "\t1.Bachelor of Aviation,Airline and Airport Management\n";
        cout << "\t2.Bachelor of Aviation in Aviation Management\n";
        cout << "\t3.Bachelor of Aviation in Aircraft Maintenance Engineering\n";
        break;
    default:
        break;
    }
}
void BachelorofBA()
{
    switch (facultyofba)
    {
    case 1:
        cout << "\t===>>Bachelor of Business Adminsitration,General Management<<===\n";
        cout << "\tPlease Enter Year(1-4):";
        cin >> year;
        switch (year)
        {
        case 1:
            system("cls");
            cout << "\tPlease Enter Semsester(1-2):";
            cin >> semester;
            system("cls");
            cout << "\t---------->>Bachelor of Business Adminsitration,General Management<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year1 Semester1<<===\n\n";
                cout << "\t1.English for Business\n";
                cout << "\t2.Business Writing Skills\n";
                cout << "\t3.Principles of Economics\n";
                cout << "\t4.Principles of Accounting\n";
                cout << "\t5.Introduction to Business Strategy\n";
                break;
            case 2:
                cout << "\t===>>Year1 Semester2<<===\n\n";
                cout << "\t1.Business Start-Up\n";
                cout << "\t2.Mathematics for Business\n";
                cout << "\t3.English for Business Management\n";
                cout << "\t4.Interpersonal Skills in Org\n";
                cout << "\t5.Soft Skills for Management\n";
                break;
            }
            break;
        case 2:
            system("cls");
            cout << "\tPlease Enter Semsester(1-2):";
            cin >> semester;
            system("cls");
            cout << "\t---------->>Bachelor of Business Adminsitration,General Management<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year2 Semester1<<===\n\n";
                cout << "\t1.Consumer Behaviors\n";
                cout << "\t2.Microeconomics\n";
                cout << "\t3.Contemporary Management\n";
                cout << "\t4.Business Concepts\n";
                cout << "\t5.Principles of Marketing\n";
                break;
            case 2:
                cout << "\t===>>Year2 Semester2<<===\n\n";
                cout << "\t1.Intro. to Research Studies\n";
                cout << "\t2.Macroeconomise\n";
                cout << "\t3.Statistics for GM\n";
                cout << "\t4.Business Law\n";
                cout << "\t5.Administrative Skills\n";
                break;
            }
            break;
        case 3:
            system("cls");
            system("cls");
            cout << "\tPlease Enter Semsester(1-2):";
            cin >> semester;
            system("cls");
            cout << "\t---------->>Bachelor of Business Adminsitration,General Management<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year3 Semester1<<===\n\n";
                cout << "\t1.Business Communication\n";
                cout << "\t2.HR Management\n";
                cout << "\t3.Risk Management\n";
                cout << "\t4.Business Ethis\n";
                cout << "\t5.Office Management\n";
                break;
            case 2:
                cout << "\t===>>Year3 Semester2<<===\n\n";
                cout << "\t1.Business Environment\n";
                cout << "\t2.Technical & Report Writing\n";
                cout << "\t3.Organizational Behaviors\n";
                cout << "\t4.Operation Management\n";
                cout << "\t5.Business Management\n";
                break;
            }

            break;
        case 4:
            system("cls");
            cout << "\tPlease Enter Semsester(1-2):";
            cin >> semester;
            system("cls");
            cout << "\t---------->>Bachelor of Business Adminsitration,General Management<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year4 Semester1<<===\n\n";
                cout << "\t1.Research Proposal Writing\n";
                cout << "\t2.Project Management\n";
                cout << "\t3.Financial Management\n";
                cout << "\t4.Leadership Skills\n";
                break;
            case 2:
                cout << "\t===>>Year4 Semester2<<===\n\n";
                cout << "\t1.Strategic Management\n";
                cout << "\t2.Total Quality Management\n";
                cout << "\t3.Investment Management\n";
                cout << "\t4.Services Management\n";
                cout << "\t5.Bachelor's Thesis\n";
                break;
            }
            break;
        }
        break;
    case 2:
        cout << "\t2.Bachelor of Business Adminsitration in International Business\n";
        cout << "\tPlease Enter Year(1-4):";
        cin >> year;
        switch (year)
        {
        case 1:
            system("cls");
            cout << "\tPlease Enter Semsester(1-2):";
            cin >> semester;
            system("cls");
            cout << "\t---------->>Bachelor of Business Adminsitration in International Business<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year1 Semester1<<===\n\n";
                cout << "\t1.English for Business\n";
                cout << "\t2.Business Writing Skills\n";
                cout << "\t3.Principles of Economics\n";
                cout << "\t4.Principles of Accounting\n";
                cout << "\t5.Introduction to Business Strategy\n";
                break;
            case 2:
                cout << "\t===>>Year1 Semester2<<===\n\n";
                cout << "\t1.Business Start-Up\n";
                cout << "\t2.Mathematics ffor Business\n";
                cout << "\t3.English for Inter. Business\n";
                cout << "\t4.Global Interpersonal Skills\n";
                cout << "\t5.Soft Skills for Inter Business\n";
                break;
            }

            break;
        case 2:
            system("cls");
            cout << "\tPlease Enter Semsester(1-2):";
            cin >> semester;
            system("cls");
            cout << "\t---------->>Bachelor of Business Adminsitration in International Business<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year2 Semester1<<===\n\n";
                cout << "\t1.Consume Behaviors\n";
                cout << "\t2.Microeconomics\n";
                cout << "\t3.Contemporay Management\n";
                cout << "\t4.Inter. Business Concepts\n";
                cout << "\t5.Marking Concepts\n";
                break;
            case 2:
                cout << "\t===>>Year2 Semester2<<===\n\n";
                cout << "\t1.Intro. Research Studies\n";
                cout << "\t2.Macroeconomics\n";
                cout << "\t3.Statistics for Applicaion\n";
                cout << "\t4.International Trade Law\n";
                cout << "\t5.Understanding Inter Business\n";
                break;
            }

            break;
        case 3:
            system("cls");
            cout << "\tPlease Enter Semsester(1-2):";
            cin >> semester;
            system("cls");
            cout << "\t---------->>Bachelor of Business Adminsitration in International Business<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year3 Semester1<<===\n\n";
                cout << "\t1.Business Communication\n";
                cout << "\t2.HR Management\n";
                cout << "\t3.Coopeeration & Conflict Mgt\n";
                cout << "\t4.Inter. Business Ethics\n";
                cout << "\t5.Global Bus. Operations\n";
                break;
            case 2:
                cout << "\t===>>Year3 Semester2<<===\n\n";
                cout << "\t1.Business Environment\n";
                cout << "\t2.Technical & Report Writing\n";
                cout << "\t3.Inter Org Behaviors\n";
                cout << "\t4.International Trade in Business\n";
                cout << "\t5.International Organizations\n";
                break;
            }
            break;
        case 4:
            system("cls");
            cout << "\tPlease Enter Semsester(1-2):";
            cin >> semester;
            system("cls");
            cout << "\t---------->>Bachelor of Business Adminsitration in International Business<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year4 Semester1<<===\n\n";
                cout << "\t1.Research Proposal Writing\n";
                cout << "\t2.E-Busineess & Commeerce\n";
                cout << "\t3.International Management\n";
                cout << "\t4.Inter. Leadership Skills\n";
                cout << "\t5.Import and Export Management\n";
                break;
            case 2:
                cout << "\t===>>Year4 Semester2<<===\n\n";
                cout << "\t1.Strategic Management\n";
                cout << "\t2.Cross Cultural Communication\n";
                cout << "\t3.SME Management\n";
                cout << "\t4.Digital Marking\n";
                cout << "\t5.Bachelor's Thesis\n";
                break;
            }
            break;
        }

        break;
    case 3:
        cout << "\t3.Bachelor of Business Adminsitration in Entrepreneurship and Innovation\n";
        cout << "\tPlease Enter Year(1-4):";
        cin >> year;
        switch (year)
        {
        case 1:
            // year1
            system("cls");
            cout << "\tPlease Enter Semsester(1-2):";
            cin >> semester;
            system("cls");
            cout << "\t---------->>Bachelor of Business Adminsitration in Entrepreneurship and Innovation<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year1 Semester1<<===\n\n";
                cout << "\t1.English for Business\n";
                cout << "\t2.Business Writing Skills\n";
                cout << "\t3.Principles of Economics\n";
                cout << "\t4.Principles of Accounting\n";
                cout << "\t5.Introduction to Business Strategy\n";
                break;
            case 2:
                cout << "\t===>>Year1 Semester2<<===\n\n";
                cout << "\t1.Business Start-Up\n";
                cout << "\t2.Mathematic for Business\n";
                cout << "\t3.English for Entrepreneurship\n";
                cout << "\t4.Presentation Skills\n";
                cout << "\t5.Soft Skills for Entrepreneurship\n";

                break;
            }

            break;
        case 2:
            // year2
            system("cls");
            cout << "\tPlease Enter Semsester(1-2):";
            cin >> semester;
            system("cls");
            cout << "\t---------->>Bachelor of Business Adminsitration in Entrepreneurship and Innovation<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year2 Semester1<<===\n\n";
                cout << "\t1.Consumer Behacviors\n";
                cout << "\t2.Microeconomics\n";
                cout << "\t3.Contemporary Management\n";
                cout << "\t4.Understanding Business\n";
                cout << "\t5.Fundamentals of Marketing\n";

                break;
            case 2:
                cout << "\t===>>Year2 Semester2<<===\n\n";
                cout << "\t1.Intro. Research Studies\n";
                cout << "\t2.Macroeconomics\n";
                cout << "\t3.Statistics Analysis for Entrepreneurship\n";
                cout << "\t4.Innovation and Change Management\n";
                cout << "\t5.Understanding of Entrepreneurship\n";
                break;
            }

            break;
        case 3:
            // year3
            system("cls");
            cout << "\tPlease Enter Semsester(1-2):";
            cin >> semester;
            system("cls");
            cout << "\t---------->>Bachelor of Business Adminsitration in Entrepreneurship and Innovation<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year3 Semester1<<===\n\n";
                cout << "\t1.Business Communication\n";
                cout << "\t2.HR Management\n";
                cout << "\t3.Org. Risk Management\n";
                cout << "\t4.Org. Cults and Ethics\n";
                cout << "\t5.Business Operations\n";
                break;
            case 2:
                cout << "\t===>>Year3 Semester2<<===\n\n";
                cout << "\t1.Business Environment\n";
                cout << "\t2.Tchnical & Report Writing\n";
                cout << "\t3.Entrepreneurial Behaviors\n";
                cout << "\t4.Business Plan in Practice\n";
                cout << "\t5.SME Management\n";

                break;
            }

            break;
        case 4:
            // year4
            system("cls");
            cout << "\tPlease Enter Semsester(1-2):";
            cin >> semester;
            system("cls");
            cout << "\t---------->>Bachelor of Business Adminsitration in Entrepreneurship and Innovation<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year4 Semester1<<===\n\n";
                cout << "\t1.Research Proposal Writing\n";
                cout << "\t2.Creative Thinking & Dep. Entrep\n";
                cout << "\t3.Entrepreneurship Marketing\n";
                cout << "\t4.Leadership Skills for Entrepreneurs\n";
                cout << "\t5.Business Research for Entrepreneurship\n";
                break;
            case 2:
                cout << "\t===>>Year4 Semester2<<===\n\n";
                cout << "\t1.Innovation & Tech for Entrepreneurship\n";
                cout << "\t2.Social Entrep. & Global Opportunity\n";
                cout << "\t3.Human Capital Management\n";
                cout << "\t4.Finance & Acc For Entrepreneurship\n";
                cout << "\t5.Bachelor's Theseis\n";

                break;
            }
            break;
        }
        break;
    case 4:
        cout << "\t4.Bachelor of Business Adminsitration in Accounting\n";
        cout << "\tPlease Enter Year(1-4):";
        cin >> year;
        switch (year)
        {
        case 1:
            // year1
            system("cls");
            cout << "\tPlease Enter Semsester(1-2):";
            cin >> semester;
            cout << "\t---------->>Bachelor of Business Adminsitration in Accounting<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year1 Semester1<<===\n\n";
                cout << "\t1.English for Business\n";
                cout << "\t2.Business Writing Skills\n";
                cout << "\t3.Principles of Economics\n";
                cout << "\t4.Principles of Accounting\n";
                cout << "\t5.Introdction to Business Strategy\n";
                break;
            case 2:
                cout << "\t===>>Year1 Semester2<<===\n\n";
                cout << "\t1.Business Start-Up\n";
                cout << "\t2.Mathematic for Business\n";
                cout << "\t3.English for Business Accounting\n";
                cout << "\t4.Principles of Accounting II\n";
                cout << "\t5.Soft Skills for Accounting\n";
                break;
            }

            break;
        case 2:
            // year2
            system("cls");
            cout << "\tPlease Enter Semsester(1-2):";
            cin >> semester;
            cout << "\t---------->>Bachelor of Business Adminsitration in Accounting<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year2 Semester1<<===\n\n";
                cout << "\t1.Consumer Behaviors\n";
                cout << "\t2.Microeconomics\n";
                cout << "\t3.Contemporary Management\n";
                cout << "\t4.QuickBooks Accounting\n";
                cout << "\t5.Accounting for Marketing\n";
                break;
            case 2:
                cout << "\t===>>Year2 Semester2<<===\n\n";
                cout << "\t1.Intro. Research Studies\n";
                cout << "\t2.Macroeconomics\n";
                cout << "\t3.Statistics for Accounting\n";
                cout << "\t4.Business Law for Acc\n";
                cout << "\t5.Public Financee\n";
                break;
            }
            break;
        case 3:
            // yeaar3
            system("cls");
            cout << "\tPlease Enter Semsester(1-2):";
            cin >> semester;
            cout << "\t---------->>Bachelor of Business Adminsitration in Accounting<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year3 Semester1<<===\n\n";
                cout << "\t1.Business Communication\n";
                cout << "\t2.HR Management\n";
                cout << "\t3.Managerial Accounting I\n";
                cout << "\t4.Org. Cults and Practice\n";
                cout << "\t5.Accounting Operation\n";
                break;
            case 2:
                cout << "\t===>>Year3 Semester2<<===\n\n";
                cout << "\t1.Business Environment\n";
                cout << "\t2.Technical & Reeport Writing\n";
                cout << "\t3.Cost Accounting\n";
                cout << "\t4.Managerial Accounting II\n";
                cout << "\t5.Accounting for Bank\n";
                break;
            }

            break;
        case 4:
            // year4
            system("cls");
            cout << "\tPlease Enter Semsester(1-2):";
            cin >> semester;
            cout << "\t---------->>Bachelor of Business Adminsitration in Accounting<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year4 Semester1<<===\n\n";
                cout << "\t1.Research Proposal Writing\n";
                cout << "\t2.Intermediate Accounting\n";
                cout << "\t3.Auditing\n";
                cout << "\t4.Accounting Infor Systems\n";
                cout << "\t5.Taxation Accounting\n";
                break;
            case 2:
                cout << "\t===>>Year4 Semester2<<===\n\n";
                cout << "\t1.Advanced Accounting\n";
                cout << "\t2.Financial Statement Analysis\n";
                cout << "\t3.Intermational Accounting\n";
                cout << "\t4.Accounting fr Govt and Non-Profit Entities\n";
                cout << "\t5.Bachelor's Thesis\n";
                break;
            }

            break;
        }

        break;
    case 5:
        cout << "\t5.Bachelor of Business Adminsitration in Marketing\n";
        cout << "\tPlease Enter Year(1-4):";
        cin >> year;
        switch (year)
        {
        case 1:
            // year1
            system("cls");
            cout << "\tPlease Enter Semsester(1-2):";
            cin >> semester;
            cout << "\t---------->>Bachelor of Business Adminsitration in Marketing<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year1 Semester1<<===\n\n";
                cout << "\t1.English for Business\n";
                cout << "\t2.Business Writing Skills\n";
                cout << "\t3.Principles of Economics\n";
                cout << "\t4.Principles of Accounting\n";
                cout << "\t5.Introdution to Business Strategy\n";

                break;
            case 2:
                cout << "\t===>>Year1 Semester2<<===\n\n";
                cout << "\t1.Business Start Up\n";
                cout << "\t2.Mathematic for Business\n";
                cout << "\t3.English for Business Marketing\n";
                cout << "\t4.Intro to Finace\n";
                cout << "\t5.Soft Skils for Marketing\n";
                break;
            }
            break;
        case 2:
            // year2
            system("cls");
            cout << "\tPlease Enter Semsester(1-2):";
            cin >> semester;
            cout << "\t---------->>Bachelor of Business Adminsitration in Marketing<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year2 Semester1<<===\n\n";
                cout << "\t1.Consumer Behaviors\n";
                cout << "\t2.Microeconomics\n";
                cout << "\t3.Contemporay Management\n";
                cout << "\t4.Business Marketing\n";
                cout << "\t5.Principles of Marketing\n";
                break;
            case 2:
                cout << "\t===>>Year2 Semester2<<===\n\n";
                cout << "\t1.Intro. Research Studies\n";
                cout << "\t2.Macroeconomics\n";
                cout << "\t3.Statistics Analysis for Marketing\n";
                cout << "\t4.Supply Chain Management\n";
                cout << "\t5.Supervision Skills\n";
                break;
            }

            break;
        case 3:
            // year3
            system("cls");
            cout << "\tPlease Enter Semsester(1-2):";
            cin >> semester;
            cout << "\t---------->>Bachelor of Business Adminsitration in Marketing<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year3 Semester1<<===\n\n";
                cout << "\t1.Business Communication\n";
                cout << "\t2.HR Management\n";
                cout << "\t3.Risk Management\n";
                cout << "\t4.Corporate Social Responsibility\n";
                cout << "\t5.Product Management\n";

                break;
            case 2:
                cout << "\t===>>Year3 Semester2<<===\n\n";
                cout << "\t1.Business Environment\n";
                cout << "\t2.Technical & Report Writing\n";
                cout << "\t3.Digital Marketing\n";
                cout << "\t4.Business Development Managemeent\n";
                cout << "\t5.Social Media Marketing\n";
                break;
            }

            break;
        case 4:
            // year4
            system("cls");
            cout << "\tPlease Enter Semester (1-2):";
            cin >> semester;
            cout << "\t---------->>Bachelor of Business Adminsitration in Marketing<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year4 Semester1<<===\n\n";
                cout << "\t1.Research Proposal Writing\n";
                cout << "\t2.Project Proposal Management\n";
                cout << "\t3.Intermational Marketing\n";
                cout << "\t4.Customer Relationship Management\n";
                cout << "\t5.Marketing Research\n";
                break;
            case 2:
                cout << "\t===>>Year4 Semester2<<===\n\n";
                cout << "\t1.Marketing Strategy\n";
                cout << "\t2.Sale Management\n";
                cout << "\t3.E-Business/Commerce\n";
                cout << "\t4.Advertising and Promotion\n";
                cout << "\t5.Bachelor's Tesis\n";
                break;
            }
            break;
        }
        break;
    default:
        break;
    }
}
void BachelorofFB()
{
    system("cls");
    cout << "\t===>>Faculty of Finance and Banking<<===\n";
    switch (facultyoffb)
    {
    case 1:
        cout << "\t===>>Bachelor of Finance and Banking in Finance and Banking<<===\n";
        cout << "\tPlease Enter Year(1-4):";
        cin >> year;
        switch (year)
        {
        case 1:
            // year1
            system("cls");
            cout << "\tPlease Enter Semester (1-2):";
            cin >> semester;
            cout << "\t---------->>Bachelor of Finance and Banking in Finance and Banking<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year1 Semester1<<===\n\n";
                cout << "\t1.English for Communication Success\n";
                cout << "\t2.Business Writing Skills\n";
                cout << "\t3.Principles of Economics\n";
                cout << "\t4.Principles of Accounting\n";
                cout << "\t5.History of Econo mics Thoughts\n";
                break;
            case 2:
                cout << "\t===>>Year1 Semester2<<===\n\n";
                cout << "\t1.Intro. to Demographic Studies\n";
                cout << "\t2.Mathematics for Finance and Banking\n";
                cout << "\t3.English for Finance\n";
                cout << "\t4.Fundamentals of Finance\n";
                cout << "\t5.Soft Skills for Finance and Banking\n";
                break;
            }
            break;
        case 2:
            // year2
            system("cls");
            cout << "\tPlease Enter Semester (1-2):";
            cin >> semester;
            cout << "\t---------->>Bachelor of Finance and Banking in Finance and Banking<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year2 Semester1<<===\n\n";
                cout << "\t1.Micro-Financial Management\n";
                cout << "\t2.Microeconomics\n";
                cout << "\t3.Contemporary Manageement\n";
                cout << "\t4.Understanding Business Communication\n";
                cout << "\t5.Financial Institutions\n";
                break;
            case 2:
                cout << "\t===>>Year2 Semester2<<===\n\n";
                cout << "\t1.Intro. to Research Studies\n";
                cout << "\t2.Fundamentals of Statistics\n";
                cout << "\t3.Macroeconomics\n";
                cout << "\t4.Personal Financial Manageement\n";
                cout << "\t5.Real Estate Management\n";
                break;
            }

            break;
        case 3:
            // year3
            system("cls");
            cout << "\tPlease Enter Semester (1-2):";
            cin >> semester;
            cout << "\t---------->>Bachelor of Finance and Banking in Finance and Banking<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year3 Semester1<<===\n\n";
                cout << "\t1.Fundamentals of HR Management\n";
                cout << "\t2.Organizational Behaviors\n";
                cout << "\t3.Corporate Finance I\n";
                cout << "\t4.Entrepreneurship for Bank\n";
                cout << "\t5.Fiscal Legislation and Taxation\n";
                break;
            case 2:
                cout << "\t===>>Year3 Semester2<<===\n\n";
                cout << "\t1.Corporate Finance II\n";
                cout << "\t2.Investment Management\n";
                cout << "\t3.Monet and Banking\n";
                cout << "\t4.Service Management\n";
                cout << "\t5.Digital Banking\n";
                break;
            }

            break;
        case 4:
            // year4
            system("cls");
            cout << "\tPlease Enter Semester (1-2):";
            cin >> semester;
            cout << "\t---------->>Bachelor of Finance and Banking in Finance and Banking<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year4 Semester1<<===\n\n";
                cout << "\t1.Research Proposal Writing\n";
                cout << "\t2.Public Finance\n";
                cout << "\t3.Accounting for Bank\n";
                cout << "\t4.Bank Investment\n";
                cout << "\t5.International Finance\n";

                break;
            case 2:
                cout << "\t===>>Year4 Semester2<<===\n\n";
                cout << "\t1.Finncial Statement Analysis\n";
                cout << "\t2.Credits Management\n";
                cout << "\t3.Bank Management\n";
                cout << "\t4.Risk Management for Finance and Banking\n";
                cout << "\t5.Bachelor's Tesis\n";
                break;
            }
            break;
        }
        break;
    case 2:
        cout << "\t===>>Bachelor of Finance and Banking in International Banking<<===\n";
        cout << "\tPlease Enter Year(1-4):";
        cin >> year;
        switch (year)
        {
        case 1:
            // year1
            system("cls");
            cout << "\tPlease Enter Semester (1-2):";
            cin >> semester;
            cout << "\t---------->>Bachelor of Finance and Banking in International Banking<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year1 Semester1<<===\n\n";
                cout << "\t1.English for Commnication Success\n";
                cout << "\t2.Business WWriting Skills\n";
                cout << "\t3.Principles of Economics\n";
                cout << "\t4.Principles of Accounting\n";
                cout << "\t5.History of Economics Thoughts\n";
                break;
            case 2:
                cout << "\t===>>Year1 Semester2<<===\n\n";
                cout << "\t1.Intro. Inter. Banking Stuies\n";
                cout << "\t2.Mathematics for Finance and Banking\n";
                cout << "\t3.English for Finance and Banking\n";
                cout << "\t4.Fundamentals of Inter. Busineess\n";
                cout << "\t5.Soft Skills for Finance and Banking\n";
                break;
            }

            break;
        case 2:
            // year2
            system("cls");
            cout << "\tPlease Enter Semester (1-2):";
            cin >> semester;
            cout << "\t---------->>Bachelor of Finance and Banking in International Banking<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year2 Semester1<<===\n\n";
                cout << "\t1.Contemporary Management\n";
                cout << "\t2.Microeconomics\n";
                cout << "\t3.Modern Theory of Banking and Finance\n";
                cout << "\t4.Intro.to International Business Communication\n";
                cout << "\t5.Financial Institutions\n";
                break;
            case 2:
                cout << "\t===>>Year2 Semester2<<===\n\n";
                cout << "\t1.Intro. Research Studies\n";
                cout << "\t2.Fundamentals of Statistics\n";
                cout << "\t3.Macroeconomics\n";
                cout << "\t4.Portfolio Management\n";
                cout << "\t5.Real Estate Management\n";
                break;
            }
            break;
        case 3:
            // year3
            system("cls");
            cout << "\tPlease Enter Semester (1-2):";
            cin >> semester;
            cout << "\t---------->>Bachelor of Finance and Banking in International Banking<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year3 Semester1<<===\n\n";
                cout << "\t1.Fundamentals of HR Management\n";
                cout << "\t2.Organizational Behaviors\n";
                cout << "\t3.Business Ethics & Values\n";
                cout << "\t4.Entrepreneurship for Bank\n";
                cout << "\t5.Internationaal Capital Markets\n";

                break;
            case 2:
                cout << "\t===>>Year3 Semester2<<===\n\n";
                cout << "\t1.Understanding Corporate Finance\n";
                cout << "\t2.Investment Management\n";
                cout << "\t3.Money and Banking\n";
                cout << "\t4.Service Management\n";
                cout << "\t5.Fundamentals of Digital Banking\n";
                break;
            }
            break;
        case 4:
            // year3
            system("cls");
            cout << "\tPlease Enter Semester (1-2):";
            cin >> semester;
            cout << "\t---------->>Bachelor of Finance and Banking in International Banking<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year4 Semester1<<===\n\n";
                cout << "\t1.Research Proposal Writing\n";
                cout << "\t2.Monetary Policy and the Role of Central Banks\n";
                cout << "\t3.Strategic Management\n";
                cout << "\t4.Investment Banking\n";
                cout << "\t5.Digital Marketing\n";

                break;
            case 2:
                cout << "\t===>>Year4 Semester2<<===\n\n";
                cout << "\t1.Financial Statement Analysis\n";
                cout << "\t2.Credits Mangement for Banking\n";
                cout << "\t3.International Bank Management\n";
                cout << "\t4.Risk Management for Bank\n";
                cout << "\t5.Bachelor's Thesis\n";
                break;
            }
            break;
        }

        break;
    case 3:
        cout << "\t===>>Bachelor of Finance and Banking in Financial Technology<<===\n";
        cout << "\tPlease Enter Year(1-4):";
        cin >> year;
        switch (year)
        {
        case 1:
            // year1
            system("cls");
            cout << "\tPlease Enter Semester (1-2):";
            cin >> semester;
            cout << "\t---------->>Bachelor of Finance and Banking in Financial Technology<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year1 Semester1<<===\n\n";
                cout << "\t1.English for Communication Success\n";
                cout << "\t2.Business Writing Skills\n";
                cout << "\t3.Principles of Economics\n";
                cout << "\t4.Principles of Accounting\n";
                cout << "\t5.History of Economics Thoughts\n";

                break;
            case 2:
                cout << "\t===>>Year1 Semester2<<===\n\n";
                cout << "\t1.Buusineess Finance\n";
                cout << "\t2.Finite Maths with Calc for Business\n";
                cout << "\t3.English for Financial Technology\n";
                cout << "\t4.Introduction to Financial Technologies\n";
                cout << "\t5.Foundation of Humaan Knowledge\n";
                break;
            }

            break;
        case 2:
            // year2
            system("cls");
            cout << "\tPlease Enter Semester (1-2):";
            cin >> semester;
            cout << "\t---------->>Bachelor of Finance and Banking in Financial Technology<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year2 Semester1<<===\n\n";
                cout << "\t1.Contemporary Management\n";
                cout << "\t2.Microeconomics\n";
                cout << "\t3.Intro. Financial Accounting\n";
                cout << "\t4.Understanding Business Com.\n";
                cout << "\t5.Financial Institutions\n";
                break;
            case 2:
                cout << "\t===>>Year2 Semester2<<===\n\n";
                cout << "\t1.Intro. To Research Studies\n";
                cout << "\t2.Fundamentals of Business Statistics\n";
                cout << "\t3.Management Information Systems\n";
                cout << "\t4.Foudation of Data Sciences\n";
                cout << "\t5.Business Information Modeling\n";
                break;
            }

            break;
        case 3:
            // year3
            system("cls");
            cout << "\tPlease Enter Semester (1-2):";
            cin >> semester;
            cout << "\t---------->>Bachelor of Finance and Banking in Financial Technology<<----------\n";
            switch (semester)
            {
            case 1:
                cout << "\t===>>Year4 Semester1<<===\n\n";
                cout << "\t1.Research Proposal Writing \n";
                cout << "\t2.Financial Strategy\n";
                cout << "\t3.Blockchain Technology\n";
                cout << "\t4.Sustainable Leadership Skills\n";
                cout << "\t5.Modern Technologies on WWW\n";
                break;
            case 2:
                cout << "\t===>>Year4 Semester2<<===\n\n";
                cout << "\t1.Business Applications of Machine Learning\n";
                cout << "\t2.Credits Management and Analysis\n";
                cout << "\t3.Corporate Risk Management\n";
                cout << "\t4.Investment and Portfolio Analysis\n";
                cout << "\t5.Bachelor's Thesis\n";
                break;
            }
            break;
        case 4:
            // year4
            system("cls");
            cout << "\tPlease Enter Semester (1-2):";
            cin >> semester;
            cout << "\t---------->>Bachelor of Finance and Banking in Financial Technology<<----------\n";
            break;
        }

        break;
    }
}

int main()
{
    program();
    faculties();
    BachelorDegrees();
    BachelorofBA();
    BachelorofFB();

    return 0;
}
