// pid.c
#include "pid.h"

void PID_init(PID *pid, float kp, float ki, float kd) {
    pid->kp = kp;
    pid->ki = ki;
    pid->kd = kd;
    pid->erro_integral = 0.0f;
    pid->erro_anterior = 0.0f;
}

float PID_calcular(PID *pid, float erro, float dt) {
    pid->erro_integral += erro * dt;
    float derivada = (erro - pid->erro_anterior) / dt;
    pid->erro_anterior = erro;

    return pid->kp * erro + pid->ki * pid->erro_integral + pid->kd * derivada;
}
void PID_set_kp(PID *pid,float a){
    pid->kp=a;
}
void PID_set_ki(PID *pid,float a){
    pid->ki=a;
}
void PID_set_kd(PID *pid,float a){
    pid->kd=a;
}