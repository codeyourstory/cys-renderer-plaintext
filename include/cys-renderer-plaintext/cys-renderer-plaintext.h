#ifndef CYS_RENDERER_PLAINTEXT__CYS_RENDERER_PLAINTEXT_H
#define CYS_RENDERER_PLAINTEXT__CYS_RENDERER_PLAINTEXT_H

#include <string>

class PlaintextRenderer {
public:
  
  PlaintextRenderer();
  ~PlaintextRenderer();
  
  bool render(std::string input_dir, std::string output_dir);
  
private:
};

#endif

