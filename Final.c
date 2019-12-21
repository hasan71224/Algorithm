/*#include <stdio.h>
void main(){
    int a[100],n,i;
   int total_peak=0;
    printf("enter how many number you count:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter Number %d: ",i+1);
        scanf("%d",&a[i]);

    }
    if(a[0]>=a[1]){
        total_peak=a[0];
        printf("peak value is:%d",total_peak);
    }
    else if(a[n-1]>=a[n-2]){
        total_peak=a[n-1];
        printf("peak value is: %d",total_peak);
    }
    else{
        for(i=1;i<n-2;i++){
            if(a[i]>=a[i+1] && a[i]>=a[i-1]){
                total_peak=a[i];
                printf("peak value is: %d",total_peak);
            }
        }
    }
}
*/

#include <stdio.h>
int maximum,a[100];
int max(upervalue){
    if(upervalue==0){
        maximum=a[upervalue];
        return a[upervalue];
    }
    else if(a[upervalue]>a[upervalue-1]){
        maximum=a[upervalue];
        return maximum;
    }
    else{
        return maximum;
    }

}

void main(){
    int number,index,maximum;
    printf("enter how many number you calculate:");
    scanf("%d",&number);
    for(index=0;index<number;index++){
        printf("enter index number:");
        scanf("%d",&a[index]);
    }
    maximum=max(index-1);
    printf("maximum value is %d",maximum);

}
