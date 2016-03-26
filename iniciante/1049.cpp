#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>

#define PRECISION 2

using namespace std;

int main()
{
    cout.sync_with_stdio(false);
    cin.sync_with_stdio(false);
    cout << fixed << setprecision(PRECISION);

    char a[30], b[30], c[30]; cin >> a >> b >> c;

    char animal[30];

    if (!strcmp(a,"vertebrado")) {
        if (!strcmp(b,"ave")) {
            if (!strcmp(c,"carnivoro")) {
                strcpy(animal,"aguia");
            }
            else if (!strcmp(c,"onivoro")) {
                strcpy(animal,"pomba");
            }
        }
        else if (!strcmp(b,"mamifero")) {
            if (!strcmp(c,"onivoro")) {
                strcpy(animal,"homem");
            }
            else if (!strcmp(c,"herbivoro")) {
                strcpy(animal,"vaca");
            }
        }
    }
    else if (!strcmp(a,"invertebrado")) {
        if (!strcmp(b,"inseto")) {
            if (!strcmp(c,"hematofago")) {
                strcpy(animal,"pulga");
            }
            else if (!strcmp(c,"herbivoro")) {
                strcpy(animal,"lagarta");
            }
        }
        else if (!strcmp(b,"anelideo")) {
            if (!strcmp(c,"hematofago")) {
                strcpy(animal,"sanguessuga");
            }
            else if (!strcmp(c,"onivoro")) {
                strcpy(animal,"minhoca");
            }
        }

    }
    else {
        printf("Sth went wrong!\n");
    }


    printf("%s\n", animal);

    return 0;
}
