
#include <stdio.h>

void main() {
	int a;
	int b;
	int c;
	int d = 1;

	while (d) {
		printf("MENU[ 0:‘«Z 1:ˆøZ 2:Š|Z 3:Š„Z 4:—]Z 9:I—¹ ] = ");
		scanf_s("%d", &a);

			switch (a) {

			case 0: //‘«Z
				printf("®” 1 =");
				scanf_s("%d", &b);
				printf("®” 2 =");
				scanf_s("%d", &c);
				printf("%d + %d = %d\n", b, c, b + c);
				break;

			case 1: //ˆøZ
				printf("®” 1 =");
				scanf_s("%d", &b);
				printf("®” 2 =");
				scanf_s("%d", &c);
				printf("%d - %d = %d\n", b, c, b - c);
				break;

			case 2: //Š|Z
				printf("®” 1 =");
				scanf_s("%d", &b);
				printf("®” 2 =");
				scanf_s("%d", &c);
				printf("%d ~ %d = %d\n", b, c, b * c);
				break;

			case 3: //Š„Z
				printf("®” 1 =");
				scanf_s("%d", &b);
				printf("®” 2 =");
				scanf_s("%d", &c);
				if (c == 0) {
					printf("—ë‚Å‚ÌŠ„‚èZ‚Í‚â‚Á‚¿‚á‚¾‚ßII\n");
				}
				else {
					printf("%d € %d = %d\n", b, c, b / c);
				}
				break;

			case 4: //—]Z
				printf("®” 1 =");
				scanf_s("%d", &b);
				printf("®” 2 =");
				scanf_s("%d", &c);
				printf("%d “ %d = %d\n", b, c, b % c);
				break;

			case 9:
				d = 0;
				break;

			default:
				printf("%d‚Ì‹@”\‚Í‚ ‚è‚Ü‚¹‚ñB\n", a);
				break;
			}
		}
	}