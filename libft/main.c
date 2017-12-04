#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"


int main()
{
//	char        *str = "Hello les genw";

//	ft_strnstr(str, "Hello", 6);
//	printf("%s\n", strnstr(str, "Hello", 6));	
//	printf("%s\n", ft_strnstr(str, "Hello", 6));
	char *s1 = "MZIRIBMZIRIBMZE123";
	char *s2 = "MZIRIBMZE";
	size_t max = strlen(s2);
	printf("%s\n",ft_strnstr(s1, s2, max));

	return (0);
}
