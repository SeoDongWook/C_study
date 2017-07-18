#include "stdafx.h"

void BoostEffect_OnApply(S_BoostEffect *pThis, double fDelta)
{


	switch (pThis->m_nFSM)
	{
	case 0:
		pThis->m_nFSM = 10;

		break;
	case 10:
		pThis->m_fLifeTime += fDelta;
		if (pThis->m_fLifeTime > 0.5) {
			pThis->m_nFSM = 999;
		}
		break;
	}

}

void BoostEffect_OnRender(S_BoostEffect *pThis, Graphics *pGrp)
{
	Pen pen(Color(255, 255, 255));
	Matrix tempMat;
	pGrp->GetTransform(&tempMat);
	pGrp->TranslateTransform(pThis->m_vPosition.X, pThis->m_vPosition.Y);
	pGrp->ScaleTransform(pThis->m_fLifeTime, pThis->m_fLifeTime);
	pGrp->DrawEllipse(&pen, -16, -16, 32, 32);
	pGrp->SetTransform(&tempMat);

}

void BoostEffect_Setup(S_BoostEffect *pThis, irr::core::vector2df &vPos)
{
	pThis->m_vPosition = vPos;
	pThis->m_fLifeTime = 0;
	pThis->m_nFSM = 0;

}
