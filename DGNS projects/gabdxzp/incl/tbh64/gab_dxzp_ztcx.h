/***********************************************************************
��Ȩ����:�������ӹɷ����޹�˾
��Ŀ����:�ۺϼ���ƽ̨(Turandot)��Ŀ
��    ��:V1.00
����ϵͳ:
�� �� ��:INFORMIX
�� �� ��:gab_dxzp_ztcx.h
�ļ�����:�ṹ�������ݿ⿪��ǶCͷ�ļ�
�� Ŀ ��:
�� �� Ա:[����ǿ]
����ʱ��:2009-4-29 19:40:39 [Gen]
��    ��:
�޸�ʱ��:
************************************************************************
��    ��:gab_dxzp_ztcx (����թƭ�����ѯ��)
˵    ��:
************************************************************************
�޸ļ�¼:
�޸�����:
�޸�����:
�� �� ��:
�޸�����:
************************************************************************/
#ifndef __GAB_DXZP_ZTCX_H__
#define __GAB_DXZP_ZTCX_H__
typedef struct TDB_GAB_DXZP_ZTCX
{
	char   ywsqbh[36+1];  /*ҵ��������*/
		/*���������󵥱�ʶ�����ڱ�ʶ�������*/
	long   rwxh;  /*�������*/
		/*�������*/
	char   khyh[12+1];  /*��ѯ�˻��������л�������*/
		/**/
	char   khyhmc[150+1];  /*��ѯ�˻�������������*/
		/**/
	char   zhlb[2+1];  /*��ѯ�˺����*/
		/**/
	char   zhmc[150+1];  /*��ѯ�˻���*/
		/**/
	char   zh[30+1];  /*��ѯ�˿���*/
		/**/
	long   jgfksj;  /*��������޶�ʱ��*/
		/**/
	char   zxjg[1+1];  /*ִ�н��*/
		/*ִ�н�� 0-���ɹ���1-�ɹ�*/
	char   respcode[8+1];  /*������*/
		/**/
	char   respmsg[100+1];  /*����ԭ��*/
		/**/
	char   fksm[300+1];  /*����˵��*/
		/**/
	char   fkjgmc[150+1];  /*������������*/
		/**/
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

}GAB_DXZP_ZTCX;

#define SD_DATA  GAB_DXZP_ZTCX
#define SD_MEMBERS \
	DEFSDMEMBER(T_STRING,  ywsqbh, 0),\
	DEFSDMEMBER(T_LONG,  rwxh, 0),\
	DEFSDMEMBER(T_STRING,  khyh, 0),\
	DEFSDMEMBER(T_STRING,  khyhmc, 0),\
	DEFSDMEMBER(T_STRING,  zhlb, 0),\
	DEFSDMEMBER(T_STRING,  zhmc, 0),\
	DEFSDMEMBER(T_STRING,  zh, 0),\
	DEFSDMEMBER(T_LONG,  jgfksj, 0),\
	DEFSDMEMBER(T_STRING,  zxjg, 0),\
	DEFSDMEMBER(T_STRING,  respcode, 0),\
	DEFSDMEMBER(T_STRING,  respmsg, 0),\
	DEFSDMEMBER(T_STRING,  fksm, 0),\
	DEFSDMEMBER(T_STRING,  fkjgmc, 0),\
	DEFSDMEMBER(T_STRING,  zwrq, 0),\
	DEFSDMEMBER(T_STRING,  systime, 0),\
	DEFSDMEMBER(T_STRING,  by1, 0),\
	DEFSDMEMBER(T_STRING,  by2, 0),\
	DEFSDMEMBER(T_STRING,  by3, 0)


	DECLAREFIELDS(SD_GAB_DXZP_ZTCX)
#undef SD_DATA
#undef SD_MEMBERS

#endif  /*end of __GAB_DXZP_ZTCX_H__*/