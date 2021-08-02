#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

class panel{
public:

  int YMH, YH, YMM, YM, EMH, EH, YMed, YB;

  string output_volume(int p, int Max);
  void ShowState(int YMH,int YH, int YMM, int YM, int EMH, int EH, int YMed, int YB);

};

string panel::output_volume(int p, int Max){
  //this function is used for showing the percentage of HP or MP in a graphic way
  int percentage = p * 100 / Max;
  int percent = percentage / 5;
  string box_1 = "#";
  string output;
  for (int i = 0; i < percent; i++){
    output = output + box_1;
  }

  return output;
}

void panel::ShowState(int YMH,int YH, int YMM, int YM, int EMH, int EH, int YMed, int YB){
  //this function is used for generating the control panel showing HP, MP ...

  cout << endl;
  cout << "[ " << "Your HP: " << setw(4) << YH << ' ' << setw(20) << output_volume(YH, YMH) << "| " << "Enemy's HP: " << setw(4) << EH << ' ' << setw(20) << output_volume(EH, EMH) << " ]"<< endl;
  cout << "[ " << "Your MP: " << setw(4) << YM << ' ' << setw(20) << output_volume(YM, YMM) << "|" << setw(40) << ']' <<  endl;
  cout << "[ " << "items: " << "Medicine: " << setw(2) << YMed << setw(17) << " | " << "Bomb: " << YB << setw(32) << ']' << endl;

  cout << endl;
}
