#define CC "gcc" /* might need to be 'gcc -fPIC' on some platforms. Should also work with clang? */

typedef int (*and_eq)();

typedef struct {
	and_eq T[15];
	int U[6];
	void *V;
} W;

#include <string.h>
#include <stdio.h>
#define A(x) ((W *)x)->
#define Z "%3dh%3dMP"
#define B(x) V.U[x]
#define J(x) V.T[x]
#define restrict sprintf

W V;

#ifndef NO

#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
#include <dlfcn.h>

#define struct(z, x, y) FILE*q = fopen("t.c", "w"); if (q == NULL) exit(2); not_eq("#define NO\n%cinclude \""__FILE__"\"\nextern void bitand() __attribute__((constructor)); \n", 35); z fclose(q); if (system(CC " -shared t.c -o " #x " " #y)) exit(3); { char *p = #x; L(127, &p - 1); }
#define not_eq(x, b) fprintf(q, x, b);
#define E(x, v, w) fprintf(q, #x, v, w);
#define or_eq(x, v) not_eq(#x, v)
#define R(x, z) E(restrict(d, "%%c", B(0) == x ? 126 : 32); J(3)(%d, %d, d); , o + 12, a += z)
#define H "THE LEMONLORD"
#define Q (uintptr_t)
#define O(x) = (J(x)(V.V) - 32 / x) / 2,

char M[99] = " { { DEFEAT "H" } } ";

void xor_eq(and_eq L) {
	int a O(1) b O(2) o = b;
	if (J(14)) {
		J(14)();
		return;
	}
	struct(
	or_eq(int k() {V = *(W *)%d; J(3), Q &V)
	char *x = "\0; ; ; ; ; ; ; ; ;; ; ; ; ; ; ; ; ; \0{                                } \0{                                } \0{                                } \0{                                } \0{  ==== ====          ==== ====  } \0{                                } \0{      O                  O      } \0{     /|-}              {-|\\\\     } \0{      |                  |      } \0{     / \\\\                / \\\\     } \0{                                } \0{   ATTACK   REGENERATE   HEAL   } \0{                                } \0; ; ; ; ; ; ; ; ;; ; ; ; ; ; ; ; ; \0";
	while (*++x) {
		E((%d, %d\0), b++, a)
		not_eq(", \"%s\"); J(3)", x)
		while (*++x);
	}
	E((%d, %d - strlen\0), o+2, a + 17)
	E(((char*) %d) / 2 %c, Q M, 44)
	E((char*%c %d), 41, Q M)
	E(; char d[99]; restrict(d, Z "          " Z, B(1), B(3), B(2), B(4)); J(3)(%d, %d, d); , o + 4, a + 3)
	R(0, 3)
	R(0, 7)
	R(1, 2)
	R(1, 11)
	R(2, 2)
	R(2, 5)
	or_eq(J(4)(); } void bitand() { A(%d)T[14] = k; }, Q &V)
	, volatile, )
	xor_eq(L);
}

int S(int c, int d) {
	return c-- > 0 ? 1 + S(c, d) + rand() % d : 0;
}

#define Y(x) restrict(M,#x,D)

void N(and_eq d) {
	int c = 0;
	xor_eq(d);
	if (B(5) = (B(1) * B(2) < 1)) {
		for (; !sleep(++c) && c < 3; xor_eq(d)) {
			char *D = ((B(1) < 1) + c) & 1 ? H " has" : "You have";
			c & 1 ? Y(%s died!) : Y(%s won!);
		}
	}
}

#define X(a, n, b, g, f) switch (B(n) a) { case 0: D = S(2, 8 - 2*n); B(2-n) -= D; Y(b hit for %d HP!); break; case 1: D = S(1, 10-6*n); g; B(3+n) += D; Y(b f %d MP!); break; case 2: D = 33; if (B(3+n) > 1) { B(3+n) -= S(1, 2); B(1+n) += D = S(3, 6 + 2*n); Y(b heal %d HP!); } else { Y(b lack enough MP%c); u = 1; } break; } N(x); if (B(5) | u | n) { return 2; }

int x(and_eq x) {
	int u = 0, D;
	X(, 0, You, , gain)
	sleep(1);
	X(< 10 ? 0 : B(2) < 20 ? B(4) < 2 ? B(3) >= 1 : 2 : B(4) < 5 && S(1, 3) != 1 && !(B(3) < 1) ? 1 : S(1, 8) > 6 && (B(3) || B(4) > 1) ? 1 + (B(4) > 9 || B(3) < 1) : 0, 1, They, if (B(3) < D) { D = B(3); } B(3) -= D, steal)
}

int v(int p[], and_eq P[], and_eq L) {
	int r = 9;
	struct(
	or_eq(int f(int x) { switch(%c) { , 120)
	while (*p) {
		E(case %d: return ((and_eq) %d)(); , r += *(p++), Q *(P++));
	}
	or_eq(} return 1; } void bitand() { A(%d) T[13] = f; } , Q &V)
	, thread_local, )
	return p[-2];
}

int u(and_eq x) {
	return B(5) = 1;
}

void bitor(and_eq p) {
	xor_eq(p);
	int g = J(5)();
	if (g & (~((1+~1U) >> 1))) {
		B(0) = (B(0) + g + 3) % 3;
	} else {
		(J(13) || v((int[]) { 1, 3, 14, 5, 49, 32, 0} , (and_eq[]) { x, x, u, x, u, u} , p)) && J(13)(g);
	}
}

void bitand(and_eq L) {
	struct(
	or_eq(#include <ncurses/ncurses.h>\nvoid F() { endwin(); puts("Play again?"); } int g() { int o = getch(); return o == KEY_LEFT ? -1 : o == KEY_RIGHT ? -2 : o; } void bitand() { and_eq *G = A(%d) T - 1; , Q &V);
	char *i = "\0keypad\0getmaxx\0getmaxy\0mvaddstr\0refresh\0g\0cbreak\0noecho\0nonl\0";
	while (*++i) {
		or_eq(*++G = (and_eq) %s; , i);
		while (*++i);
	}
	or_eq(initscr(); A(%d)V = stdscr; , Q &V)
	or_eq(atexit(%c); } , 70);
	, static_assert, -lncurses)
	int j = 6;
	while (j < 9) {
		J(j++)();
	}
	J(0)(V.V, 1);
	for (; !B(5); bitor(L));
}

int main(int c, char *v[]) {
/*int B(0) = 0, B(1) = 30, B(2) = 50, B(3) = 5, B(4) = 10, B(5) = 0; */
	/* do we need srand(time(NULL))? */
	if (v[1]) { /* sanity test */
		dlopen(v[1], RTLD_LAZY);
	} else {
		memcpy(V.U, (int[]) { 0, 5, 5, 5, 10, 0} , 6 * sizeof(int));
		bitand(&main);
	}
	return 0;
}

#endif