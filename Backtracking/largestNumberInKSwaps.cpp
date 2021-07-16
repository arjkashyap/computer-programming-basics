class Solution
{
    public:
    //Function to compare two strings and updating res
    //which stores the string with larger number.
    void match(string& str, string& res)
    {
        for(int i=0; i<str.size(); i++)
        {
            if( res[i] > str[i] )
                return;
            //if str[i] is greater, we update res as str or store
            //the larger value in res.
            if( res[i] < str[i] )
            {
                res = str;
                return;
            }
        }
    }

    public:
    //Function to set highest possible digits at given index.
    void setDigit(string& str, int index, string& res, int k)
    {
        // base case
        if(k==0 || index==str.size()-1)
        {
            match(str,res);
            return;
        }
        
        int maxDigit = 0;
        
        //finding maximum digit for placing at given index.
        for(int i=index; i<str.size(); i++)
            maxDigit = max( maxDigit, str[i]-'0' );
        
        
        // swapping isn't needed in this case.
        if( str[index]-'0' == maxDigit )
        {
            setDigit(str, index+1, res, k);
            return;
        }
        
        for(int i=index+1; i<str.size(); i++)
        {
            // if max digit is found at current index.
            if( str[i]-'0' == maxDigit )
            {
                //swapping to get the maximum digit at required index.
                swap( str[index] , str[i] );
                
                //calling recursive function to set the next digit.
                setDigit(str, index+1, res, k-1);
                
                // backtracking
                swap( str[index] , str[i] );
            }
        }
    }

    public:
    //Function to find the largest number after k swaps.
    string findMaximumNum(string str, int k)
    {
        string res = str;
        setDigit(str, 0, res, k);
        
        //returning the result.
        return res;
    }

};