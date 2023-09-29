#include<stdio.h>
 
float f(float a,float b,float c,float x)
{
  return a * x * x + b * x + c;
}
 
int main(){

  float a,b,c,u,v;
  scanf("%f%f%f",&a,&b,&c);
  scanf("%f%f",&u,&v);

	float output;

  if( f(a, b, c, u) < 0) { // f(u) < 0, means f(v) > 0 and v - u > 0
	  while ((v-u) > 0.00001){
      float k=(u+v)/2;
      if( f(a,b,c,k)>0){ // if f(middle point) > 0
			  v=k;
				output = v;
			}
      else if( f(a,b,c,k)<0){
        u=k;
				output = u;
			}
      else{ // f(a, b, c, k) == 0
				printf("%f",output);
        return 0;
			}
    }
  printf("%f",output);
  }

  else{
    while ( (v-u) >0.00001){
      float k=(u+v)/2;
      if (f(a,b,c,k)>0){
        u=k;
				output = u;
			}
      else if (f(a,b,c,k)<0){
        v=k;
				output = v;
			}
      else{
        printf("%f",k);
        return 0;
      } 
    } 
    printf("%f",output);
   }
	return 0;
}
