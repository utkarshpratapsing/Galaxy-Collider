#ifndef _TYPES_H
#define _TYPES_H

#pragma pack(push, 1)

struct PODState
{
    double x;
    double y;
    double vx;
    double vy;
};

struct PODAuxState
{
    double mass;
};

struct PODDeriv
{
    double vx;
    double vy;
    double ax;
    double ay;
};

#pragma pack(pop)

struct ParticleData
{
    ParticleData();
    ParticleData(PODState *pState, PODAuxState *pAuxState);
    ParticleData(const ParticleData &ref);
    ParticleData &operator=(const ParticleData &ref);

    void Reset();
    bool IsNull() const;

    PODState *_pState;
    PODAuxState *_pAuxState;
};

#endif // _TYPES_H
