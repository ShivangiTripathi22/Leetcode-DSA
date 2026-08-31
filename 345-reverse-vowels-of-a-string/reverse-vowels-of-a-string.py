class Solution:
    def reverseVowels(self, s: str) -> str:
        s=list(s)
        i=0
        j=len(s)-1
        
        while i<j:
            if (s[i]!='a'and s[i]!='e'and s[i]!='i'and s[i]!='o'and s[i]!='u'and s[i]!='A'and s[i]!='E'and s[i]!='I'and s[i]!='O'and s[i]!='U'):
                i+=1

            elif(s[j]!='a'and s[j]!='e'and s[j]!='i'and s[j]!='o'and s[j]!='u'and s[j]!='A'and s[j]!='E'and s[j]!='I'and s[j]!='O'and s[j]!='U'):
                j-=1

            else:
                s[i],s[j]=s[j],s[i]
                i+=1
                j-=1

        return "".join(s)
    