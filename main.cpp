#include <iostream>

class console
{
public:
  static void log(std::string message)
  {
    if (!(message.length() > 0))
    {
      return;
    }
    std::cout << " " << message << "\n";
  }
};

int main(int argc, char **argv)
{
  console::log(" ");
  for (int i = 1; i < argc; ++i)
  {
    console::log(argv[i]);
  }

  return 0;
}
