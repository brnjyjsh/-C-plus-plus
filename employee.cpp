#include <iostream>
#include <string>

int main()
{
    int payRate, hoursWorked, employeeCounted = 0, regularPay,
                              overtimePay, grossPay, tax, netPay, totalGrossPay = 0, totalTax = 0,
                              totalNetPay = 0;
    char employeeCode, employeeLocation, ans;
    do
    {
        employeeCounted += 1;
        cout << "Employee's Pay Rate: ";
        cin >> payRate;
        cout << "Employee's Hours Worked: ";
        cin >> hoursWorked;
        cout << "Employee's Code ( A - FullTIme / B - PartTime ) : ";
        cin >> employeeCode;
        cout << "Employee's Location ( N - NCR / P - Province ) : ";
        cin >> employeeLocation;

        if (hoursWorked <= 40)
        {
            regularPay = payRate * hoursWorked;
            overtimePay = 0;
        }
        else if (hoursWorked > 40)
        {
            regularPay = payRate * 40;
            if (hoursWorked - 40 > 0)
            {
                overtimePay = 1.5 * payRate * (hoursWorked - 40);
            }
            else
            {
                overtimePay = 1.5 * payRate;
            }
        }

        grossPay = refgularPay + overtimePay;

        if (employeeCode == 'A' || employeeCode == 'a' && employeeLocation == 'N' || employeeLocation == 'n')
        {
            tax = 0.07 * grossPay;
        }
        else if (employeeCode == 'A' || employeeCode == 'a' && employeeLocation != 'N' || employeeLocation != 'n')
        {
            tax = 0.045 * grossPay;
        }
        else if (employeeCode != 'A' || employeeCode != 'a')
        {
            tax = 0;
        }

        netPay = grossPay - tax;

        cout << "\nRegular Pay: " << regularPay;
        cout << "\nOvertime Pay: " << overtimePay;
        cout << "\nGross Pay: " << grossPay;
        cout << "\nTax: " << tax;
        cout << "\nNet Pay: " << netPay;

        totalGrossPay += grossPay;
        totalTax += tax;
        totalNetPay += netPay;

        cout << "\n\nProcess another employee? (Y/N) : ";
        cin >> ans;
        cout << "\n";
    } while (ans == 'y' || ans == 'Y');
    cout << "\nTotal number of employees processed: " << employeeCounted;
    cout << "\nTotal Gross Pay: " << totalGrossPay;
    cout << "\nTotal Tax: " << totalTax;
    cout << "\nTotal Net Pay: " << totalNetPay;
    return ();
}
