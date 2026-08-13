#include<stdio.h>
#include <string.h>
//TODO:add function mutibilty and imutablity keyword
#define func static inline long long
typedef mutable;
typedef immutable;
typedef long long var;
typedef enum TKN
{
    /* NUM_TKN = number token
     * STR_TKN = string token
     * SET_TKN = set value token
     * EQL_TKN = '=='
     * LST_TKN = '<'
     * GRT_TKN = '>'
     * NOT_TKN = '!'
     * SCL_TKN = ';'
     * COM_TKN = ','
     * SUB_TKN = '-'
     * ADD_TKN = '+'
     * MUL_TKN = '*'
     * DIV_TKN = '/'
     * FNC_TKN = function token
     * VAR_TKN = variable token
     * BIN_TKN = binary token
     * HEX_TKN = hexadecimal token
     * LBR_TKN = '('
     * RBR_TKN = ')'
     * LCB_TKN = '{'
     * RCB_TKN = '}'
     * LSB_TKN = '['
     * RSB_TKN = ']'
     * ESC_TKN = '\'
     * PWR_TKN = '^'
     * LIN_TKN = '|'
     * TIL_TKN = '~'
     * HSH_TKN = '#'
     * MUT_TKN = mutable token
     * IMT_TKN = immutable token
    */
    NUM_TKN,
    STR_TKN,
    SET_TKN,
    EQL_TKN,
    LST_TKN,
    GRT_TKN,
    NOT_TKN,
    SCL_TKN,
    COM_TKN,
    SUB_TKN,
    ADD_TKN,
    MUL_TKN,
    DIV_TKN,
    FNC_TKN,
    VAR_TKN,
    BIN_TKN,
    HEX_TKN,
    LBR_TKN,
    RBR_TKN,
    LCB_TKN,
    RCB_TKN,
    LSB_TKN,
    RSB_TKN,
    ESC_TKN,
    PWR_TKN,
    LIN_TKN,
    TIL_TKN,
    HSH_TKN,
    MUT_TKN,
    IMT_TKN
}
const char RASCII[64]=
{
    '0','1','2','3','4','5','6','7','8','9',
    'A','B','C','D','E','F','G','H','I','J',
    'K','L','M','N','O','P','Q','R','S','T',
    'U','V','W','X','Y','Z',' ','=','+','*',
    '/','(',')','<','>','!',';','.',',','-',
    '"','�'
};
func pretokenise(const char*restrict OputStr,FILE*f)
{
    char*restrict TmpBuf;
    int i=0
    while(f[i]!=EOF)
    {
        switch(*s)
        {
            case'0':
            {
                TmpBuf[i]=0;
                break;
            }
            case'1':
            {
                TmpBuf[i]=1;
                break;
            }
            case'2':
            {
                TmpBuf[i]=2;
                break;
            }
            case'3':
            {
                TmpBuf[i]=3;
                break;
            }
            case'4':
            {
                TmpBuf[i]=4;
                break;
            }
            case'5':
            {
                TmpBuf[i]=5;
                break;
            }
            case'6':
            {
                TmpBuf[i]=6;
                break;
            }
            case'7':
            {
                TmpBuf[i]=7;
                break;
            }
            case'8':
            {
                TmpBuf[i]=8;
                break;
            }
            case'9':
            {
                TmpBuf[i]=9;
                break;
            }
            case'a':
            {
                TmpBuf[i]=10;
                break;
            }
            case'A':
            {
                TmpBuf[i]=10;
                break;
            }
            case'b':
            {
                TmpBuf[i]=11;
                break;
            }
            case'B':
            {
                TmpBuf[i]=11;
                break;
            }
            case'c':
            {
                TmpBuf[i]=12;
                break;
            }
            case'C':
            {
                TmpBuf[i]=12;
                break;
            }
            case'd':
            {
                TmpBuf[i]=13;
                break;
            }
            case'D':
            {
                TmpBuf[i]=13;
                break;
            }
            case'e':
            {
                TmpBuf[i]=14;
                break;
            }
            case'E':
            {
                TmpBuf[i]=14;
                break;
            }
            case'f':
            {
                TmpBuf[i]=15;
                break;
            }
            case'F':
            {
                TmpBuf[i]=15;
                break;
            }
            case'g':
            {
                TmpBuf[i]=16;
                break;
            }
            case'G':
            {
                TmpBuf[i]=16;
                break;
            }
            case'h':
            {
                TmpBuf[i]=17;
                break;
            }
            case'H':
            {
                TmpBuf[i]=17;
                break;
            }
            case'i':
            {
                TmpBuf[i]=18;
                break;
            }
            case'I':
            {
                TmpBuf[i]=18;
                break;
            }
            case'j':
            {
                TmpBuf[i]=19;
                break;
            }
            case'J':
            {
                TmpBuf[i]=19;
                break;
            }
            case'k':
            {
                TmpBuf[i]=20;
                break;
            }
            case'K':
            {
                TmpBuf[i]=20;
                break;
            }
            case'l':
            {
                TmpBuf[i]=21;
                break;
            }
            case'L':
            {
                TmpBuf[i]=21;
                break;
            }
            case'm':
            {
                TmpBuf[i]=22;
                break;
            }
            case'M':
            {
                TmpBuf[i]=23;
                break;
            }
        }
        i++;
    }
    return;
}
func tokenise(const char*restrict IputStr,var offset,const char*restrict OputStr)
{
    char*restrict TmpBuf;
    var i=offset;
    while(*s!=' ')
    {
        switch(*s)
        {
            case'=':
            {
                if(s[i++]=='=')
                {
                    TmpBuf[i]=EQL_TKN;
                }
                break;
            }
            case'+':
            {
                TmpBuf[i]=ADD_TKN;
                break;
            }
        }
    }
    if(i<strlen(s))
    {
        tokenise(s,i);
    }
    return i;
}
int main(int argc,char**argv,char**envp)
{
    const char*restrict SrcBuf,OptBuf,RASCIIBuf;
    int status=0;
    FILE*src=fopen(argv[1],"r");
    if(src==NULL)
    {
        printf("no valid source input\nreturned with error code 1\n");
        status=1;
        fclose(src);
        return status;
    }
    tokenise(RASCIIBuf);
    fclose(src);
    return status;
}
