typedef int (*and_eq)();

typedef struct {
	and_eq T[15];
	int U[6];
	void *V;
} W;

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
#include <dlfcn.h>

#define struct(z, x, y) FILE*q = fopen("t.c", "w"); if (q == NULL) exit(2); E(%cinclude "prog.c"%c extern void bitand() __attribute__((constructor)); \n, 35, 10); z fclose(q); if (system(CC " -DCC= -shared t.c -o " #x " " #y)) exit(3); { char *p = "./" #x; main(127, &p - 1); }
#define E(x, v, w) fprintf(q, #x, v, w);
#define H "THE LEMONLORD"
#define Q (uintptr_t)
#define O(x) = (J(x)(V.V) - 32 / x) / 2,
#define R(x, y) E(J(3)(%d, %d, B(0) == x ? "{" #y "} " : " " #y); , o + 12, a += (3 + 5*x) | 1 )
#define A(x) ((W *)x)->
#define Z "%4d%5d"
#define B(x) V.U[x]
#define J(x) V.T[x]
#define restrict sprintf

char M[99] = " { { DEFEAT "H" } } ";

W V;

void xor_eq() {
	int a O(1) b O(2) o = b;
	if (J(14)) {
		J(14)();
		return;
	}
	struct(
	E(int k() { V = *(W *)%td; char *y = (char*) %td; , Q &V, Q M)
	E(int x %c %d; , 61, a)
	char *x = "\0; ; ; ; ; ; ; ; ;; ; ; ; ; ; ; ; ; \0{                                } \0{                                } \0{                                } \0{                                } \0{  {HP} {MP}          {HP} {MP}  } \0{                                } \0{      O                  O      } \0{     /|-}              {-|\\\\     } \0{      |                  |      } \0{     / \\\\                / \\\\     } \0{                                } \0{                                } \0{                                } \0; ; ; ; ; ; ; ; ;; ; ; ; ; ; ; ; ; \0";
	while (*++x) for (E(J(3)(%d, x, "%s"); , b++, x)*++x; );
	R(0, ATTACK)
	R(1, REGENERATE)
	R(2, HEAL)
	E(J(3)(%d, %d - strlen(y) / 2, y); char d[99]; , o+2, a - 8)
	E(restrict(d, Z "          " Z, B(1), B(3), B(2), B(4)); J(3)(%d, %d, d); , o + 4, a - 23)
	E(J(4)(); } void bitand() { A(%td)T[%d] = k; } , Q &V, 14)
	, volatile, )
	xor_eq();
}

#define S(x) 1 + rand() % (x)
#define Y(x) restrict(M,#x,D)

void N() {
	int c = 0;
	xor_eq();
	if (B(5) = (B(1) * B(2) < 1)) {
		for (; !sleep(++c) && c < 3; xor_eq()) {
			char *D = ((B(1) < 1) + c) & 1 ? H " has" : "You have";
			c & 1 ? Y(%s died!) : Y(%s won!);
		}
	}
}

#define X(a, n, b, g, f) switch (B(n) a) { case 0: D = S(16 - 4*n); B(2-n) -= D; Y(b hit for %d!); break; case 1: D = S(10-6*n); g; B(3+n) += D; Y(b f %d MP!); break; case 2: D = 33; if (B(3+n) > 1) { B(3+n) -= S(2); B(1+n) += D = S(18 + 6*n); Y(b heal %d!); } else { Y(b need more MP%c); u = 1; } break; } N(); if (B(5) | u | n) { return 2; }

int x() {
	int u = 0, D;
	X(, 0, You, , gain)
	sleep(1);
	X(< 9 ? 0 : B(2) < 20 ? B(4) < 2 ? B(3) >= 1 : 2 : B(4) < 5 && S(3) != 1 && !(B(3) < 1) ? 1 : S(8) > 6 && (B(3) || B(4) > 1) ? 1 + (B(4) > 9 || B(3) < 1) : 0, 1, They, if (B(3) < D) { D = B(3); } B(3) -= D, steal)
}

int v(int *p, and_eq *P) {
	int r = 9;
	struct(
	E(int %c(int x) { switch(%c) { , 102, 120)
	while (*p) {
		E(case %d: return ((and_eq) %td)(); , r += *(p++), Q *(P++));
	}
	E(} return %d; } void bitand() { A(%td) T[13] = f; } , 1, Q &V)
	, thread_local, )
	return p[-2];
}

int u() {
	return B(5) = 1;
}

void bitor() {
	xor_eq();
	int g = J(5)();
	if (g & (~((1+~1U) >> 1))) {
		B(0) = (B(0) + g + 3) % 3;
	} else {
		J(13) || v((int[]) { 1, 3, 14, 5, 49, 32, 0} , (and_eq[]) { x, x, u, x, u, u} );
		J(13)(g);
	}
}

void and() {
	struct(
	E(#include <ncurses/ncurses.h>\n void F() { endwin(); puts("Play again?"); } int g() { int o = getch(); return o == KEY_LEFT ? %d : o == KEY_RIGHT ? -2 : o; } void bitand() {  and_eq *G = A(%td) T - 1; , -1, Q &V);
	char *i = "\0keypad\0getmaxx\0getmaxy\0mvaddstr\0refresh\0g\0cbreak\0noecho\0nonl\0";
	while (*++i) {
		E(*++G %c (and_eq) %s; , 61, i);
		while (*++i);
	}
	E(initscr(); A(%td)V = stdscr; atexit(%c); } , Q &V, 70)
	, static_assert, -lncurses)
	int j = 6;
	while (j < 9) {
		J(j++)();
	}
	J(0)(V.V, 1);
	for (; !B(5); bitor());
}

int main(int c, char **v) {
/*int B(0) = 0, B(1) = 30, B(2) = 50, B(3) = 5, B(4) = 10, B(5) = 0; */
	/* do we need srand(time(NULL))? */
	if (v[1]) { /* sanity test */
		dlopen(v[1], RTLD_LAZY);
	} else {
		memcpy(V.U, (int[]) { 0, 5, 5, 5, 10, 0} , 6 * sizeof(int));
		and();
	}
	return 0;
}