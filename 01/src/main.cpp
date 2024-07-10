
#include "Serializer.hpp"


int main(int argc, char **argv) {
	Data myData = {42, "test"};

	uintptr_t rawPtr;
	rawPtr = Serializer::serialize(&myData);
	
	std::cout << "Serialized pointer: " << rawPtr << std::endl;

}
