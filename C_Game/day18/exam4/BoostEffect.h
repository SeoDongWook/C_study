#pragma once

struct S_BoostEffect
{
	irr::core::vector2df m_vPosition;
	irr::f32 m_fLifeTime;
	int m_nFSM;
};

extern void BoostEffect_Setup(S_BoostEffect *pThis, irr::core::vector2df &vPos);
extern void BoostEffect_OnRender(S_BoostEffect *pThis, Graphics *pGrp);
extern void BoostEffect_OnApply(S_BoostEffect *pThis, double fDelta);