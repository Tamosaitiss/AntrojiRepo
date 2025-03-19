# ObjektinisProgramavimas
**README - Objektinis Programavimas (v0.4)**

**Apžvalga:**
Šis projektas skirtas studentų duomenų generavimui, rūšiavimui ir našumo analizei. Pagrindinė funkcionalumo dalis apima studentų sąrašų kūrimą, jų rūšiavimą pagal įvairius aspektus ir vykdymo greičio matavimus.

**Pagrindinės funkcijos:**
1. Failų kūrimas su atsitiktiniais studentų duomenimis, įskaitant vardus, pavardes ir pažymius.
2. Studentų rūšiavimas į dvi grupes pagal jų galutinį pažymį:
   - „vargšiukai“ (pažymys < 5.0)
   - „kietiakiai“ (pažymys >= 5.0)
3. Našumo analizė, įskaitant failų kūrimo, nuskaitymo, rūšiavimo bei rašymo laikus.

**Naudojimas:**
1. Generuokite studentų failus pasirinkę meniu 5 opciją.
2. Atlikite našumo analizę pasirinkę meniu 6 opciją (reikia būti sugeneravus failus iš meniu 5).
3. Naudokite meniu 1-4 opcijas rankiniam įvedimui arba failų nuskaitymui.

**Diegimas:**
1. Reikalingas C++ kompiliatorius (pvz., g++ ar gcc).
2. Atsisiųskite arba klonuokite šį projektą į savo IDE.
3. Kompiliuokite su Makefile arba CMake.

**Našumo analizė:**
- Matuojami failų kūrimo, nuskaitymo, rūšiavimo ir rašymo laikai.
- Tik failai, sukurti naudojant meniu 5 opciją, bus analizuojami.
- Skaičiuojamas bendras vykdymo laikas.

**Klaidų apdorojimas:**
- Apsaugota nuo failų perrašymo.
- Pridėtos klaidos žinutės trūkstamiems failams arba neteisingam įvedimui.

**Klaidos ir palaikymas:**
Jei kyla klausimų ar problemų, kreipkites.

Autorius:
Ignas Tamošaitis

**Licencija:**
Šis projektas yra licencijuotas pagal GPL-3.0 licenciją.
