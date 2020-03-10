// CPPfileSystem.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "FileDirectory.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	FileDirectory	fileDirectory;
	char data[1024];

//	Write a driver function, i.e.main(), to test this program by
		//1.	create and write a file, file1, of 40 bytes,

	fileDirectory.write("file1", 40, data, 2019, 4, 16, 15, 29, 30);

	fileDirectory.printData("file1");

	
		//2.	create and write a file, file2, of 200 bytes,

	fileDirectory.write("file2", 200, data, 2019, 4, 16, 15, 50, 30);

		//3.	create and write a file, file3, of 300 bytes,

	fileDirectory.write("file3", 300, data, 2019, 4, 16, 16, 35, 30);

		//4.	create and write a file, file4, of 500 bytes.
	fileDirectory.write("file4", 500, data, 2019, 4, 16, 17, 35, 30);
	fileDirectory.printDirectory();
		//5.	delete file2,
	fileDirectory.deleteFile("file2");
		//6.	create and write a file, file4, of 500 bytes.
	fileDirectory.write("file4", 500, data, 2019, 4, 16, 17, 35, 30);


	fileDirectory.printDirectory();


	return 0;
}

