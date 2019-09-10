#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
   Stack s;
   s.push("Tom");
   s.push("Diana");
   s.push("Harry");
   while (!s.empty())
   {
      cout << s.top() << endl;
      s.pop();
   }
   
   return 0;
}
