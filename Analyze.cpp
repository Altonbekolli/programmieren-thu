#include "Analyze.h"

// Funktion für ganze Zahlen (int)
int analyze(int number) {
	int count = 0;
	if (number < 0) {
		count++; // Vorzeichen berücksichtigen
		number = -number;
	}
	do {
		count++;
		number /= 10;
	} while (number > 0);
	return count;
}

// Funktion für Strings (std::string)
int analyze(const std::string& str) {
	return str.size();
}
int analyze(const char* str) {
	return analyze(std::string(str));  // Aufruf der string-Version
}