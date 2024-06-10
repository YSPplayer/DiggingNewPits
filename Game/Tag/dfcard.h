/*
�����ˣ���������
�������ڣ�2024-6-8
������
*/
#pragma once
namespace GameClient::Tag {
//����
#define ATTRIBUTE_ALL		0x7f		//ȫ��
#define ATTRIBUTE_EARTH		0x01		//��
#define ATTRIBUTE_WATER		0x02		//ˮ
#define ATTRIBUTE_FIRE		0x04		//��
#define ATTRIBUTE_WIND		0x08		//��
#define ATTRIBUTE_LIGHT		0x10		//��
#define ATTRIBUTE_DARK		0x20		//��
#define ATTRIBUTE_DEVINE	0x40		//��

//����
#define RACES_COUNT			26
#define RACE_ALL			0x3ffffff
#define RACE_WARRIOR		0x1			//սʿ
#define RACE_SPELLCASTER	0x2			//ħ��ʦ
#define RACE_FAIRY			0x4			//��ʹ
#define RACE_FIEND			0x8			//��ħ
#define RACE_ZOMBIE			0x10		//����
#define RACE_MACHINE		0x20		//��е
#define RACE_AQUA			0x40		//ˮ
#define RACE_PYRO			0x80		//��
#define RACE_ROCK			0x100		//��ʯ
#define RACE_WINDBEAST		0x200		//����
#define RACE_PLANT			0x400		//ֲ��
#define RACE_INSECT			0x800		//����
#define RACE_THUNDER		0x1000		//��
#define RACE_DRAGON			0x2000		//��
#define RACE_BEAST			0x4000		//��
#define RACE_BEASTWARRIOR	0x8000		//��սʿ
#define RACE_DINOSAUR		0x10000		//����
#define RACE_FISH			0x20000		//��
#define RACE_SEASERPENT		0x40000		//����
#define RACE_REPTILE		0x80000		//������
#define RACE_PSYCHO			0x100000	//���
#define RACE_DEVINE			0x200000	//������
#define RACE_CREATORGOD		0x400000	//������
#define RACE_WYRM			0x800000	//����
#define RACE_CYBERSE		0x1000000	//���ӽ�
#define RACE_ILLUSION		0x2000000	//

//��Ƭ����
#define TYPE_MONSTER		0x1			//����
#define TYPE_SPELL			0x2			//ħ��
#define TYPE_TRAP			0x4			//����
#define TYPE_NORMAL			0x10		//ͨ��
#define TYPE_EFFECT			0x20		//Ч��
#define TYPE_FUSION			0x40		//�ں�
#define TYPE_RITUAL			0x80		//��ʽ
#define TYPE_TRAPMONSTER	0x100		//�������
#define TYPE_SPIRIT			0x200		//���
#define TYPE_UNION			0x400		//ͬ��
#define TYPE_DUAL			0x800		//����
#define TYPE_TUNER			0x1000		//����
#define TYPE_SYNCHRO		0x2000		//ͬ��
#define TYPE_TOKEN			0x4000		//������
#define TYPE_QUICKPLAY		0x10000		//�ٹ�
#define TYPE_CONTINUOUS		0x20000		//����
#define TYPE_EQUIP			0x40000		//װ��
#define TYPE_FIELD			0x80000		//����
#define TYPE_COUNTER		0x100000	//����
#define TYPE_FLIP			0x200000	//��ת
#define TYPE_TOON			0x400000	//��ͨ
#define TYPE_XYZ			0x800000	//����
#define TYPE_PENDULUM		0x1000000	//���
#define TYPE_SPSUMMON		0x2000000	//�����ٻ�
#define TYPE_LINK			0x4000000	//����
}