/*
 *    pmem.h  ( List 5-21 )
 *    Copyright (C) Teruhisa Kamachi and ASCII Corp. 1994
 *    All rights reserved.
 *
 *    ���̃t�@�C���́w�͂��߂ēǂ�486�x�i�A�X�L�[�o�ŋǁj�Ɍf�ڂ���
 *    �v���O�����̈ꕔ�ł��B�v���O�������e�◘�p���@�ɂ��Ă͖{����
 *    �L�q���Q�Ƃ��Ă��������B
 */

/*
 *    List 5-21  �w�b�_�t�@�C��
 *               [pmem.h  1/1] (page 169)
 */

void InitPmemBuf(void);
void SetPmemBufSize(unsigned long m);
unsigned long GetPmemBufSize();
void PutPmemBuf(char *buf, unsigned long m);
unsigned long GetPmemBuf(char *buf,
                            unsigned long s, unsigned long m);
