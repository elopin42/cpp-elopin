#include "Serializer.hpp"

int main() {
  Data data;
  data.id = 42;
  data.name = "elopin";
  std::cout << "origine adresse for data is --> " << &data << std::endl;
  uintptr_t raw = Serializer::serialize(&data);
  std::cout << "data serialize = " << raw << std::endl;
  Data* ptr = Serializer::deserialize(raw);
  std::cout << "data deserialize = " << ptr << std::endl;
  std::cout << "ptr.id -> " << ptr->id << std::endl;
  std::cout << "ptr.name -> " << ptr->name << std::endl;
}
