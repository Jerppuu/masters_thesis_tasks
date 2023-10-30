#include <fstream>
#include <iostream>
#include "nlohmann/json.hpp"

int main() {
  std::ifstream istrm("src/example.json");
  
  if (!istrm.is_open())
    std::cout << "failed to open example.json" << '\n';
  else
  {
      nlohmann::json data = nlohmann::json::parse(istrm);
      std::cout << "Json file successfully read. Printing json key-value pairs..." << std::endl;
      
      for (auto& item : data.items()){
        std::cout << item.key() << " : " << item.value() << std::endl;
      }
  }
  return 0;
} 