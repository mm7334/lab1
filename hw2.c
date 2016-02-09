#include <stdio.h>

int main()
{
    float cel, f, cons=(5.0/9.0);
    int i=0;
    printf("%10f \n", cons );
    printf("%s %10s \n", "farenheit", "celcius");   
    while(i <300)
	{
		f=i;
	    cel = cons*(f-32);
	    printf("%d %f \n", i, cel);
	    i+=10;
	}
	return 0;
}
