#include "Serializer.hpp"

Serializer::Serializer() {}
Serializer::~Serializer() {}
Serializer::Serializer(const Serializer&) {}
Serializer& Serializer::operator=(const Serializer&) {
	return *this;
}

Data* Serializer::deserialize(uintptr_t raw) {
	Data* data = reinterpret_cast<Data*>(raw);
	return data;
}

uintptr_t Serializer::serialize(Data* ptr) {
	uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
	return raw;
}
