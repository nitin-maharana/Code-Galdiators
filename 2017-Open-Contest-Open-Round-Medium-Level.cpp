/*
 * Written by Nitin Kumar Maharana
 * nitin.maharana@gmail.com
 */
 
int appearanceCount(int input1,int input2,char* input3,char* input4)
    {
        static int gylph[128], seq[128];
        int i, j, k, res = 0;
        bool flag;

        for (i = 0; i < input1; i++) {
            gylph[input3[i]]++;
            seq[input4[i]]++;
        }
        
        flag = true;

        for (i = 65; i <= 90; i++) {
            if(gylph[i] != seq[i] || gylph[i+32] != seq[i+32]) {
                flag = false;
                break;
            }
        }

        if(flag)
            res++;
        
        for (k = 0, j = input1; j < input2; k++,j++) {
            seq[input4[j]]++;
            seq[input4[k]]--;

            flag = true;
            for (i = 65; i <= 90; i++) {
                if(gylph[i] != seq[i] || gylph[i+32] != seq[i+32]) {
                    flag = false;
                    break;
                }
            }

            if(flag)
                res++;
        }
        
        return res;
    }
