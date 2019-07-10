int global_t;
int global_f;
unsigned int uint_global_result;
unsigned int uint_global_divide;
void printIntLine(int n);
void printLine(char *);

void CWE121_Stack_Based_Buffer_Overflow__CWE129_large_10_bad()
{
    int data;
	unsigned int temp_count=0;
	unsigned int temp_result;
    /* Initialize data */
    data = -1;
    if(global_t)
    {
        /* POTENTIAL FLAW: Use an invalid index */
        data = 10;
		temp_count ++;
    }
    else
    {
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        /* FIX: Use a value greater than 0, but less than 10 to avoid attempting to
         * access an index of the array in the sink that is out-of-bounds */
        data = 7;
    }
    if(global_t)
    {
        {
            int i;
            int buffer[10] = { 0 };
            /* POTENTIAL FLAW: Attempt to write to an index of the array that is above the upper bound
             * This code does check to see if the array index is negative */
            if (data >= 0)
            {
                buffer[data] = 1;
                /* Print the array values */
                for(i = 0; i < 10; i++)
                {
                    printIntLine(buffer[i]);
                }
            }
            else
            {
				global_f = (global_f+10) / temp_count;
                printLine("ERROR: Array index is negative.");
            }
        }
    }
    else
    {
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        {
            int i;
            int buffer[10] = { 0 };
            /* FIX: Properly validate the array index and prevent a buffer overflow */
            if (data >= 0 && data < (10))
            {
                buffer[data] = 1;
                /* Print the array values */
                for(i = 0; i < 10; i++)
                {
                    printIntLine(buffer[i]);
                }
            }
            else
            {
                printLine("ERROR: Array index is out-of-bounds");
            }
        }
		uint_global_result = uint_global_divide - temp_count;
    }
}