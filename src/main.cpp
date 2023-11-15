#include <fstream>
#include <iostream>
#include "nlohmann/json.hpp"

int main() {
  std::string path = "src/example.json";
  std::ifstream istrm(path);
  
  if (!istrm.is_open())
    std::cout << "failed to open " << path << std::endl;
  else
  {
      nlohmann::json data = nlohmann::json::parse(istrm);
      std::cout << "Json file successfully read. Printing json key-value pairs..." << std::endl;
      
      for (auto& item : data.items()){
        std::cout << item.key() << " : " << item.value() << std::endl;
      }

      std::cout << "Program compiled and ran successfully. You can return to the survey now." << std::endl;
  }
  return 0;
} 