#include <stdio.h>
#include <string.h>
#include <wchar.h>

int main(void)
{
	FILE* pFile;

	if (0 != fopen_s(&pFile, "test.csv", "r"))	// test.csv ����
	{
		printf("������ �߻���.");		// ���� ó��

		return 1;
	}

	wchar_t str[128] = L"";

	int strCount = 0;
	int destStr = 7;

	while (!feof(pFile))
	{

		fgetws(str, sizeof(str), pFile);
		if (strCount == destStr)
		{
			wprintf(L"%s", str);
		}
		/*for (int i = 0; i < 6; i++)
		{
			
		}*/

		strCount++;
	}


}