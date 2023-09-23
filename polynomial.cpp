#include <iostream>
#include <cstdlib>

struct Term
{
    int coeff;
    int exp;
};

struct Poly
{
    int n;
    Term* terms;
};

void create(Poly* p)
{
    int i;
    std::cout << "Number of terms?";
    std::cin >> p->n;
    p->terms = new Term[p->n];
    std::cout << "Enter terms\n";
    for (i = 0; i < p->n; i++)
        std::cin >> p->terms[i].coeff >> p->terms[i].exp;
}

void display(Poly p)
{
    int i;
    for (i = 0; i < p.n; i++)
        std::cout << p.terms[i].coeff << "x^" << p.terms[i].exp << "+";
    std::cout << "\n";
}

Poly* add(Poly* p1, Poly* p2)
{
    int i, j, k;
    Poly* sum;
    sum = new Poly;
    sum->terms = new Term[(p1->n + p2->n)];
    i = j = k = 0;
    while (i < p1->n && j < p2->n)
    {
        if (p1->terms[i].exp > p2->terms[j].exp)
            sum->terms[k++] = p1->terms[i++];
        else if (p1->terms[i].exp < p2->terms[j].exp)
            sum->terms[k++] = p2->terms[j++];
        else
        {
            sum->terms[k].exp = p1->terms[i].exp;
            sum->terms[k++].coeff = p1->terms[i++].coeff + p2->terms[j++].coeff;
        }
    }
    for (; i < p1->n; i++)
        sum->terms[k++] = p1->terms[i];
    for (; j < p2->n; j++)
        sum->terms[k++] = p2->terms[j];
    sum->n = k;
    return sum;
}

int main()
{
    Poly p1, p2, * p3;
    create(&p1);
    create(&p2);
    p3 = add(&p1, &p2);
    std::cout << "\n";
    display(p1);
    std::cout << "\n";
    display(p2);
    std::cout << "\n";
    display(*p3);
    return 0;
}
