#include "KernelFile.h"

File::File(){
	myImpl = 0;
}

File::~File(){
	delete myImpl;
}

char File::write(BytesCnt n, char* buffer){
	return myImpl->write(n, buffer);
}
BytesCnt File::read(BytesCnt n, char* buffer){
	return myImpl->read(n, buffer);
}
char File::seek(BytesCnt n){
	return myImpl->seek(n);
}
BytesCnt File::filePos(){
	return myImpl->filePos();
}
char File::eof(){
	return myImpl->eof();
}
BytesCnt File::getFileSize(){
	return myImpl->getFileSize();
}

char File::truncate(){// **
	return 0;
}
