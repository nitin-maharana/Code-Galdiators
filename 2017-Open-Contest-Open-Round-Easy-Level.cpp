/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */
 
int GetJumpCount(int input1,int input2,int input3_size, int* input3)
    {
        int result = 0, i, temp;
        temp = input1 - input2;
        
        for(i = 0; i < input3_size; i++) {
            if(input3[i] <= input1)
                result++;
            else
                result += (ceil((float)(input3[i]-input1)/temp) + 1);
        }
        
        return result;
    }
