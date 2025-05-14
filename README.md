## Projekto versija `v1.2`

Šiame projekte įgyvendintos trys studentų rūšiavimo strategijos naudojant skirtingus konteinerius:
- `std::vector`
- `std::list`
- `std::deque`

Visuose konteineriuose ištestuotos trys strategijos:
1. Kopijavimas į du atskirus konteinerius (`skirstymas_1`)
2. Perkėlimas "vargšiukų" į kitą konteinerį su `remove_if` (`skirstymas_2`)
3. Naudojamas `std::partition` (`skirstymas_3`)

---

## Veikimo laikų palyginimo lentelė (s)

| Konteineris | Strategija | 10k      | 100k     | 1M       |
|-------------|------------|----------|----------|----------|
| **vector**  | 1          | 0.000860 | 0.006967 | 0.078577 |
|             | 2          | 0.000511 | 0.004362 | 0.045950 |
|             | 3          | 0.000264 | 0.003232 | 0.037041 |
| **list**    | 1          | 0.001615 | 0.009874 | 0.090729 |
|             | 2          | 0.000547 | 0.006337 | 0.084468 |
|             | 3          | 0.000775 | 0.006130 | 0.083669 |
| **deque**   | 1          | 0.000662 | 0.006473 | 0.061961 |
|             | 2          | 0.000473 | 0.004174 | 0.049353 |
|             | 3          | 0.000377 | 0.003596 | 0.050791 |

---

## Rule of Five testas

```
s1 sukurtas:             Testas              Testavicius              9.13
s2 (kopija s1):          Testas              Testavicius              9.13
s1 po kopijavimo:        Testas              Testavicius              9.13
s3 (perkeltas s1):       Testas              Testavicius              9.13
s1 po perkelimo:         -                   -                        0.00
s4 (priskirtas s2):      Testas              Testavicius              9.13
s2 po priskyrimo:        Testas              Testavicius              9.13
s5 (perkeltas s3):       Testas              Testavicius              9.13
s3 po perkelimo:         -                   -                        0.00

Galutines objektu busenos:
s1:                      -                   -                        0.00
s2:                      Testas              Testavicius              9.13
s3:                      -                   -                        0.00
s4:                      Testas              Testavicius              9.13
s5:                      Testas              Testavicius              9.13
```

---

## Destruktoriaus testas

```
Destruktoriaus testas
Laikinas studentas sukurtas: Testas              Testavicius              7.40
Isejome is bloko, destruktorius turejo buti iskvieciamas.
```

---

## Įvesties ir išvesties operatorių testas

```
Ivesties ir isvesties operatoriu testas
Nuskaitytas studentas:
Testas              Testavicius              8.20
```

---

## Perdengti metodai

### Operatorius `>>`
- Skaito studento duomenis iš `std::istream`.
- Leidžia įvesti iš failo, `std::cin` arba `stringstream`.
- Paskutinis įrašytas pažymys laikomas egzaminu.

### Operatorius `<<`
- Išveda studento duomenis (vardas, pavardė, galutinis balas) lygiuotai į `std::ostream`.
- Naudojamas išvedimui į ekraną arba į failą.
- Jei vardas ar pavardė tušti (pvz., po `std::move`), vietoje jų išvedamas `-`.

---

## Testavime tikrinama:
- Visi `Rule of Five` metodai: konstruktoriai, kopijavimas, perkėlimas, destruktorius.
- Veikiantys operatoriai `>>` ir `<<`.
- Teisingas galutinio pažymio skaičiavimas su `galutinisVidurkis()`.

---

## Failai

- `studentas.h`, `studentai.cpp` – klasė ir visi metodai
- `vector_versija.cpp`, `list_versija.cpp`, `deque_versija.cpp` – strategijų palyginimas
- `main` funkcijos – Rule of Five, operatorių testai ir veikimo laiko matavimas
- `README.md` – ši dokumentacija
