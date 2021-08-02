#include<iostream>
#include<string>
#include<fstream>
#include"load.h"
using namespace std;


string load::FileName(int n){
  string filename = "savedata" + to_string(n) + ".txt";
  return filename;
  //the filename is savedatan.txt. n is a number
}

void load::LoadData(string name, int &YMH, int &YH, int &YMM, int &YM, int &EMH, int &EH, int &YMed, int &YB, int &Ys, int &Es, int &number_of_enemy_beat){
  ifstream load1;
  load1.open(name);
  // input the save data

  if (load1.fail()){
    cout << "No save data" << endl;
    //failure message
    exit(1);
  }

  load1 >> YMH >> YH >> YMM >> YM >> EMH >> EH >> YMed >> YB >> Ys >> Es >> number_of_enemy_beat;
  // get data
  load1.close();
  //close file
  cout << "successfully loaded" << endl;
  //load success message
}
