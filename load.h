#include<iostream>
#include<string>
#include<ctime>
using namespace std;

class load{
public:
  int n;
  //No. of save data to load
  int YMH, YH, YMM, YM, EMH, EH, YMed, YB, Ys, Es, number_of_enemy_beat;
  //all the elements saved
  string filename;
  //the filename of savedata
  void LoadData(string name, int &YMH, int &YH, int &YMM, int &YM, int &EMH, int &EH, int &YMed, int &YB, int &Ys, int &Es, int &number_of_enemy_beat);
  //input data from file
  string FileName(int n);
  //get the filename with No.
};
