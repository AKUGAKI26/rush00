#include <unistd.h>
void ft_putchar(char c);
void ft_nputchar(int nbr,char c){
while(nbr>0){
    ft_putchar(c);
    nbr--;
}
}
void rows(int i){

    ft_putchar('o');
    if(i==2)
    {
        ft_putchar('o');
    }
    else if(i>2)
    {
        ft_nputchar(i-2,'-');
        ft_putchar('o');
    }
    ft_putchar('\n');
    
}
void middle_rs(int i){
    
    ft_putchar('|');
    if(i==2)
    {
                ft_putchar('|');
    }
    else if(i>2)
    {
        ft_nputchar(i-2,' ');
        ft_putchar('|');
    }
    ft_putchar('\n');

}

void rush(int i,int j){
    if(i<=0 || j<=0 || i>=2147483647 || j>=2147483647 )
    {
    write(2,"ERROR",5);
    return ;
    }
    rows(i);
    int len = j;
    while(len>2){
        middle_rs(i);
        len--;
    }
    if(j>=2)
        rows(i);
}

