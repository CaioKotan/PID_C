// pid.h
#ifndef PID_H
#define PID_H

typedef struct {
    float kp, ki, kd;
    float erro_integral;
    float erro_anterior;
} PID;

void PID_init(PID *pid, float kp, float ki, float kd);
void PID_set_kp(PID *pid, float a);
void PID_set_ki(PID *pid, float a);
void PID_set_kd(PID *pid, float a);


float PID_calcular(PID *pid, float erro, float dt);

#endif
