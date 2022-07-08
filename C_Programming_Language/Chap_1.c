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


/******************* Chap 1.5.4 *******************/
// The word counts
// Count lines, words, and characters in input
void Word_Counts(){
    const int IN = 1;
    const int OUT = 0; // Definition of State whether in-words or out-words

    int c, n_l, n_word, n_c, state;
    state = OUT;
    n_l = n_word = n_c = 0;

    while((c = getchar()) != EOF){
        ++n_c;  // character count 
        if(c == '\n'){
            ++n_l;  // line count
        }
        // checking state
        if(c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
        }
        else if (state == OUT){
            state = IN;
            ++n_word;
        }
    }

    printf("lines:%d  words:%d  character:%d\n", n_l, n_word, n_c);
    return;
}


/******************* Exercise 1.12 *******************/
// Print word each row
void Print_Each_Word_Row(){
    const int S_IN = 1;
    const int S_OUT = 0;

    int c;
    int state = S_OUT;

    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\n' || c == '\t'){
            putchar('\n');
            state = S_OUT;
        }
        else{
            putchar(c);
        }
    }
    return;
}


/******************* Exercise 1.13 *******************/
// Print a horizontal histogram of words length?
void Print_WL_Histogram(){
    int word_length[20];  // the shown word length range from 1-20
    int c, length_count;

    // Init
    for (int i = 0; i < 20; i++){
        word_length[i] = 0; 
    }
    length_count = 0;

    // Fill in the word_length table
    while((c=getchar()) != EOF){
        if(c == ' ' || c == '\t' || c == '\n'){
            if(length_count != 0){
                word_length[length_count - 1]++;
                length_count = 0;
            }
        }
        else{
            length_count++;    
        }
    }

    // Start Print
    printf("\n******** Length ********\n");
    int i;
    for (i = 0; i < 20; i++){
        printf("L%d: ", i+1);
        for (int j = 0; j < word_length[i]; j++){
            printf("H");
        }
        printf("\n");
    }

    return;
}


/******************* Exercise 1.19 *******************/
// Reverse Print the char_list s
void Reverse_Print(char s[]){
    int i = 0;  // to reach the max_length

    while(s[i] != '\0'){
        i++;
    }

    for (int j = i; j >= 0; j--){
        putchar(s[j]);
    }
}


/******************* Exercise 1.20 *******************/
// make several '\t' into ' '
int TAB_LEN = 8;
void detab(){
    extern int TAB_LEN;
    int c;
    int l = 0;

    while((c = getchar()) != EOF){
        if(c == '\t'){
            do{
                putchar(' ');
                l++;
            } while (l % TAB_LEN != 0);
            continue;
        }
        l++;
        putchar(c);
    }
    return;
}


/******************* Exercise 1.21 *******************/
// Make sevetal ' ' into '\t'
void entab(){
    int space_count = 0;
    int c;
    int l = 0;

    while((c = getchar()) != EOF){
        l++;

        if(c == ' '){
            space_count++;
            if(l % TAB_LEN == 0){
                putchar('\t');
                space_count = 0;
                continue;
            }
            continue;
        }
        while(space_count > 0){
            putchar(' ');
            space_count--;
        }
        putchar(c);
    }
    return;
}


/******************* Exercise 1.22 *******************/
// If one input row is too long, make each leagal less than size n.
// This is a fake version with as longer than n.
void Row_Fold_Fake(int n){
    const int S_HEAD = -1;
    const int S_IN = 1;
    const int S_OUT = 0;

    int c;
    int cur_len = 0, state = S_HEAD;

    // Start Reading 
    while( (c = getchar()) != EOF ){
        // while is still in IN state
        if(state == S_HEAD){
            // In state HEAD
            if(c == ' ' || c == '\t'){
                continue;
            }
            state = S_IN;
            putchar(c);
            cur_len++;
        }
        else if(state == S_IN){
            // In state IN
            if(c == ' '){
                state = S_OUT;
                putchar(' ');
                cur_len++;
            }
            else if(c == '\t'){
                state = S_OUT;
                do{
                    cur_len++;
                    putchar(' ');
                } while (cur_len % TAB_LEN != 0);
            }
            else{
                // Still the words
                cur_len++;
                putchar(c);
            }
        }
        else{
            // In state out
            cur_len++;
            if(c == '\t' || c == ' '){
                putchar('\n');
                cur_len = 0;
                state = S_HEAD;
            }
            else{
                putchar(c);
            }
            
        }
    }
}
// There is another idea which is to insert or emplace ' '/'\t' with '\n'
void Row_Fold(int n){
    int last_ptr;    
    int c;
    int cur_len = 0;
    char holder[100];

    for (int i = 0; i < 100; i++){
        holder[i] = '\0';
    }

    while ((c = getchar()) != EOF){

        if (c == ' '){
            // skip if its the head // kind-of rare
            if (cur_len == 0){
                    continue;
            }
            // this is the boundary
            if (cur_len >= n){
                int i = 0;
                while(holder[i] != '\0'){
                    putchar(holder[i]);
                    holder[i] = '\0';
                    i++;
                }
                putchar('\n');
                cur_len = 0;
                last_ptr = 0;
            }
            else{
                last_ptr = cur_len;
                holder[cur_len++] = c;
            }
        }
        else if(c == '\t'){
            // skip if its the head // kind-of rare
            if (cur_len == 0){
                continue;
            }
            // this is the boundary
            if (cur_len >= n){
                int i = 0;
                while(holder[i] != '\0'){
                    putchar(holder[i]);
                    holder[i] = '\0';
                    i++;
                }
                putchar('\n');
                cur_len = 0;
                last_ptr = 0;
            }
            else{
                last_ptr = cur_len;
                do{
                    holder[cur_len++] = ' ';
                } while (cur_len % TAB_LEN != 0);

                if(cur_len >= n){
                    // output now.
                    for (int i = 0; i < last_ptr; i++){
                        putchar(holder[i]);
                        holder[i] = '\0';
                    }
                    for (int i = last_ptr; i < cur_len; i++){
                        holder[i] = '\0';
                    }
                    putchar('\n');
                    cur_len = 0;
                    last_ptr = 0;
                }
            }
        }
        else{
            // This is the words; add in now
        }
    }
}



int main(){
    int c;

    char s[] = "adabc";


    return 0;
}