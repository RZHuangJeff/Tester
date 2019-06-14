#include "Tester.h"

int main(){

  test("SampleTest", [] () {
    int a = 100;
    int b = a;

    Assert::isEqual(a, b);
  });

  return 0;
}
