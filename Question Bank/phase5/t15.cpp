/*

15. Determine how many phrases(of 350x90 px dimensions)
are perfectly arranged in an A4 size Canvas with distance
of 8 px between all phrases. Develop a C++ UDF to count
total number of phrases arranged in an A4 size Canvas.

*/

#include <iostream>
using namespace std;

int countPhrases() {
  int canvasWidth = 2007;
  int canvasHeight = 3035;
  int phraseWidth = 350;
  int phraseHeight = 90;
  int spacing = 8;
  int numPhrasesWidth = canvasWidth / (phraseWidth + spacing);
  int numPhrasesHeight = canvasHeight / (phraseHeight + spacing);
  int totalPhrases = numPhrasesWidth * numPhrasesHeight;
  return totalPhrases;
}

main() {
  int numPhrases = countPhrases();
  cout << "Total number of phrases that can fit in an A4 size canvas: " << numPhrases << endl;
}

