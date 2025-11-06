//this is where the lnux code will go
#include <stdio.h>
#include <stdlib.h>
#include <scratchcpp/project.h>
//libscratchcpp

int main(int argc, char **argv) {
  libscratchcpp::Project p("/APL/project.sb3");
  bool ret = p.load();
  if (!ret)
    return 1;

  p.run();
  return 0;
}
