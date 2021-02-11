#include <iostream>
using namespace std;

struct line {
        float a;
        float b;
    } line1, line2;

int lineRelation (const line& line1, const line& line2) {
  int answer = 2;
  int yIntercept1 = line1.b;
  int yIntercept2 = line2.b;
  if (yIntercept1 == yIntercept2 && line1.a == line2.a) {
      answer = 0;
  } else if (line1.a == line2.a) {
      answer = 1;
  }
  return answer;
};

int main() {
    
    // y = ax + b
    line1.a = 4; line1.b = 3;
    line2.a = 8; line2.b = 6;
    cout<<lineRelation(line1, line2)<<endl;
    
    return 0;
}