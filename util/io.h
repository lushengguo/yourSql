#include <fstream>

class File {
public:
  File(const char *path) : file_(path) {}
  ~File() {
    if (is_opened())
      file_.close();
  }

  bool create(const char *path);

  bool is_opened() const { return file_.is_open(); }

  size_t read(char *buffer, size_t len, size_t offset) {
    if (!buffer)
      return 0;
    file_.seekg(offset).read(buffer, len);
    return file_.gcount();
  }

  // TODO:支持同步写 异步写
  size_t write(char *buffer, size_t len, size_t offset, bool async) {
    if (!buffer || len == 0)
      return 0;

    file_.seekp(offset).write(buffer, len);
    return len;
  }

private:
  std::fstream file_;
};