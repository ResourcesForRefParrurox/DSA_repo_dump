// Strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

//// Function that returns true if str
//// is a valid identifier
//bool isValid(string str, int n)
//{
//
//	
//
//	// Traverse the string 
//	for (int i = 0; i < str.length(); i++) {
//		if (!((str[i] >= 'a' && str[i] <= 'z')
//			|| (str[i] >= 'A' && str[i] <= 'Z')
//			|| (str[i] >= '0' && str[i] <= '9')
//			|| str[i] == '_'))
//			return false;
//	}
//
//	// String is a valid identifier
//	return true;
//}


//permutation of a string
void perm(char S[],int K) {
	static int A[10] = { 0 };
	static char Res[10];
	int i;
	if (S[K] == '\0')
	{
		Res[K]='\0';
		cout<<Res<<endl;
	}
	else
	{
		for (i = 0; S[i] != '\0'; i++)
		{
			if (A[i] == 0)
			{
				Res[K]=S[i];
				A[i]=1;
				perm(S,K+1);
				A[i]=0;
			}
		}
	}  

}


// Driver code
int main()
{
	////finding duplicates
	//char D[] = "finding";
	//int H[26] = { 0 };
	//int i;
	//for (i = 0; D[i] != '\0'; i++)
	//{
	//	H[D[i] - 97] += 1;
	//}
	//for (i = 0; i < 26; i++)
	//{
	//	if (H[i] > 1)
	//		cout << "Duplicate " << char(i + 97) << " is " << H[i] << " times" << endl;
	//}

	////finding duplicates using bit manipulation
	//char D[] = "parrurox";
	//long int H = 0, x = 0;
	//for (int i = 0; D[i] != '\0'; i++)
	//{
	//	x = 1;
	//	x = x << (D[i] - 97);
	//	if ((x & H) > 0) //if the bit is already set aka masking
	//		cout << "Duplicate " << D[i] << endl;
	//	else
	//		H = x | H; //setting the bit aka merging
	//}

	////check for anagram
	//char A[] = "decimal";
	//char B[] = "medical";
	//int i ,H[26] = { 0 }; 

	//for (i = 0; A[i] != '\0'; i++)
	//{
	//	H[A[i] - 97] += 1;
	//}
	//for (i = 0; B[i] != '\0'; i++)
	//{
	//	H[B[i] - 97] -= 1;
	//	if (H[B[i] - 97] < 0)
	//	{
	//		cout << "Not an anagram" << endl;
	//		break;
	//	}
	//}
	//if (B[i] == '\0')
	//	cout << " It's an Anagram" << endl;



	////reversing a string
	//char E[] = "python";
	//char temp;
	//int i, j;
	//for (j = 0; E[j] != '\0'; j++)
	//{
	//}
	//j = j - 1;
	//for (i = 0; i < j; i++, j--)
	//{
	//	temp = E[i];
	//	E[i] = E[j];
	//	E[j] = temp;
	//}
	//cout << E << endl;


	//validation of string
	/*string name = "Anna45";
	int x = name.length();

	if (isValid(name, x))
		cout << "Valid";
	else
		cout << "Invalid";*/




	////counting vowels and consonents
	//int i, vcount = 0, ccount = 0,word = 1;
	//for (i = 0; A[i] != '\0'; i++)
	//{
	//	if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u'||A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] =='U')
	//		vcount++;
	//	else if ((A[i] >= 65 && A[i] <= 90) || (A[i] >= 97 && A[i] <= 122))
	//		ccount++;
	//}
	//for (i = 0; A[i] != '\0'; i++)
	//{
	//	if (A[i] == ' ' && A[i - 1] != ' ')
	//		word++; 
	//}
	//cout << "Vowels are " << vcount << endl;
	//cout << "Consonents are " << ccount << endl;
	//cout << "Words are " << word << endl;


	//// Changing case of a string
	//int i;
	//for (i = 0; S[i] != '\0'; i++)
	//{
	//	if (S[i] >= 65 && S[i] <= 90)
	//		S[i] += 32;
	//	else if (S[i] >= 97 && S[i] <= 122)
	//		S[i] -= 32;
	//}
	//cout << S << endl;

 //   //finding the length of a string
 //   int i;
 //   for (i = 0; S[i] != '\0'; i++)
 //   {
	//	//cout << S[i] << endl;
	//}
 //   cout<<S[i]<<endl;





	// Permutation of a string
	char s[] = "ROSE";
	perm(s, 0);

    return 0;
}


