#include<iostream>
#include<string>
#include<fstream>
#include"save.h"
using namespace std;


void save::getdata(int YMH, int YH, int YMM, int YM, int EMH, int EH, int YMed, int YB, int Ys, int Es ,int n, int number_of_enemy_beat){
  YourMaxHP = YMH;
  YourHP = YH;
  YourMaxMP = YMM;
  YourMP = YM;
  EnemyMaxHP = EMH;
  EnemyHP = EH;
  YourMedicine = YMed;
  YourBomb = YB;
  Ystrength = Ys;
  Estrength = Es;
  NEB = number_of_enemy_beat;

  filename = "savedata" + to_string(n) + ".txt";
  //get data and create my savedata filename
}

void save::savedata(void){
    ofstream save_file;
    save_file.open(filename);
    //open the savedata
    if (save_file.fail()){
      cout << "error in saving!" << endl;
      //failure message
      exit(1);
    }
    save_file << YourMaxHP << ' ' << YourHP << ' ' << YourMaxMP << ' ' << YourMP << ' ' << EnemyMaxHP << ' ' << EnemyHP << ' ' << YourMedicine << ' ' << YourBomb << ' ' << Ystrength << ' ' << Estrength << ' ' << NEB;
    //output all the elements
    save_file.close();
    //close
    cout << filename << " successfully saved" << endl;
    //success message
}
