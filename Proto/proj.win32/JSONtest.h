#pragma once
#include "cocos2d.h"
//JSON문서를 만들고 조작하기 위한 헤더
#include "external/json/document.h"
//JSON문서 직렬화를 위한 헤더
#include "external/json/writer.h"
#include "external/json/stringbuffer.h"
#include "external/json/filereadstream.h"//파일을 열어오기위함
#include <stdio.h>
USING_NS_CC;

class JSONtest : public Node
{
public:
	CREATE_FUNC(JSONtest);
	virtual bool init();
	~JSONtest();
	rapidjson::Document* getJSON();
private:
	rapidjson::Document* jsonDoc;
	void setData();
};

