/********************************************************************
版权所有:杭州恒生电子股份有限公司
项目名称:住建部公积金前置系统
版    本:V2.0
操作系统:LINUX
数 据 库:ORACLE
文件名称:zjbgjj_mid.h
文件描述:响应代码 宏定义文件
项 目 组:
程 序 员:
发布日期:
修    订:
修改日期:
*********************************************************************/
/*
修改记录
修改日期:
修改内容:
修改人:
*/

#ifndef __ZJB_GJJ_MID_H__
#define __ZJB_GJJ_MID_H__

#define MID_ZJB_GJJ_XMLOP                   92511       /* XML相关操作失败*/
#define MID_ZJB_GJJ_COMMBUF                 92512       /* COMMBUF相关操作失败*/
#define MID_ZJB_GJJ_MALLOC                  92513       /* 内存相关操作失败*/
#define MID_ZJB_GJJ_FILEOP                  92514       /* 文件相关操作失败*/
#define MID_ZJB_GJJ_DBOP                    92515       /* 库表相关操作失败*/
#define MID_ZJB_GJJ_DBOP_NOTFOUND           92516       /* 未找到相关记录*/
#define MID_ZJB_GJJ_SRL                     92517       /* 生成平台流水号失败*/

#define MID_ZJB_GJJ_BIZELEM_NOTNULL         95052       /* 业务请求要素不能为空*/
#define MID_ZJB_GJJ_BIZELEM_UNVALID         95053       /* 业务请求要素无效*/

#define MID_ZJB_GJJ_EXEC_FLOW        1234

#define MID_ZJB_GJJ_CHKSTS                  95054       /* 状态不符,请确认*/
#define MID_ZJB_GJJ_DEALING                 95055       /* 业务正在处理中,不允许再次触发*/
#define MID_ZJB_GJJ_BATCH_BREAK             95056       /* 核心批量模式,数据提交核心成功*/
#define MID_ZJB_GJJ_ZIPFILE_LEN             95057       /* 请求ZIP文件名长度不符*/
#define MID_ZJB_GJJ_ZIPFILE_ERR             95058       /* 暂不支持该ZIP批次文件*/

#endif



