// Nate McCain
// CS 390
// Project 4
// ProjectFourFunctions.h
// 10/25/2017

#ifndef ProjectFourFunctions_h
#define ProjectFourFunctions_h

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
#include <string.h>
#include <unistd.h>

void formatToDirectoryName(char *directoryName, const char *userInput);

void formatToPathname(char *pathname, const char *userInput, char *directoryEntry);

void takeStatistics(int *directoryCount, int *regularCount, long long *byteCount, long long *blockCount, struct stat statHolder);

void writeStatistics(int directoryCount, int regularCount, long long byteCount, long long blockCount, FILE *fileToWrite);

void outputStatistics(FILE *file);

#endif /* ProjectFourFunctions_h */
