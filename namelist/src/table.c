#include <stdio.h>
#include "table.h"


void table_data(){
     
char      name1="john",   name2="jack",   name3="steven";
int        age1=18    ,    age2=19    ,    age3=20;
double  weight1=70.5  , weight2=80.5  , weight3=90.5;	
	
   printf("Name           Age     Weight\n") ;  //table title
   printf("%s15",name1);      //1st row of name
   printf("%i5",age1);        //1st row of age
   printf("%f10\n",weight1);  //1st row of weight
   
   printf("%s15",name2);      //2nd row of name
   printf("%i5",age2);        //2nd row of age
   printf("%f10\n",weight2);  //2nd row of weight
   
   printf("%s15",name3);      //3nd row of name
   printf("%i5",age3);        //3nd row of age
   printf("%f10\n",weight3);  //3nd row of weight
   }