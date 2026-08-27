#include<stdio.h>
#include<string.h>
//TODO:add function mutibilty and imutablity keyword
#define func static inline long long
#define LESS_THAN <
#define GREATER_THAN >
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
func pretokenise(const char*restrict OputStr,FILE*file)//NOTE:file is assumed to already existand has been handled before being passed to the pre tokeniser
{
    char*restrict InTmpBuf;
    while((InTmpBuf=fgetc(file))!=EOF)
    {
        putchar(ch);
    }
    char*restrict OutTmpBuf;
    int i=0;
    while(InTmpBuf[i]!=EOF)
    {
        if(f[i]GREATER_THAN=48)
        {
            if(f[i]LESS_THAN=57)
            {
                OutTmpBuf[i]=f[i]-48;
            }
        }
        if(f[i]GREATER_THAN=65)
        {
            if(f[i]LESS_THAN=90)
            {
                OutTmpBuf[i]=f[i]-55;
            }
        }
        if(f[i]GREATER_THAN=97)
        {
            if(f[i]LESS_THAN=122)
            {
                OutTmpBuf[i]=f[i]-87;
            }
        }
        switch(f[i])
        {
            case' ':
            {
                OutTmpBuf[i]=36;
                break;
            }
            case'=':
            {
                OutTmpBuf[i]=37;
                break;
            }
            case'+':
            {
                OutTmpBuf[i]=38;
                break;
            }
            case'*':
            {
                OutTmpBuf[i]=39;
                break;
            }
            case'/':
            {
                OutTmpBuf[i]=40;
                break;
            }
            case'(':
            {
                OutTmpBuf[i]=41;
                break;
            }
            case')':
            {
                OutTmpBuf[i]=42;
                break;
            }
            case'<':
            {
                OutTmpBuf[i]=43;
                break;
            }
            case'>':
            {
                OutTmpBuf[i]=44;
                break;
            }
            case'!':
            {
                OutTmpBuf[i]=45;
                break;
            }
            case';':
            {
                OutTmpBuf[i]=46;
                break;
            }
            case'.':
            {
                OutTmpBuf[i]=47;
                break;
            }
            case',':
            {
                OutTmpBuf[i]=48;
                break;
            }
            case'-':
            {
                OutTmpBuf[i]=49;
                break;
            }
            case'"':
            {
                OutTmpBuf[i]=50;
            }
            default:
            {
                OutTmpBuf[i]=51;
                break;
            }
        }
        i++;
    }
    OputStr=
    return i;
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
            case'-':
            {
                TmpBuf[i]=SUB_TKN;
                break;
            }
            case'*':
            {
                TmpBuf[i]=MUL_TKN;
                break;
            }
            case'/':
            {
                TmpBuf[i]=DIV_TKN;
                break;
            }
            default:
            {

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
