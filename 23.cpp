bool search(string str1,string str2)
{
    for(int i=0;i<str1.length)
    {
        int j=0;
        for(j=0;j<str2.length;j++)
        {
            if(str1[i]!=str2[j])
                break;
        }
        if(j==str2.length)
            return i;
    }
    return -1;

}
