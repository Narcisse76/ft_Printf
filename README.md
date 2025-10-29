# 🖨️ ft_printf - Recréation de printf en C

<img width="200" height="169" alt="image" src="https://github.com/user-attachments/assets/36666552-5a8e-4e2e-9689-89531f30ce88" />

Le projet ft_printf consiste à reproduire le comportement de la fonction standard printf du langage C.
Il s’agit de concevoir une fonction capable d’afficher du texte formaté, tout en gérant différents types d’arguments, des spécificateurs et la mise en forme.
Ce projet t’apprend à structurer un code modulaire, efficace et conforme à la norme 42.

---

## ✅ Fonction principale

ft_printf(const char *format, ...)
→ Affiche du texte selon une chaîne de format et renvoie le nombre de caractères imprimés.

### Spécificateurs pris en charge :

```%c → caractère```

```%s → chaîne de caractères```

```%p → pointeur (en hexadécimal)```

```%d / %i → entier signé```

```%u → entier non signé```

```%x / %X → hexadécimal (min/maj)```

```%% → pourcentage littéral```

---

## 🔧 Compilation Make

make → compile la bibliothèque libftprintf.a

make clean → supprime les fichiers .o

make fclean → supprime .o et libftprintf.a

make re → recompile tout le projet

---

## 🏁 Objectif

Reproduire fidèlement printf pour démontrer la maîtrise des arguments variadiques, des conversions de types et de la gestion fine des sorties formatées.
L’objectif est d’avoir une implémentation robuste, testée et conforme à la norme 42, pouvant remplacer temporairement la printf standard lors des tests et servir de base pédagogique pour les projets suivants (gestion d’erreurs, logs, parsing, etc.).

---

## 🧠 Ce qu’on y apprend

Comprendre comment fonctionne printf de l’intérieur, manipuler des arguments variadiques, et concevoir une fonction universelle capable de traiter différents types de données.
Ce projet développe la rigueur, la logique algorithmique, et la gestion des conversions et formats — des compétences essentielles pour tous les projets C à venir.
