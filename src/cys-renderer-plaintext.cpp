#include <cys-renderer-plaintext/cys-renderer-plaintext.h>
#include <cys-engine/cys-engine.h>
#include <unistd.h>

PlaintextRenderer::PlaintextRenderer()
{
  
}

PlaintextRenderer::~PlaintextRenderer()
{
  
}

bool PlaintextRenderer::render(std::string input_dir, std::string output_dir)
{
  bool ret = false;
  
  system((std::string("mkdir -p ") + output_dir).c_str());
  std::string input_db_path = input_dir + "/db";
  std::string output_file_path = output_dir + "/story.txt";
  
  
  
  return ret;
}
