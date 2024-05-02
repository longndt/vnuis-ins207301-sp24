 #include <iostream>
using namespace std;

int main()
{ 
  int demo[2][3]; //2 rows - 3 columns
  demo[0][0] = 23;
  demo[0][1] = 543;
  demo[0][2] = 654;

  for (int i = 0; i < 2; i++) {
	  for (int j = 0; j < 3; j++) {
		  cout << demo[i][j] << endl;
	  }
  }
 
}
 