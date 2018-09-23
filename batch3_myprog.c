#include<stdio.h>
#define MAX 6

int zipList[MAX][5];

int ComputeZipValue(int index)
{
int PlaceVal=1,ZipValue=0,i;
	for(i=4;i>=0;i--)
	{
		ZipValue+=zipList[index][i]*PlaceVal;
		PlaceVal*=10;
	}
	return ZipValue;

}

int Count_Within_Range_Val(int index, int val)
{
int count=0,i;
	int RefZip=ComputeZipValue(index);
	for(i=0;i<MAX;i++)
	{
		if(zipList[index][0]==zipList[i][0] && index!=i)
		{
			int Zip=ComputeZipValue(i);
			if(Zip>=(RefZip-val) && Zip<=(RefZip+val))
				count++;
		}
	}
	return count;
}

int main()
{

  // For Sample testing only. Your functions should work for any MAX

  int index = 3, range=200;
  zipList[0][0]=4; zipList[0][1]=3; zipList[0][2]=2; zipList[0][3]=1; zipList[0][4]=0;
  zipList[1][0]=4; zipList[1][1]=3; zipList[1][2]=2; zipList[1][3]=0; zipList[1][4]=2;
  zipList[2][0]=4; zipList[2][1]=3; zipList[2][2]=1; zipList[2][3]=1; zipList[2][4]=5;
  zipList[3][0]=4; zipList[3][1]=3; zipList[3][2]=3; zipList[3][3]=0; zipList[3][4]=2;
  zipList[4][0]=4; zipList[4][1]=3; zipList[4][2]=2; zipList[4][3]=1; zipList[4][4]=0;
  zipList[5][0]=4; zipList[5][1]=3; zipList[5][2]=9; zipList[5][3]=8; zipList[5][4]=5;

  printf("Zip value at index %d is %d", index, ComputeZipValue(index));

  printf("Count of zip codes for index %d within range +/- %d is %d", index, range, Count_Within_Range_Val(index, range));

  return 0;
}

