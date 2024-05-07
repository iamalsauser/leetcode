class Solution {
public:
    int strStr(string haystack, string needle) {
        
        //Two Pointers to keep track of characters in our String
        int hayPointer = 0;
        int needlePointer = 0;

        //Running loop until the haypointer length is less than the total string length.
        while(hayPointer < haystack.length())
        {
            //If the Haystack Character match the needle character then we move both the pointers forward
            if(haystack[hayPointer] == needle[needlePointer])
            {
                //If the length of needle pointer is equal to the length of needle string then we have got our match.
            //Example : needle : hey hayStack : whysayhey
          //                     012            012345678
                if(needlePointer == needle.length() - 1)
                {
                    //if needlepointer = 3, and we know needle length is 3 that means we got the needle
                    return hayPointer - needlePointer;
                }

                //If it matches then keep incrementing
                needlePointer++;
                hayPointer++;
            }
            // Consider a case like haystack : mississippi, needle : issip. Try to run on pen and paper and you will understand why this condtion was written. [If you Still Don't get it don't worry I have explained it below :)]
            else if(needlePointer != 0)
            {
                hayPointer = hayPointer - needlePointer + 1;
                needlePointer = 0;
            }

            //If the character doesn't match keep on incrementing haystack pointer and reset out needle pointer
            else
            {
                needlePointer = 0;
                hayPointer++;
            }
        }


    //If we come here that means we didn't find anything and we not able to return so return -1.
    return -1;
    }
};