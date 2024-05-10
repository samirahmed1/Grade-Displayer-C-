#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    HANDLE _color = GetStdHandle(STD_OUTPUT_HANDLE);

    double GradePercentage;

    double highHighGrade = 90.0;
    double highMidGrade = 80.0;
    double midHighGrade = 70.0;
    double midMidGrade = 60.0;
    double midLowGrade = 50.0;
    double lowHighGrade = 40.0;
    double lowFGrade = 30.0;

    cout<<"Enter Your Grade: ";
    cin>>GradePercentage;

    if(GradePercentage <= lowFGrade)
    {
        // 1. (colorNum) The Color Code, 4 = Red
        // 2. (Info) Giving Some Info About The Grade
        // 3. (Status) Failed Or Passed, Also F Or A+
        int colorNum = 4;
        cout<<"Info: ";

        SetConsoleTextAttribute(_color, colorNum); // (----, [here the color code])
        cout<<"Too Low Grade, You Need To Try More..."<<endl;

        SetConsoleTextAttribute(_color, 7); // (----, [here the color code])
        cout<<"Status: ";

        SetConsoleTextAttribute(_color, 4);
        cout<<"Failed, ";
        SetConsoleTextAttribute(_color, colorNum);
        cout<<"F"<<endl;

        SetConsoleTextAttribute(_color, 7); // (----, [here the color code])
    }
    else if(GradePercentage <= lowHighGrade)
    {
        // 1. (colorNum) The Color Code, 4 = Red
        // 2. (Info) Giving Some Info About The Grade
        // 3. (Status) Failed Or Passed, Also F Or A+
        int colorNum = 4;
        cout<<"Info: ";

        SetConsoleTextAttribute(_color, colorNum); // (----, [here the color code])
        cout<<"Its Low, You Need To Try More!"<<endl;

        SetConsoleTextAttribute(_color, 7); // (----, [here the color code])
        cout<<"Status: ";

        SetConsoleTextAttribute(_color, 4);
        cout<<"Failed, ";
        SetConsoleTextAttribute(_color, colorNum);
        cout<<"F"<<endl;

        SetConsoleTextAttribute(_color, 7); // (----, [here the color code])
    }
    else if(GradePercentage <= midLowGrade)
    {
        // 1. (colorNum) The Color Code, 14 = Yellow
        // 2. (Info) Giving Some Info About The Grade
        // 3. (Status) Failed Or Passed, Also F Or A+
        int colorNum = 14;
        cout<<"Info: ";

        SetConsoleTextAttribute(_color, colorNum); // (----, [here the color code])
        cout<<"Your Grade Is Mid Low, You Can Try More, To Do More Better"<<endl;

        SetConsoleTextAttribute(_color, 7); // (----, [here the color code])
        cout<<"Status: ";

        SetConsoleTextAttribute(_color, 10);
        cout<<"Passed, ";
        SetConsoleTextAttribute(_color, colorNum);
        cout<<"D"<<endl;

        SetConsoleTextAttribute(_color, 7); // (----, [here the color code])
    }
    else if(GradePercentage <= midMidGrade)
    {
        // 1. (colorNum) The Color Code, 14 = Yellow
        // 2. (Info) Giving Some Info About The Grade
        // 3. (Status) Failed Or Passed, Also F Or A+
        int colorNum = 14;
        cout<<"Info: ";

        SetConsoleTextAttribute(_color, colorNum); // (----, [here the color code])
        cout<<"Your Grade Is Mid Mid XD, But Its Good!"<<endl;

        SetConsoleTextAttribute(_color, 7); // (----, [here the color code])
        cout<<"Status: ";

        SetConsoleTextAttribute(_color, 10);
        cout<<"Passed, ";
        SetConsoleTextAttribute(_color, colorNum);
        cout<<"C"<<endl;

        SetConsoleTextAttribute(_color, 7); // (----, [here the color code])
    }
    else if(GradePercentage <= midHighGrade)
    {
        // 1. (colorNum) The Color Code, 9 = Blue
        // 2. (Info) Giving Some Info About The Grade
        // 3. (Status) Failed Or Passed, Also F Or A+
        int colorNum = 9;
        cout<<"Info: ";

        SetConsoleTextAttribute(_color, colorNum); // (----, [here the color code])
        cout<<"Your Grade Is Mid High :), Its Good!"<<endl;

        SetConsoleTextAttribute(_color, 7); // (----, [here the color code])
        cout<<"Status: ";

        SetConsoleTextAttribute(_color, 10);
        cout<<"Passed, ";
        SetConsoleTextAttribute(_color, colorNum);
        cout<<"B"<<endl;

        SetConsoleTextAttribute(_color, 7); // (----, [here the color code])
    }
    else if(GradePercentage <= highMidGrade)
    {
        // 1. (colorNum) The Color Code, 10 = Bright Green
        // 2. (Info) Giving Some Info About The Grade
        // 3. (Status) Failed Or Passed, Also F Or A+
        int colorNum = 10;
        cout<<"Info: ";

        SetConsoleTextAttribute(_color, colorNum); // (----, [here the color code])
        cout<<"Your Grade Is High Mid :), Your Almost Max!"<<endl;

        SetConsoleTextAttribute(_color, 7); // (----, [here the color code])
        cout<<"Status: ";

        SetConsoleTextAttribute(_color, 10);
        cout<<"Passed, ";
        SetConsoleTextAttribute(_color, colorNum);
        cout<<"A"<<endl;

        SetConsoleTextAttribute(_color, 7); // (----, [here the color code])
    }
    else if(GradePercentage >= highHighGrade || GradePercentage > highMidGrade)
    {
        // 1. (colorNum) The Color Code, 10 = Bright Green
        // 2. (Info) Giving Some Info About The Grade
        // 3. (Status) Failed Or Passed, Also F Or A+
        int colorNum = 10;
        cout<<"Info: ";

        SetConsoleTextAttribute(_color, colorNum); // (----, [here the color code])
        cout<<"Your Grade Is Very High O_O"<<endl;

        SetConsoleTextAttribute(_color, 3);
        cout<<"My Guy, You Got ";
        SetConsoleTextAttribute(_color, 14);
        cout<<"Scholarship!"<<endl;

        SetConsoleTextAttribute(_color, 7); // (----, [here the color code])
        cout<<"Status: ";

        SetConsoleTextAttribute(_color, colorNum);
        cout<<"Passed, ";
        SetConsoleTextAttribute(_color, 14); // 14 = Yellow
        cout<<"A++"<<endl;

        SetConsoleTextAttribute(_color, 7); // (----, [here the color code])
    }


    return 0;
}


