#include <fstream>

class File {
public:
  File(const char *path) : file_(path) {}
  ~File() {
    if (file_opened())
      file_.close();
  }

  bool create(const char *path);

  bool file_opened() const { return file_.is_open(); }

  size_t read(char *buffer, size_t len, size_t offset);
  size_t write(char *buffer, size_t len, size_t offset);

private:
  std::fstream file_;
};