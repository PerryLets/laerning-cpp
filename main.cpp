#include <iostream>
#include <string>

int main(int argc, char **argv)
{
  std::cout << "" << std::endl;
  for (int i = 1; i < argc; ++i)
  {
    std::cout << argv[i] << "\n";
  }

  return 0;
}
