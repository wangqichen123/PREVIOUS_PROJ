/***********************************************************************
��Ȩ����:�������ӹɷ����޹�˾
��Ŀ����:�ۺϼ���ƽ̨(Turandot)��Ŀ
��    ��:V1.00
����ϵͳ:
�� �� ��:INFORMIX
�� �� ��:WB_DS_ACCOUNTING_FLOW_DIFF.h
�ļ�����:�ṹ�������ݿ⿪��ǶCͷ�ļ�
�� Ŀ ��:
�� �� Ա:[wangzh14925]
����ʱ��:2009-4-29 19:40:39 [Gen]
��    ��:
�޸�ʱ��:
************************************************************************
��    ��:WB_DS_ACCOUNTING_FLOW_DIFF (F_WB30.�ֺܷ˶Բ����)
˵    ��:
************************************************************************
�޸ļ�¼:
�޸�����:
�޸�����:
�� �� ��:
�޸�����:
************************************************************************/
#ifndef __ICPS_DS_ACCOUNTING_FLOW_DIFF_H__
#define __ICPS_DS_ACCOUNTING_FLOW_DIFF_H__
typedef struct TDB_ICPS_DS_ACCOUNTING_FLOW_DIFF
{
	char   busi_date[8+1];  /*ҵ������*/
	char   busi_no[16+1];  /*ҵ������*/
	char   subject[40+1];  /*��Ŀ*/
	char   product_cd[6+1];  /*��Ʒ���*/
	char   bank_group_id[5+1];  /*���Ŵ���*/
	double   db_amt;  /*��ϸ���ܽ跽���*/
	int   db_count;  /*�跽��ϸ���ܱ���*/
	double   db_pmt;  /*���˽跽������*/
	int   db_tcnt;  /*���˽跽����*/
	char   dr_check_flag[1+1]; /*�跽�˶Ա�ʶ*/
	double   cr_amt;  /*�������������*/
	int   cr_count;  /*������ϸ���ܱ���*/
	double   cr_pmt;  /*����������*/ 
	int   cr_tcnt;  /*���˴�������*/
	char   cr_check_flag[1+1]; /*������˶Ա�ʶ*/
	char   extend_param1[100+1];  /*��չ1*/
	char   extend_param2[250+1];  /*��չ2*/
	char   extend_param3[40+1];  /*��չ3*/

}ICPS_DS_ACCOUNTING_FLOW_DIFF;

#define SD_DATA  ICPS_DS_ACCOUNTING_FLOW_DIFF
#define SD_MEMBERS \ 
	APP_DEFSDMEMBER(T_STRING,  busi_date, 0),\
	APP_DEFSDMEMBER(T_STRING,  busi_no, 0),\
	APP_DEFSDMEMBER(T_STRING,  subject, 0),\
	APP_DEFSDMEMBER(T_STRING,  product_cd, 0),\
	APP_DEFSDMEMBER(T_STRING,  bank_group_id, 0),\
	APP_DEFSDMEMBER(T_DOUBLE,  db_amt, 2),\
	APP_DEFSDMEMBER(T_LONG,    db_count, 0),\
	APP_DEFSDMEMBER(T_DOUBLE,  db_pmt, 2),\
	APP_DEFSDMEMBER(T_LONG,    db_tcnt, 0),\
	APP_DEFSDMEMBER(T_STRING,  dr_check_flag, 0),\
	APP_DEFSDMEMBER(T_DOUBLE,  cr_amt, 2),\
	APP_DEFSDMEMBER(T_LONG,    cr_count, 0),\
	APP_DEFSDMEMBER(T_DOUBLE,  cr_pmt, 2),\
	APP_DEFSDMEMBER(T_LONG,    cr_tcnt, 0),\
	APP_DEFSDMEMBER(T_STRING,  cr_check_flag, 0),\
	APP_DEFSDMEMBER(T_STRING,  extend_param1, 0),\
	APP_DEFSDMEMBER(T_STRING,  extend_param2, 0),\
	APP_DEFSDMEMBER(T_STRING,  extend_param3, 0)

	APP_DECLAREFIELDS(SD_ICPS_DS_ACCOUNTING_FLOW_DIFF)
#undef SD_DATA
#undef SD_MEMBERS

#endif  /*end of __ICPS_DS_ACCOUNTING_FLOW_DIFF_H__*/