/*
创建人：神数不神
创建日期：2024-5-31
无修正
*/
#pragma once
namespace GameClient::Tag {
#define GAME_COMPONENT_NONE 0
#define GAME_COMPONENT_BUTTON 1
#define GAME_COMPONENT_WIDGET 2
#define GAME_COMPONENT_LABEL 3
#define GAME_COMPONENT_COMBOX 4
#define GAME_COMPONENT_LINEEDIT 5

#define COMPONENT_STATE_COMMON 0 
#define COMPONENT_STATE_ACTIVATE 1
#define COMPONENT_STATE_DISABLE 2


#define DEFAULT_DECKEDITCONTAINER_X_SPACING 12 //卡组编辑器的行列间距
#define DEFAULT_DECKEDITCONTAINER_Y_SPACING 10
#define DEFAULT_DECKEDITCONTAINER_X_CARD_NUMBER 10 //每行最多的卡片存储量
#define DEFAULT_DECKEDITCONTAINER_Y_CARD_NUMBER 4 //每列最多的卡片存储量
//#define CARD_SIZE_MULTIPLIER  1.45 //卡片的长宽比例
}