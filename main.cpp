#include <iostream>

using namespace std;

int main()
{
    string employeeID, employeeName, employmentType;
    string jobTitle, departmentName;

    int numberofEmployees;
    int JobTitle, department;
    int employmentYear, yearsOfService;
    int performanceRating, attendanceRate;

    int currentYear = 2026;

    double basicSalary, bonusRate;
    double bonusAmount, totalPay;

    cout<<"====TECHNOVA IT SOLUTIONS===="<<endl;
    cout<<endl;

    cout<<"Enter number of employees:"<<endl;
    cin>>numberofEmployees;
    cin.ignore ();

    for (int i = 0; i < numberofEmployees; i++)
    {
        cout<<"EMPLOYEE"<<i + 1<<endl;

    //Employee Information
    cout<<"====EMPLOYEE INFORMATION===="<<endl;
    cout<<"Enter Employee ID:"<<endl;
    getline (cin, employeeID);
    cout<<"Enter Employee Name:"<<endl;
    getline (cin, employeeName);
    cout<<"Enter Employment Type:"<<endl;
    getline (cin, employmentType);
    cout<<"Enter Year of Employment:"<<endl;
    cin>>employmentYear;
    yearsOfService = currentYear - employmentYear;
    cout<<"Enter Performance Rating (0-100):"<<endl;
    cin>>performanceRating;
    cout<<"Enter Attendance Rate (0-100):"<<endl;
    cin>>attendanceRate;

    cout<<"====JOB TITLES===="<<endl;
    cout<<"1. Software Developer"<<endl;
    cout<<"2. IT Support Technician"<<endl;
    cout<<"3. Database Administrator"<<endl;
    cout<<"Select Job Title:"<<endl;
    cin>>JobTitle;

    switch (JobTitle)
    {
    case 1:
        jobTitle = "Software Developer";
        cout<<"Software Developer selected."<<endl;
        cout<<"Software Developer selected."<<endl;
        cout<<"Choose Department:"<<endl;
        cout<<"1. Web Development"<<endl;
        cout<<"2. Mobile App Development"<<endl;
        cout<<"3. Software Testing"<<endl;
        cout<<"Select Department:"<<endl;
        cin>>department;

        switch (department)
        {
        case 1:
            departmentName = "Web Development";
            basicSalary = 25000;
            break;
        case 2:
            departmentName = "Mobile App Development";
            basicSalary = 35000;
            break;
        case 3:
            departmentName = "Software Testing";
            basicSalary = 22000;
            break;
        default:
            departmentName = "Invalid Department";
            basicSalary = 0;
        }
        break;

        case 2:
            jobTitle = "IT Support Technician";
            cout<<"IT Support Technician selected"<<endl;
            cout<<"Choose Department:"<<endl;
            cout<<"1. Hardware Support"<<endl;
            cout<<"2. Technical Support"<<endl;
            cout<<"3. Network Support"<<endl;
            cout<<"Select Department:"<<endl;
            cin>>department;

        switch (department)
        {
            case 1:
            departmentName = "Hardware Support";
            basicSalary = 15000;
            break;
        case 2:
            departmentName = "Technical Help Desk";
            basicSalary = 12000;
            break;
        case 3:
            departmentName = "Network Support";
            basicSalary = 18000;
            break;
        default:
            departmentName = "Invalid Department";
            basicSalary = 0;
        }
        break;

        case 3:
           jobTitle = "Database Administrator";
            cout<<"Database Administrator selected"<<endl;
            cout<<"Choose Department:"<<endl;
            cout<<"1. Database Security"<<endl;
            cout<<"2. Database Development"<<endl;
            cout<<"3. Database Backup and Recovery"<<endl;
            cout<<"Select Department:"<<endl;
            cin>>department;
        switch (department)
        {
            case 1:
            departmentName = "Database Security";
            basicSalary = 40000;
            break;
        case 2:
            departmentName = "Database Development";
            basicSalary = 45000;
            break;
        case 3:
            departmentName = "Database Backup and Recovery";
            basicSalary = 30000;
            break;
        default:
            departmentName = "Invalid Department";
            basicSalary = 0;
        }
        break;

        default:
            jobTitle = "Invalid Job Title";
            departmentName = "Invalid Department";
            basicSalary = 0;
    }
    if (performanceRating >= 90 && attendanceRate >= 80)
    {
        bonusRate = 0.30;
    }
    else if (performanceRating >= 75 && attendanceRate >= 60)
    {
        bonusRate = 0.15;
    }
    else
    {
        bonusRate = 0;
    }

    bonusAmount = basicSalary * bonusRate;
    totalPay = basicSalary + bonusAmount;

    cout<<"====EMPLOYEE PAYROLL===="<<endl;
    cout<<"Employee ID:"<<employeeID<<endl;
    cout<<"Employee Name:"<<employeeName<<endl;
    cout<<"Employment Type:"<<employmentType<<endl;
    cout<<"Job Title:"<<jobTitle<<endl;
    cout<<"Department:"<<departmentName<<endl;
    cout<<"Years of Service:"<<yearsOfService<<"years"<<endl;
    cout<<"Performance Rating:"<<performanceRating<<"%"<<endl;
    cout<<"Attendance Rate:"<<attendanceRate<<"%"<<endl;
    cout<<"Monthly Salary: R"<<basicSalary<<endl;

    if (bonusRate == 0.30)
    {
        cout<<"Bonus Qualification:"<<"You qualify for a 30% bonus."<<endl;
    }
    else if (bonusRate == 0.15)
    {
        cout<<"Bonus Qualification:"<<"You qualify for a 15% bonus."<<endl;
    }
    else
    {
        cout<<"Bonus Qualification:"<<"You do not qualify for a bonus."<<endl;
    }
    cout<<"Bonus Amount: R"<<bonusAmount<<endl;
    cout<<"Total Payment: R"<<totalPay<<endl;

    cout<<"======================"<<endl;
    cout<<"Payroll processing completed."<<endl;
    cin.ignore ();
    }
    return 0;

}
