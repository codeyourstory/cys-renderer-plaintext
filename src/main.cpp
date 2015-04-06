#include <iostream>
#include <cys-engine/cys-engine.h>
#include <cys-renderer-plaintext/cys-renderer-plaintext.h>

using namespace std;

void generate_test();

int main(int argc, const char *argv[])
{  
  if(argc != 3) {
    //cout << "usage: cys-renderer-plaintext input_folder output_folder" << endl;
    //return 1;
    generate_test();
  }
  
  PlaintextRenderer renderer;
  
  if(renderer.render(argv[1], argv[2]) == true) {
    cout << "render: OK" << endl;
  }
  else {
    cout << "render: NOT OK" << endl;
  }
  
  return 0;
}

void generate_test()
{
  //cys::
}
