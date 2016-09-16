



int CountEven(int* array, int array_len)
{
	int evenArray[10]{ 2, 4, 6, 8, 10 };
	int* evenPtr = &evenArray[0];
	int  evenTemp;

	evenTemp = evenArray[0];
	evenTemp = *(evenArray + 1);
	evenTemp = *(evenPtr + 1);
	evenTemp = *evenPtr;

	evenPtr = (evenArray + 1);
	evenTemp = *evenPtr;
	evenTemp = *(evenPtr + 1);

	evenTemp = *++evenPtr;
	evenTemp = ++*evenPtr;
	evenTemp = *evenPtr++;
	evenTemp = *evenPtr;

}


int main()
{
	int Even = CountEven (10)
}