#include<iostream>
#include<string>
using namespace std;

class save{
public:
  int YourMaxHP, YourHP, YourMaxMP, YourMP, EnemyMaxHP, EnemyHP, YourMedicine, YourBomb, Ystrength, Estrength, NEB;
  //elements to save
  string filename;
  //the savedata filename
  void savedata(void);
  //output the data into file
  void getdata(int YMH, int YH, int YMM, int YM, int EMH, int EH, int YMed, int YB, int Ys, int Es, int n, int number_of_enemy_beat);
  //get the elements in main function
};
