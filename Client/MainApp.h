#pragma once

class CGraphicDevice;

class CMainApp
{
public:
	explicit CMainApp(void);
	~CMainApp(void);

public:
	HRESULT		Ready_MainApp(void);
	void		Render_MainApp(void);

private:
	HRESULT		SetUp_Setting(LPDIRECT3DDEVICE9* ppGraphicDev);

private:
	CGraphicDevice*			m_pDeviceClass;

	LPDIRECT3DDEVICE9		m_pGraphicDevice;
};

