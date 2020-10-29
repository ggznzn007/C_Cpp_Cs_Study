#include <iostream>
using namespace std;

void main()
{
	string filename[] = { "readme.txt",
			"presentation.ppt", "word.doc",
			"manual.pdf", "plain.txt" };
	for (int i = 0; i < sizeof(filename) / sizeof(filename[0]); i++)
	{
		int period = filename[i].rfind('.');
		if (period != string::npos)
		{
			string ext = filename[i].substr(period);
			if (ext.compare(".txt") == 0)
				cout << filename[i] << endl;
		}
	}
}