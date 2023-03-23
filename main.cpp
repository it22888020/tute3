/*#include <iostream>
#include <iomanip>
using namespace std;
int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith ", "Wimal ", "Kanthi ", "Suranji ", "Kushmitha "};
 cout <<setw(5)<< "No " << setw(15)<<"Name " <<setw(16)<< "Marks" << endl;
 for (int r = 0; r < 5; r++) {
 cout <<setw(5) << setiosflags(ios::fixed)<< r+1<<
 setw(15)<< setiosflags(ios::fixed)<< names[r]<<
   
setw(16)<< setiosflags(ios::fixed)<<setprecision(2)
 <<marks[r]<<endl;

 }
}*/



/*
#include <iostream>
using namespace std;

int volume(int height, int width, int length);

int main() {
 int box1Height, box1Width, box1Length;
 int box2Height, box2Width, box2Length;
 int totalVolume, totalSurface;

 cout << "Enter Box 1 Height : ";
 cin >> box1Height;
 cout << "Enter Box 1 Width : ";
 cin >> box1Width;
 cout << "Enter Box 1 Length : ";
 cin >> box1Length;

 cout << "Enter Box 2 Height : ";
 cin >> box2Height;
 cout << "Enter Box 2 Width : ";
 cin >> box2Width;
 cout << "Enter Box 2 Length : ";
 cin >> box2Length;

 totalVolume = volume(box1Height, box1Width, box1Length)
 + volume(box2Height, box2Width, box2Length);

 cout << "Volume of Box is " << totalVolume << endl;

 return 0;
}

int volume(int height, int width, int length){
  
  return height* width*length;
}
*/

/*
#include <iostream>
using namespace std;



int volume(int height, int width, int length);

// 1. Define a structure called Box
// have the integer data types Height, Width, Length
// Do not change the main function
int main() {
  //box box1;
  //box box2;
struct {
int height; 
int width;
int length;
}box1,box2;


  
 // 2. Create a variable called box1 of the Box structure type
 // int box1Height, box1Width, box1Length;
 // 3. Create a variable called box2 of the Box structure type

 // int box2Height, box2Width, box2Length;
 int totalVolume;

 // 4. Input the height, width, lenght of box1 and box2
 
 cout << "Enter Box 1 Height : ";
 cin >> box1.height;
 cout << "Enter Box 1 Width : ";
 cin >> box1.width;
 cout << "Enter Box 1 Length : ";
 cin >> box1.length;

 
 cout << "Enter Box 2 Height : ";
 cin >> box2.height;
 cout << "Enter Box 2 Width : ";
 cin >> box2.width;
 cout << "Enter Box 2 Length : ";
 cin >> box2.length;

 // 5. Replace the coding below to pass the Box type structure
 totalVolume = volume(box1.height,box1.width,box1.length)
 + volume(box2.height,box2.width,box2.length);


 cout << "Volume of Box is " << totalVolume << endl;

 return 0;
}

int volume(int height, int width, int length){
  return height*width*length;
}

*/




/*
#include <iostream>
using namespace std;
void print(int len, int wth);
void input(int &len, int &wth);
// Do not change the main() function
int main() {
 int length = 10, width = 5;
 input(length, width);
 print(length, width);
 return 0;
}
// Do not change the print() function
void print(int len, int wth) {
 cout << "Length : " << len
 << ", Width : " << wth << endl;
}
void input(int &len, int &wth) {
  cout << " enter Length : ";
  cin>>len;
  cout << "enter Width : ";
  cin>>wth;
}

// Implement the Input Function here
*/