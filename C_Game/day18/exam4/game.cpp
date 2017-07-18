#include "stdafx.h"

HWND g_hWnd;

#define MAX_BULLET_LIST 1000
#define MAX_EFFECT_BULLETDIE_LIST 1000

BYTE g_KeyStatus[256];
S_ObjectPlayer g_objPlayer;
S_ObjectBullet *g_pBullet_List[MAX_BULLET_LIST];
S_ObjectEffectBulletDie *g_pEffectBulletDie_List[MAX_EFFECT_BULLETDIE_LIST];
S_BoostEffect *g_pBoostEffect[100];

Image *g_pImgSpaceShip;

irr::f64 g_fAcctick = 0;

// -1 : 생성 실패
int AddBullet1()
{
	int i;
	for (i = 0; i < MAX_BULLET_LIST; i++) {
		if (g_pBullet_List[i] == NULL) {
			S_ObjectBullet *ptr = (S_ObjectBullet *)malloc(sizeof(S_ObjectBullet));
			ObjectBullet_Setup(ptr, irr::core::vector2df(320, -240), g_objPlayer.m_vPosition, 6, rand() % 50 + 60);   // 총알 크기,속도.
			g_pBullet_List[i] = ptr;
			
			return i;
		}
	}

	return -1;
}

int AddBullet2()
{
	int i;
	for (i = 0; i < MAX_BULLET_LIST; i++) {
		if (g_pBullet_List[i] == NULL) {
			S_ObjectBullet *ptr = (S_ObjectBullet *)malloc(sizeof(S_ObjectBullet));
			ObjectBullet_Setup(ptr, irr::core::vector2df(320, 240), g_objPlayer.m_vPosition, 6, rand() % 50 + 60);   // 총알 크기,속도.
			g_pBullet_List[i] = ptr;

			return i;
		}
	}

	return -1;
}

int AddBullet3()
{
	int i;
	for (i = 0; i < MAX_BULLET_LIST; i++) {
		if (g_pBullet_List[i] == NULL) {
			S_ObjectBullet *ptr = (S_ObjectBullet *)malloc(sizeof(S_ObjectBullet));
			ObjectBullet_Setup(ptr, irr::core::vector2df(-320, 240), g_objPlayer.m_vPosition, 6, rand() % 50 + 60);   // 총알 크기,속도.
			g_pBullet_List[i] = ptr;

			return i;
		}
	}

	return -1;
}

int AddBullet4()
{
	int i;
	for (i = 0; i < MAX_BULLET_LIST; i++) {
		if (g_pBullet_List[i] == NULL) {
			S_ObjectBullet *ptr = (S_ObjectBullet *)malloc(sizeof(S_ObjectBullet));
			ObjectBullet_Setup(ptr, irr::core::vector2df(-320, -240), g_objPlayer.m_vPosition, 6, rand() % 50 + 60);   // 총알 크기,속도.
			g_pBullet_List[i] = ptr;

			return i;
		}
	}

	return -1;
}

int AddBullet5()
{
	int i;
	for (i = 0; i < MAX_BULLET_LIST; i++) {
		if (g_pBullet_List[i] == NULL) {
			S_ObjectBullet *ptr = (S_ObjectBullet *)malloc(sizeof(S_ObjectBullet));
			ObjectBullet_Setup(ptr, irr::core::vector2df(320, 0), g_objPlayer.m_vPosition, 6, rand() % 50 + 60);   // 총알 크기,속도.
			g_pBullet_List[i] = ptr;

			return i;
		}
	}

	return -1;
}

int AddBullet6()
{
	int i;
	for (i = 0; i < MAX_BULLET_LIST; i++) {
		if (g_pBullet_List[i] == NULL) {
			S_ObjectBullet *ptr = (S_ObjectBullet *)malloc(sizeof(S_ObjectBullet));
			ObjectBullet_Setup(ptr, irr::core::vector2df(-320, 0), g_objPlayer.m_vPosition, 6, rand() % 50 + 60);   // 총알 크기,속도.
			g_pBullet_List[i] = ptr;

			return i;
		}
	}

	return -1;
}

int AddBullet7()
{
	int i;
	for (i = 0; i < MAX_BULLET_LIST; i++) {
		if (g_pBullet_List[i] == NULL) {
			S_ObjectBullet *ptr = (S_ObjectBullet *)malloc(sizeof(S_ObjectBullet));
			ObjectBullet_Setup(ptr, irr::core::vector2df(0, 240), g_objPlayer.m_vPosition, 6, rand() % 50 + 60);   // 총알 크기,속도.
			g_pBullet_List[i] = ptr;

			return i;
		}
	}

	return -1;
}

int AddBullet8()
{
	int i;
	for (i = 0; i < MAX_BULLET_LIST; i++) {
		if (g_pBullet_List[i] == NULL) {
			S_ObjectBullet *ptr = (S_ObjectBullet *)malloc(sizeof(S_ObjectBullet));
			ObjectBullet_Setup(ptr, irr::core::vector2df(0, -240), g_objPlayer.m_vPosition, 6, rand() % 50 + 60);   // 총알 크기,속도.
			g_pBullet_List[i] = ptr;

			return i;
		}
	}

	return -1;
}


