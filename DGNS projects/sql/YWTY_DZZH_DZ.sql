DROP TABLE YWTY_DZZH_DZ;
CREATE TABLE YWTY_DZZH_DZ
    (
    	DZPADT VARCHAR(8),
        DZPANO VARCHAR(26),
        DZSHNO VARCHAR(16),
        DZFUAC VARCHAR(32),
        DZSHAC VARCHAR(32),
        DZTRAM DECIMAL(16,2),
        DZCYNO VARCHAR(3),
        DZEYDT VARCHAR(8),
        DZQYNO VARCHAR(26),
        JZZT VARCHAR(1)
    );
CREATE UNIQUE INDEX YWTY_DZZH_DZ_INDEX1 ON YWTY_DZZH_DZ(DZPADT,DZPANO);
COMMENT ON TABLE YWTY_DZZH_DZ  IS    'YWTY_DZZH_DZ';
COMMENT ON COLUMN YWTY_DZZH_DZ.DZPADT IS    'ƽ̨����';
COMMENT ON COLUMN YWTY_DZZH_DZ.DZPANO IS    'ƽ̨��ˮ��';
COMMENT ON COLUMN YWTY_DZZH_DZ.DZSHNO IS    '�̻�����';
COMMENT ON COLUMN YWTY_DZZH_DZ.DZFUAC IS    '�跽�����˺�';
COMMENT ON COLUMN YWTY_DZZH_DZ.DZSHAC IS    '���������˺�';
COMMENT ON COLUMN YWTY_DZZH_DZ.DZTRAM IS    '���';
COMMENT ON COLUMN YWTY_DZZH_DZ.DZCYNO IS    '����';
COMMENT ON COLUMN YWTY_DZZH_DZ.DZEYDT IS    '�����˻���������';
COMMENT ON COLUMN YWTY_DZZH_DZ.DZQYNO IS    '�����˻���ˮ��';
COMMENT ON COLUMN YWTY_DZZH_DZ.JZZT   IS    '�����˻�����״̬ 0-�ɹ�  1-ʧ��';

INSERT INTO APP_JYXX   VALUES ('920010', '�ɷ�ƽ̨������˻�����ϸ', '400', '0', '1', '1', '1', '0', '00000', 'admin', null, null, null, '0');

INSERT INTO APP_MSGNOTICEPEOPLE  VALUES ('400', '400', '13580985943', '�����', '01', '1', '20171224171333', '00000 ', 'admin ', '00', '', '', '', '', '');
INSERT INTO APP_MSGNOTICEPEOPLE  VALUES ('400', '400', '13660790303', '������', '01', '1', '20171224171333', '00000 ', 'admin ', '00', '', '', '', '', '');
INSERT INTO APP_MSGNOTICEPEOPLE  VALUES ('400', '400', '13929420705', '������', '01', '1', '20171224171333', '00000 ', 'admin ', '00', '', '', '', '', '');
INSERT INTO APP_MSGNOTICEPEOPLE  VALUES ('400', '400', '17727166652', '�¼���', '01', '1', '20171224171333', '00000 ', 'admin ', '00', '', '', '', '', '');