#include <stdlib.h>
#include "fractal.h"
#include <unistd.h>


struct fractal *fractal_new(const char *name, int width, int height, double a, double b)
{
    /* TODO */

    struct fractal *newFractal = (struct fractal *)malloc(sizeof(struct fractal));)
    if(newFractal == NULL){
      error("erreur lors de l'allocation de la structure");
    }
    newFractal->name = name;
    newFractal.width = width;
    newFractal.height = height;
    newFractal.a = a;
    newFractal.b = b;
	newFractal->values[width][height];
	newFractal->average;

    return newFractal;
}

void fractal_free(struct fractal *f)
{
    /* TODO */
    free(f);
}

const char *fractal_get_name(const struct fractal *f)
{
    /* TODO */
    const char *name = f->name;
    return name;
}

int fractal_get_value(const struct fractal *f, int x, int y)
{
    /* TODO */
	return f->values[x][y];
}

void fractal_set_value(struct fractal *f, int x, int y, int val)
{
    /* TODO */
    f->values[x][y] = val;
}

int fractal_get_width(const struct fractal *f)
{
    /* TODO */
    return f->width;
}

int fractal_get_height(const struct fractal *f)
{
    /* TODO */
	return f->height;
}

double fractal_get_a(const struct fractal *f)
{
    /* TODO */
    return f->a;
}

double fractal_get_b(const struct fractal *f)
{
    /* TODO */
	return f->b;
}

double fractal_get_average(const struct fractal *f)
{
	return f->average;
}

void fractal_compute_averageandtable(struct fractal *f) {
	int h = f->height;
	int w = f->width;
	int total = 0;
	int val;
	double xtrue, ytrue;
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < h; j++) {
			xtrue = -1 + i / w + 1 / w;
			ytrue= 1 - j / h - 1 / h;
			val = fractal_compute_value(f, xtrue, ytrue);
			f->values[i][j] = val;
			total = total + val;
		}
	}
	f.average = total / (w*h);
}