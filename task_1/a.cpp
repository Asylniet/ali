#include <iostream>
using namespace std;

int main() {
  int w, h;
  cin >> w >> h;
  bool canvas[w][h];
  for(int i = 0; i < w; i++) {
    for(int j = 0; j < h; j++) {
      canvas[i][j] = false;
    }
  }

  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    for(int j = x1; j < x2; j++) {
      for(int k = y1; k < y2; k++) {
        canvas[j][k] = true;
      }
    }
  }

  int count = 0;
  for(int i = 0; i < w; i++) {
    for(int j = 0; j < h; j++) {
      if(!canvas[i][j]) count++;
    }
  }
  cout << count;
  return 0;
}