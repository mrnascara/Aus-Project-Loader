

Blame
//this is where the the cpp logic will go for now.
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
penguin()
{
int main(int argc, char **argv) {
  libscratchcpp::Project p("/APL/project.pmp");
  bool ret = p.load();
  if (!ret)
    return 1;

  p.run();
  return 0;
}

}

sb()
{
int main(int argc, char **argv) {
  libscratchcpp::Project p("/APL/project.sb");
  bool ret = p.load();
  if (!ret)
    return 1;

  p.run();
  return 0;
}

}
