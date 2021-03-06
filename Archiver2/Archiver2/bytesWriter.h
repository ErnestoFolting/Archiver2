#pragma once
#include <string>
#include <vector>

class bytesWriter
{
public:
	static void writeUncomressedBytes(std::string resultFile, std::vector<std::string> bytesInStr);
	static void writeCompressedBytes(std::vector<std::string> stringBinaryEncoding, std::string archiveName, std::string fileName);
};

