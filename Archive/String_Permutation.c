#include <stdio.h>
#include <string.h>

swap(char *left_pointer, char *right_pointer)
{
	char temp;
	
		temp = *left_pointer;
		*left_pointer = *right_pointer;
		*right_pointer = temp;
}

permute(char *pointer, int left, int right)
{
	int i;
		
		if(left == right)
			printf("%s\n", pointer);
		else
			for(i = left; i <= right; i++)
			{
				swap((pointer + left),(pointer + i));
				permute(pointer, left + 1, right);
				swap((pointer + left), (pointer + i)); //backtrack	
			}
}

main(){
	
	char string[] = "ABC";
	int n = strlen(string);
  
		permute(string, 0, n-1);

	return 0;

}
