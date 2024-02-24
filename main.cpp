#include "log.h"
#include <stdio.h>

int main(){
  Log log;
  log.add(log::Success, "Hello Log this 1");
  log.add(log::Success, "Hello Log this 2");
  log.add(log::Success, "Hello Log this 3");
  log.add(log::Success, "Hello Log this 4");
  log.printAll();

return 0;
}
