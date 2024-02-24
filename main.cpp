#include "log.h"
#include <stdio.h>

int main(){
  Log log;
  log.add(log::Success, "Hello Log this");
  printf("%s: %s",log.getLog(0).logTypeStr,log.getLog(0).msg);

return 0;
}
