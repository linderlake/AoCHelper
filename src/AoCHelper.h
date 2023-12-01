#ifndef AOCHELPER_H
#define AOCHELPER_H

#include "helper_functions.h"
#include <cstdlib>
#include <curlpp/Easy.hpp>
#include <curlpp/Exception.hpp>
#include <curlpp/Options.hpp>
#include <curlpp/cURLpp.hpp>
#include <fstream>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <sys/stat.h>
#include <vector>

class AoCHelper {
public:
  AoCHelper(std::string year, std::string day);
  std::vector<std::string> get_input();
  std::string get_token();

private:
  std::string current_year;
  std::string current_day;
  std::string token_path;
  void set_token_path(std::string& token_path);
  std::vector<std::string> download_input();
  bool file_exists(const std::string& filename);
};

#endif