#include<stdio.h>
#include<string.h>
char first_seq[10],second_seq[10],c_box[20][20];
int counter,counter2,first_length,second_length,stor_box[20][20];
void print(int count,int count2){
    if(count==0 || count2==0)
        return;

    if(c_box[count][count2]=='c'){
        print(count-1,count2-1);
        printf("%c",first_seq[count-1]);
    }
    else if(c_box[count][count2]=='u')
        print(count-1,count2);

    else
        print(count,count2-1);

}

void lcs(){
    first_length=strlen(first_seq);
    second_length=strlen(second_seq);
    for(counter=0;counter<=first_length;counter++){
        stor_box[counter][0]=0;
    }
    for(counter=0;counter<=first_length;counter++){
        stor_box[0][counter]=0;
    }
    for(counter=1;counter<=first_length;counter++){
        for(counter2=1;counter2<=second_length;counter2++){
            if(first_seq[counter-1]==second_seq[counter2-1]){
                stor_box[counter][counter2] = stor_box[counter-1] [counter2-1]+1;
                c_box[counter][counter2] = 'c';
            }
            else if(stor_box[counter-1][counter2]>=stor_box[counter][counter2-1]){
                stor_box[counter][counter2]=stor_box[counter-1][counter2];
                c_box[counter][counter2]='u';
            }
            else{
                stor_box[counter][counter2]=stor_box[counter][counter-1];
                c_box[counter][counter2]='l';
            }
        }
    }
}

int main(){

    printf("enter 1st sequence:");
    scanf("%s",first_seq);
    printf("enter 2nd sequence:");
    scanf("%s",second_seq);
    printf("the longest common subsequence is:");
    lcs();

    print(first_length,second_length);

    return 0;
}
