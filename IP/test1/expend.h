#ifndef EXPEND_H
#define EXPEND_H

class expend
{
public:
    float income;
    float saved;
    float spent_sh;
    float spent_ent;
    float spent_fm;
    float spent_fu;
    float spent_ot;
     int flag;

    void calc();
    expend();
};

#endif // EXPEND_H
