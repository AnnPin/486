/*
 *    file.h  ( List 9-14 )
 *    Copyright (C) Teruhisa Kamachi and ASCII Corp. 1994
 *    All rights reserved.
 *
 *    ���̃t�@�C���́w�͂��߂ēǂ�486�x�i�A�X�L�[�o�ŋǁj�Ɍf�ڂ���
 *    �v���O�����̈ꕔ�ł��B�v���O�������e�◘�p���@�ɂ��Ă͖{����
 *    �L�q���Q�Ƃ��Ă��������B
 */

/*
 *    List 9-14  �w�b�_�t�@�C��
 *               [file.h  1/1] (page 328)
 */

int ReadFile(int fd, unsigned long buf, int count);
int WriteFile(int fd, unsigned long buf, int count);
int SeekFile(int fd, long offset, int fromwhere);
