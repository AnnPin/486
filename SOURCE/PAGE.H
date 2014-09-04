/*
 *    page.h  ( List 9-2, 9-4, 9-9 )
 *    Copyright (C) Teruhisa Kamachi and ASCII Corp. 1994
 *    All rights reserved.
 *
 *    ���̃t�@�C���́w�͂��߂ēǂ�486�x�i�A�X�L�[�o�ŋǁj�Ɍf�ڂ���
 *    �v���O�����̈ꕔ�ł��B�v���O�������e�◘�p���@�ɂ��Ă͖{����
 *    �L�q���Q�Ƃ��Ă��������B
 */

/*
 *    List 9-2  PTE�̊e�r�b�g�̒�`
 *              [page.h  1/3] (page 314)
 */

#define PTE_PRESENT 0x01
#define PTE_RW      0x02
#define PTE_USER    0x04
#define PTE_ACCESS  0x20
#define PTE_DIRTY   0x40

/*
 *    List 9-4  �g�p����y�[�W�e�[�u���̒�`
 *              [page.h  2/3] (page 316)
 */

#define PAGENUM 1024
#define PAGESIZE 4096
#define MAXDIRNUM 2

/*
 *    List 9-9  �֐��̃v���g�^�C�v�錾
 *              [page.h  3/3] (page 320)
 */

void lcr3(unsigned long PageDirAddr);
unsigned long cr2(void);
void FlushTLB(void);
void PagingStart(void);
void PagingStop(void);

unsigned long *GetPTEAddr(unsigned long viraddr);
long MakePTE(unsigned long physaddr);
void SetPTE(unsigned long viraddr, unsigned long physaddr);
int IsPTEAccessed(unsigned long viraddr);
void ClearPTEAccessed(unsigned long viraddr);
int IsPTEDirty(unsigned long viraddr);
void SetPTEAbsent(unsigned long viraddr);
int IsPTEPresent(unsigned long viraddr);
void SetUpPTE(void);
void PagingEnable(void);
void RealToProto_P(int sw);
void ProtoToReal_P(void);

extern int Paging;
