
#include <stdio.h>

void main() {
	int a;
	int b;
	int c;
	int d = 1;

	while (d) {
		printf("MENU[ 0:足算 1:引算 2:掛算 3:割算 4:余算 9:終了 ] = ");
		scanf_s("%d", &a);

			switch (a) {

			case 0: //足算
				printf("整数 1 =");
				scanf_s("%d", &b);
				printf("整数 2 =");
				scanf_s("%d", &c);
				printf("%d + %d = %d\n", b, c, b + c);
				break;

			case 1: //引算
				printf("整数 1 =");
				scanf_s("%d", &b);
				printf("整数 2 =");
				scanf_s("%d", &c);
				printf("%d - %d = %d\n", b, c, b - c);
				break;

			case 2: //掛算
				printf("整数 1 =");
				scanf_s("%d", &b);
				printf("整数 2 =");
				scanf_s("%d", &c);
				printf("%d × %d = %d\n", b, c, b * c);
				break;

			case 3: //割算
				printf("整数 1 =");
				scanf_s("%d", &b);
				printf("整数 2 =");
				scanf_s("%d", &c);
				if (c == 0) {
					printf("零での割り算はやっちゃだめ！！\n");
				}
				else {
					printf("%d ÷ %d = %d\n", b, c, b / c);
				}
				break;

			case 4: //余算
				printf("整数 1 =");
				scanf_s("%d", &b);
				printf("整数 2 =");
				scanf_s("%d", &c);
				printf("%d ％ %d = %d\n", b, c, b % c);
				break;

			case 9:
				d = 0;
				break;

			default:
				printf("%dの機能はありません。\n", a);
				break;
			}
		}
	}