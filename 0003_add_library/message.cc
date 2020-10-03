#include "message.h"

std::ostream & operator<< (std::ostream &os,
                  const message_class & obj) {
  os << obj.msg;
  return os;
}

