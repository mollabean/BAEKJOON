#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 52

typedef struct {
	char stack[SIZE];
	int n;
}StackType;

void init_stack(StackType* s)
{
	s->n = -1;
}

int is_full(StackType* s) {
	return s->n == SIZE - 1;
}

int is_empty(StackType* s) {
	return s->n == -1;
}

void push(StackType* s, char e) {
	if (is_full(s)) return;

	s->stack[++s->n] = e;
}

char pop(StackType* s) {
	if (is_empty(s)) return '!';
	char tmp = s->stack[s->n--];
	return tmp;
}
void VPS() {
	StackType s;
	init_stack(&s);
	char text[SIZE], e;
	int i, j, n, chk = 1;
	scanf("%d", &n);
	getchar();

	for (i = 0; i < n; i++) {
		fgets(text, sizeof(text), stdin);

		for (j = 0; j < strlen(text) - 1; j++) {

			if (text[j] == '(') {
				push(&s, text[j]);
			}

			else if (text[j] == ')') {
				e = pop(&s);
				if (e != '(')
				{
					chk = 0;
					break;
				}
			}
		}
		if (!is_empty(&s))
			chk = 0;
		if (chk == 0)
			printf("NO\n");
		else
			printf("YES\n");
		chk = 1;
		s.n = -1;
	}
}

int main() {
	VPS();
	return 0;
}