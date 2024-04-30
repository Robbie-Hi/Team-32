#include <kipr/wombat.h>
#include <math.h>

void line_follow(int distance, int speed) {
    set_create_distance(0);
    printf("%d\n",get_create_lfcliff_amt());
	while (abs(get_create_distance()) < distance) {
        printf("%d\n",get_create_lfcliff_amt());
		if (get_create_lfcliff_amt() > 2200)
            {
            create_drive_direct(speed, 0.3*speed);
            }
            else
            {
            create_drive_direct(0.3*speed, speed);
            }
    }
}


int main()
{

     create_connect();
   enable_servos();
     set_servo_position(0,0);
    msleep(1000);
   set_servo_position(3,0);
    msleep(1000);
    get_create_battery_capacity();
    ao();
    msleep(23000);
    enable_servos();
    set_servo_position(0,1673);
    msleep(1000);
    ao();
    msleep(1000);
    create_drive_direct(-100,-100);
    msleep(2000);
    create_drive_direct(200,200);
    msleep(7500);
    create_stop();
    msleep(1000);
   // line_follow(450,150);
  //  msleep(500);
     create_stop();
    //linefloow 250
    create_drive_direct(10,50);
    msleep(3000);
    create_drive_direct(200,200);
     msleep(2000);
    create_drive_direct(50,50);
    msleep(2200);
    //end of rocks
    create_drive_direct(-200,-200);
    msleep(3000);
    create_drive_direct(0,100);
    msleep(2000);
    create_stop();
    msleep(1000);
    //poms
    create_drive_direct(100,100);
    msleep(3000);
    create_drive_direct(-100,-100);
    msleep(2000);
    create_stop();
  msleep(1000);
      enable_servos();
    set_servo_position(0,0);
    msleep(1000);
    // the cubes 
    enable_servos();
    set_servo_position(0,0);
    msleep(1000);
    set_servo_position(3,0);
    msleep(1000);
    create_drive_direct(-30,70);
    msleep(9500);
    create_drive_direct(-75,-75);
    msleep(5000);
    create_drive_direct(100,100);
    msleep(4000);
    printf("Hello Robbie");
    return 0;
}
