#include <stdio.h>

int main(){
    int len;
    scanf("%d", &len);
    getchar();
    char str[len+2];
    scanf("%s", str);
    int gap;
    scanf("%d", &gap);
    for (int i = 0; i < len; i++){
        char x = str[i];
        // printf("%c", x);
        if (x >= 'A' && x <= 'Z'){
            x += gap;
            while (x > 'Z' || x < 'A'){
                x > 'Z' ? x -= 26 : x += 26;
            }
        }else if (x >= 'a' && x <= 'z'){
            x += gap;
            while (x > 'z' || x < 'a'){
                x > 'z' ? x -= 26 : x += 26;
            }
        }
        printf("%c", x);
    }
    
    return 0;
}
/*
!m-rB`-oN!.W`cLAcVbN/CqSoolII!SImji.!w/`Xu`uZa1TWPRq`uRBtok`xPT`lL-zPTc.BSRIhu..-!.!tcl!-U
!w-bL`-yX!.G`mVKmFlX/MaCyyvSS!CSwts.!g/`He`eJk1DGZBa`eBLdyu`hZD`vV-jZDm.LCBSre..-!.!dmv!-E
!w-bL`-yX!.G`mVKmFlX/MaCyyvSS!CSwts.!ü/`He`eJk1DGZBa`eBLdyu`éZD`vV-äZDm.LCBSre..-!.!dmv!-E
My
*/