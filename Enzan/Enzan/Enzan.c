
#include <stdio.h>

void main() {
	int a;
	int b;
	int c;
	int d = 1;

	while (d) {
		printf("MENU[ 0:���Z 1:���Z 2:�|�Z 3:���Z 4:�]�Z 9:�I�� ] = ");
		scanf_s("%d", &a);

			switch (a) {

			case 0: //���Z
				printf("���� 1 =");
				scanf_s("%d", &b);
				printf("���� 2 =");
				scanf_s("%d", &c);
				printf("%d + %d = %d\n", b, c, b + c);
				break;

			case 1: //���Z
				printf("���� 1 =");
				scanf_s("%d", &b);
				printf("���� 2 =");
				scanf_s("%d", &c);
				printf("%d - %d = %d\n", b, c, b - c);
				break;

			case 2: //�|�Z
				printf("���� 1 =");
				scanf_s("%d", &b);
				printf("���� 2 =");
				scanf_s("%d", &c);
				printf("%d �~ %d = %d\n", b, c, b * c);
				break;

			case 3: //���Z
				printf("���� 1 =");
				scanf_s("%d", &b);
				printf("���� 2 =");
				scanf_s("%d", &c);
				if (c == 0) {
					printf("��ł̊���Z�͂�����Ⴞ�߁I�I\n");
				}
				else {
					printf("%d �� %d = %d\n", b, c, b / c);
				}
				break;

			case 4: //�]�Z
				printf("���� 1 =");
				scanf_s("%d", &b);
				printf("���� 2 =");
				scanf_s("%d", &c);
				printf("%d �� %d = %d\n", b, c, b % c);
				break;

			case 9:
				d = 0;
				break;

			default:
				printf("%d�̋@�\�͂���܂���B\n", a);
				break;
			}
		}
	}