/***********************************************************************
��Ȩ����:�������ӹɷ����޹�˾
��Ŀ����:�ۺϼ���ƽ̨(Turandot)��Ŀ
��    ��:V1.00
����ϵͳ:
�� �� ��:INFORMIX
�� �� ��:gab_dxzp_zhxx_zhjyxx.h
�ļ�����:�ṹ�������ݿ⿪��ǶCͷ�ļ�
�� Ŀ ��:
�� �� Ա:[����ǿ]
����ʱ��:2009-4-29 19:40:39 [Gen]
��    ��:
�޸�ʱ��:
************************************************************************
��    ��:gab_dxzp_zhxx_zhjyxx (����թƭ������_�˻�������Ϣ_�˻���Ϣ_������ϸ)
˵    ��:
************************************************************************
�޸ļ�¼:
�޸�����:
�޸�����:
�� �� ��:
�޸�����:
************************************************************************/
#ifndef __GAB_DXZP_ZHXX_ZHJYXX_H__
#define __GAB_DXZP_ZHXX_ZHJYXX_H__
typedef struct TDB_GAB_DXZP_ZHXX_ZHJYXX
{
	char   ywsqbh[36+1];  /*ҵ��������*/
		/*������������ˮ�ţ����ڱ�ʶ�������*/
	long   rwxh;  /*�������*/
		/*�������*/
	char   zhxh[8+1];  /*�˻����*/
		/*�˻����*/
	char   zhjyxh[4+1];  /*�˺Ž������*/
		/*�˺Ž������*/
	char   jylx[50+1];  /*��������*/
		/*��������*/
	char   jdbz[1+1];  /*�����־*/
		/*�����־*/
	char   bz[10+1];  /*����*/
		/*����*/
	char   jyje[20+1];  /*���׽��*/
		/*���׽��*/
	char   jyye[20+1];  /*�������*/
		/*�������*/
	char   jysj[14+1];  /*����ʱ��*/
		/*����ʱ��*/
	char   jylsh[50+1];  /*������ˮ��*/
		/*������ˮ��*/
	char   jydfmc[60+1];  /*���׶Է�����*/
		/*���׶Է�����*/
	char   jydfzh[50+1];  /*���׶Է��˺�*/
		/*���׶Է��˺�*/
	char   jydfzjhm[30+1];  /*���׶Է�֤������*/
		/*���׶Է�֤������*/
	char   jydfzhkhh[90+1];  /*���׶Է��˺ſ�����*/
		/*���׶Է��˺ſ�����*/
	char   jyzy[150+1];  /*����ժҪ*/
		/*����ժҪ*/
	char   jywdmc[150+1];  /*������������*/
		/*������������*/
	char   jywddm[20+1];  /*�����������*/
		/*�����������*/
	char   rzh[30+1];  /*��־��*/
		/*��־��*/
	char   cph[30+1];  /*��Ʊ��*/
		/*��Ʊ��*/
	char   pzzl[10+1];  /*ƾ֤����*/
		/*ƾ֤����*/
	char   pzh[30+1];  /*ƾ֤��*/
		/*ƾ֤��*/
	char   xjbz[2+1];  /*�ֽ��־*/
		/*�ֽ��־*/
	char   zdh[30+1];  /*�ն˺�*/
		/*�ն˺�*/
	char   jysfcg[2+1];  /*�����Ƿ�ɹ�*/
		/*�����Ƿ�ɹ�*/
	char   jyfsd[150+1];  /*���׷�����*/
		/*���׷�����*/
	char   shmc[150+1];  /*�̻�����*/
		/*�̻�����*/
	char   shh[30+1];  /*�̻���*/
		/*�̻���*/
	char   ip[30+1];  /*ip��ַ*/
		/*ip��ַ*/
	char   mac[50+1];  /*mac��ַ*/
		/*mac��ַ*/
	char   jygyh[20+1];  /*���׹�Ա��*/
		/*���׹�Ա��*/
	char   beiz[150+1];  /*��ע*/
		/*��ע*/
	char   zwrq[8+1];  /*gaps����*/
		/*gaps����*/
	char   systime[6+1];  /*gapsʱ��*/
		/*gapsʱ��*/
	char   by1[30+1];  /*����1*/
		/*����1*/
	char   by2[254+1];  /*����2*/
		/*����2*/
	char   by3[254+1];  /*����3*/
		/*����3*/

}GAB_DXZP_ZHXX_ZHJYXX;

#define SD_DATA  GAB_DXZP_ZHXX_ZHJYXX
#define SD_MEMBERS \
	DEFSDMEMBER(T_STRING,  ywsqbh, 0),\
	DEFSDMEMBER(T_LONG,  rwxh, 0),\
	DEFSDMEMBER(T_STRING,  zhxh, 0),\
	DEFSDMEMBER(T_STRING,  zhjyxh, 0),\
	DEFSDMEMBER(T_STRING,  jylx, 0),\
	DEFSDMEMBER(T_STRING,  jdbz, 0),\
	DEFSDMEMBER(T_STRING,  bz, 0),\
	DEFSDMEMBER(T_STRING,  jyje, 0),\
	DEFSDMEMBER(T_STRING,  jyye, 0),\
	DEFSDMEMBER(T_STRING,  jysj, 0),\
	DEFSDMEMBER(T_STRING,  jylsh, 0),\
	DEFSDMEMBER(T_STRING,  jydfmc, 0),\
	DEFSDMEMBER(T_STRING,  jydfzh, 0),\
	DEFSDMEMBER(T_STRING,  jydfzjhm, 0),\
	DEFSDMEMBER(T_STRING,  jydfzhkhh, 0),\
	DEFSDMEMBER(T_STRING,  jyzy, 0),\
	DEFSDMEMBER(T_STRING,  jywdmc, 0),\
	DEFSDMEMBER(T_STRING,  jywddm, 0),\
	DEFSDMEMBER(T_STRING,  rzh, 0),\
	DEFSDMEMBER(T_STRING,  cph, 0),\
	DEFSDMEMBER(T_STRING,  pzzl, 0),\
	DEFSDMEMBER(T_STRING,  pzh, 0),\
	DEFSDMEMBER(T_STRING,  xjbz, 0),\
	DEFSDMEMBER(T_STRING,  zdh, 0),\
	DEFSDMEMBER(T_STRING,  jysfcg, 0),\
	DEFSDMEMBER(T_STRING,  jyfsd, 0),\
	DEFSDMEMBER(T_STRING,  shmc, 0),\
	DEFSDMEMBER(T_STRING,  shh, 0),\
	DEFSDMEMBER(T_STRING,  ip, 0),\
	DEFSDMEMBER(T_STRING,  mac, 0),\
	DEFSDMEMBER(T_STRING,  jygyh, 0),\
	DEFSDMEMBER(T_STRING,  beiz, 0),\
	DEFSDMEMBER(T_STRING,  zwrq, 0),\
	DEFSDMEMBER(T_STRING,  systime, 0),\
	DEFSDMEMBER(T_STRING,  by1, 0),\
	DEFSDMEMBER(T_STRING,  by2, 0),\
	DEFSDMEMBER(T_STRING,  by3, 0)


	DECLAREFIELDS(SD_GAB_DXZP_ZHXX_ZHJYXX)
#undef SD_DATA
#undef SD_MEMBERS

#endif  /*end of __GAB_DXZP_ZHXX_ZHJYXX_H__*/