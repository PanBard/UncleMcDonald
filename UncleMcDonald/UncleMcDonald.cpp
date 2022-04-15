// PierwszyWCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
using namespace std;
// int fenceAmount, fenceSegment, fieldArea;
// string wordRun;

class Program
{

public:      int fenceAmount, fenceSegment, fieldArea;
      string wordRun;

      void initialProcedure()
      {
          cout << "Enter secret command (RUN): ";
          cin >> wordRun;

          while (wordRun != "RUN")
          {
              system("CLS");
              cout << "Enter correct secret command (RUN): ";
              cin >> wordRun;
          }

          if (wordRun == "RUN")
          {
              cout << "OK, programm is running";
              Sleep(1000);
              system("CLS");
          }
      };

      void getData()
      {
          cout << "Enter amount of fence:";
          cin >> fenceAmount;

          while (cin.fail())
          {
              cout << "Wrong type of data\nEnter correct number of fence (integer number): " << endl;
              cin.clear();
              cin.ignore(256, '\n');
              cin >> fenceAmount;
          }
      };

      void lengthSegments()
      {
          fenceSegment = fenceAmount / 3;
          cout << "length of 2 fence segments: \na:" << fenceSegment << "\nb:" << fenceSegment << endl;
      };


      void farmArea()
      {
          fieldArea = fenceSegment * fenceSegment; //the optimal area is always a square
          cout << "Optimal area of Yours farm:" << fieldArea << " m3" << endl << endl;
      };

      void exit()
      {
          cout << "Press any key to exit";
          cin >> wordRun;
         
      }
};

int main()
{

    Program NewProgram;

    NewProgram.initialProcedure();
    NewProgram.getData();
    NewProgram.lengthSegments();
    NewProgram.farmArea();
    NewProgram.exit();
    return 0;
}





