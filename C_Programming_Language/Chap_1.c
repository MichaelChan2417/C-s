# include <stdio.h>

/******************* Exercise 1.8 *******************/
// Count the total number of space, tab and endline
int Count_Space(){
    int n_space = 0, n_tab = 0, n_l = 0;
    int c;
    while((c = getchar()) != EOF){

        if(c == ' '){
            n_space++;
        }
        else if (c == '\t')
        {
            n_tab++;
        }
        else if( c == '\n'){
            n_l++;
        }

    }
    return n_space, n_tab, n_l;
}

/******************* Exercise 1.9 *******************/
// Copy and output, replace multi-space with single space
void Copy_Cut_Space(){
    int c;

    while((c = getchar()) != EOF){
        // check space
        if(c == ' '){
            while((c = getchar())==' ' && (c = getchar()) != EOF){
                continue;
            }
            putchar(' ');
            if(c != EOF){
                putchar(c);
            }
            continue;
        }
        putchar(c);
    }
    return;
}

/******************* Exercise 1.10 *******************/
// Copy and output, however \t to '\t', \b to '\b', \ to \\ ;
void Copy_Change_Char(){
    int c;
    while( (c=getchar()) != EOF ){
        if(c == '\t'){
            putchar('\\');
            putchar('t');
        }
        else if (c == '\\'){
            putchar('\\');
            putchar('\\');
        }
        else if (c == '\b'){
            putchar('\\');
            putchar('b');
        }
        else{
            putchar(c);
        }
    }
    return;
}



int main(){
    int c;

    Copy_Change_Char();

    return 0;
}