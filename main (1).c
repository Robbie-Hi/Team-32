#include <kipr/wombat.h>

void lineFollow(int distance, int speed) {
 cmpc(0);
 while (abs(gmpc(0)) < distance) {
 	if (analog(0) > 2000) {
    	mav(0,(speed*15)*0.4);
        mav(3,(speed*15));
    } else {
    	mav(3,(speed*15)*0.4);
        mav(0,(speed*15));
    }
 }
}

int main()
{  
    
    
    motor(0,50);
    motor(3,50);
    msleep(3000);
    motor(0,-50);
    motor(3,0);
    msleep(3000);
    motor(0,-50);
    motor(3,-50);
    msleep(300);
   disable_servos();
 msleep(1000);
 enable_servos();
    set_servo_position(1,0);
    msleep(1000);
    disable_servos();
    motor(0,50);
    motor(3,50);
    msleep(3300);
    enable_servos();
    set_servo_position(1,1334);
    motor(0,-50);
    motor(3,-50);
    msleep(1700);
    //end of pushing rock into create
    printf("I finished pushing the first rocks\n");
    motor(0,0);
    motor(3,-50);
    msleep(2800);
 set_servo_position(1,100);        printf("Line 47\n");
    set_servo_position(2,1400);
    motor(0,75);
    motor(3,75);
    msleep(5100);
        printf("Line 52\n");
    motor(0,0);
    motor(3,50);
    msleep(1700);
        motor(0,50);
    motor(3,75);
    msleep(1600);
           printf("Line 57\n");
  
    enable_servos();
    set_servo_position(1,1334);
    set_servo_position(2,600);
	msleep(1000);
     disable_servos();
    motor(0,0);
    motor(3,50);
    msleep(5000);
       motor(0,50);
    motor(3,50);
    msleep(3000);
     motor(0,50);
    motor(3,50);
    msleep(3000);
     motor(0,-50);
    motor(3,0);
    msleep(5000);
      motor(0,75);
    motor(3,75);
    msleep(2000);
      motor(0,50);
    motor(3,75);
    msleep(5000);
      lineFollow(4000,75);
      motor(0,-50);
    motor(3,0);
    msleep(2500);
    
    ao();
    msleep(1000);
     enable_servos();
    set_servo_position(1,171);
    set_servo_position(2,1000); 
    msleep(1000);
    
 
 
 
 
     
    
       printf("Line 64\n");
       printf("you smell 64\n");
     //end of pushing rock into create
    printf(" finished pushing all the rocks\n");
   
   
    

    
              printf("Line It should be done\n");
  
return 0;
}