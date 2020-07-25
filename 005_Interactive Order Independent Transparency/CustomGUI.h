#pragma once
#include "GUI.h"
#include <GLM/glm.hpp>

class CCustomGUI : public IGUI
{
public:
	CCustomGUI(const std::string& vName, int vExcutionOrder);
	virtual ~CCustomGUI();

	virtual void initV() override;
	virtual void updateV() override;

private:
	float m_NormalThresholdInEdgeDetecion = 0.5f;
	float m_DepthThresholdInEdgeDetection = 8.0f;
	//glm::vec3 m_LightPos = glm::vec3(0.52, -0.49, 0);	//��Ӧ0.25��LightCameraSize
	glm::vec3 m_LightPos = glm::vec3(-0.53, -0.5, 0.70);	//��Ӧ1.0��LightCameraSize��ȥ�����Ļ�z=0.19
	glm::vec3 m_LightDir = glm::normalize(glm::vec3(-1.0, -1.0, 0));	//-0.3, -1, 0
};