int AddEffectBulletDie(irr::core::vector2df pos)
{
	int i;
	for (i = 0; i < MAX_EFFECT_BULLETDIE_LIST; i++) {
		if (g_pEffectBulletDie_List[i] == NULL) {
			S_ObjectEffectBulletDie *ptr = (S_ObjectEffectBulletDie *)malloc(sizeof(S_ObjectEffectBulletDie));
			ObjectEffectBulletDie_Setup(ptr, pos);
			g_pEffectBulletDie_List[i] = ptr;
			return i;
		}
	}
	return -1;
}

void ClearDeadBulletObj()
{
	int i;
	for (i = 0; i < MAX_BULLET_LIST; i++) {

		if (g_pBullet_List[i] != NULL && g_pBullet_List[i]->m_nFSM == 999) {
			free(g_pBullet_List[i]);
			g_pBullet_List[i] = NULL;
		}
	}
}

void ClearDeadEffectBulletDieObj()
{
	int i;
	for (i = 0; i < MAX_EFFECT_BULLETDIE_LIST; i++) {

		if (g_pEffectBulletDie_List[i] != NULL && g_pEffectBulletDie_List[i]->m_nFSM == 999) {
			free(g_pEffectBulletDie_List[i]);
			g_pEffectBulletDie_List[i] = NULL;
		}
	}
}


void OnLoop(double fDelta)
{
	if (fDelta < 0 || fDelta > 1.0) {
		fDelta = 0;
	}
	//시체처리
	ClearDeadBulletObj();
	ClearDeadEffectBulletDieObj();

	//총알 발사
	g_fAcctick += fDelta;
	if (g_fAcctick > 0.5) { //발사속도
		g_fAcctick = 0;
		AddBullet1();
		AddBullet2();
		AddBullet3();
		AddBullet4();
		AddBullet5();
		AddBullet6();
		AddBullet7();
		AddBullet8();
	}
	//플레이어 처리
	S_ObjectPlayer_OnApply(&g_objPlayer, fDelta);

	//총알 처리
	for (int i = 0; i < MAX_BULLET_LIST; i++) {

		S_ObjectBullet *ptr = g_pBullet_List[i];
		if (ptr != NULL) {
			ObjectBullet_OnApply(ptr, fDelta);
		}
	}

	//파괴 효과
	for (int i = 0; i < MAX_EFFECT_BULLETDIE_LIST; i++) {

		S_ObjectEffectBulletDie *ptr = g_pEffectBulletDie_List[i];
		if (ptr != NULL) {
			ObjectEffectBulletDie_OnApply(ptr, fDelta);
		}
	}
	//부스터 효과
	for (int i = 0; i < 16; i++) {

		S_BoostEffect *ptr = g_pBoostEffect[i];
		if (ptr != NULL) {
			BoostEffect_OnApply(ptr, fDelta);
		}
	}
}

void OnRender(double fDelta, Graphics *pGrp)
{
	pGrp->Clear(Color(0, 0, 0));
	if (fDelta > 0) {
		plusEngine::printf(pGrp, 0, 0, L"fps : %lf", 1.0 / fDelta);
	}
	else {
		plusEngine::printf(pGrp, 0, 0, L"fps : %lf", 1000.f);
	}
	Pen pen(Color(51, 51, 51));
	//Pen pen2(Color(255, 0, 0));
	pGrp->DrawRectangle(&pen, 160, 120, 320, 240);


	Matrix originMat(1, 0, 0, 1, 320, 240);   //뱅기 위치
	pGrp->SetTransform(&originMat);

	S_ObjectPlayer_OnRender(&g_objPlayer, pGrp);

	for (int i = 0; i < MAX_BULLET_LIST; i++) {
		S_ObjectBullet *ptr = g_pBullet_List[i];
		if (ptr != NULL) {
			ObjectBullet_OnRender(ptr, pGrp);
		}
	}
	//파괴 효과
	for (int i = 0; i < MAX_EFFECT_BULLETDIE_LIST; i++) {

		S_ObjectEffectBulletDie *ptr = g_pEffectBulletDie_List[i];
		if (ptr != NULL) {
			ObjectEffectBulletDie_OnRender(ptr, pGrp);
		}
	}

	pGrp->ResetTransform();

}

void OnCreate(HWND hWnd)
{
	g_hWnd = hWnd;
	plusEngine::fpOnLoop = OnLoop;
	plusEngine::fpOnRender = OnRender;
	//키상태 초기화 
	for (int i = 0; i < 256; i++) {
		g_KeyStatus[i] = 0;
	}

	for (int i = 0; i < MAX_BULLET_LIST; i++) {
		g_pBullet_List[i] = NULL;
	}
	for (int i = 0; i < MAX_EFFECT_BULLETDIE_LIST; i++) {
		g_pEffectBulletDie_List[i] = NULL;
	}

	g_pImgSpaceShip = new Image(L"../../res/spaceship_crop.png");

	S_ObjectPlayer_Setup(&g_objPlayer, irr::core::vector2df(0, 0), g_pImgSpaceShip);
}

void OnDestory(HWND hWnd)
{
	delete g_pImgSpaceShip;

	int i;
	for (i = 0; i < MAX_BULLET_LIST; i++) {
		if (g_pBullet_List[i] != NULL) {
			free(g_pBullet_List[i]);
		}
	}
}