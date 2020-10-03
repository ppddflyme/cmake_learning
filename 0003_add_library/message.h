#pragma once

#include <iostream>
#include <string>

class message_class {
 public:
  message_class(const std::string & msg) : msg(msg){}
  friend std::ostream & operator << (std::ostream &os,
		  const message_class & obj);
 private:
  std::string msg;
};
