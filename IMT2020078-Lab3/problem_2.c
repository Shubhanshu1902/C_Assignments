/*Author:-Shubhanshu Agrawal IMT2020078
/*In digital world, colors are specified in Red-Green-Blue (RGB) format, with
values of R, G, B varying on an integer scale from 0 to 255. In print world, publishing the
colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK) format, with values of C, M,
Y, and K varying on a real scale from 0.0 to 1.0. Write a (C) program that converts RGB
color input as three integers(corresponding to Red, Green, Blue respectively), to CMYK
color outputting the four colours in their respective order(upto 2 decimal places) as per the
following formulae:
     
    White = Max(Red/255, Green/255, Blue/255)
    Cyan =(White−Red/255)/White
    Magenta =(White−Green/255)/White
    Yellow =(White−Blue/255)/White
    Black = 1 − White
Note: If the RGB values are all 0, then the CMY values are all 0 and the K value is 1.

*/
#include <stdio.h>
int main(){
    float r,g,b;                   //r=Red
                                   //g=Green
                                   //b=Blue
                                   //w=White
                                   //m=Magenta
                                   //c=cyan
                                   //y=yellow
                                   //k=variable
    scanf("%f%f%f",&r,&g,&b);
    float w,m,c,y,k;
    w=r;                            
    if (g>w||b>w){                 //to find max of red,green,blue
        w=g;
        if (b>w){
            w=b;
        }
    }
    if (r==0&&g==0&&b==0){
        c=0;m=0;y=0;k=1;
    }
    else{
    w=w/255;
    c=(w-r/255)/w;
    m=(w-g/255)/w;
    y=(w-b/255)/w;
    k=1-w;}
    printf("%0.2f% 0.2f %0.2f %0.2f",c,m,y,k);
    return 0;

}