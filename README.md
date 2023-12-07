# ft_printf()

## 🚀 Bienvenue dans ft_printf !

Ce projet vise à recoder la fonction `printf()` en langage C, offrant une opportunité exceptionnelle pour renforcer vos compétences en programmation, notamment dans la manipulation de nombres variables d'arguments.

## Fonctionnalités Implémentées

### Partie Obligatoire

- **Nom du Programme:** `libftprintf.a`
- **Fichiers Soumis:** `Makefile`, `*.h`, `*/*.h`, `*.c`, `*/*.c`
- **Fonctions Externes Autorisées:** `malloc`, `free`, `write`, `va_start`, `va_arg`, `va_copy`, `va_end`
- **Libft Autorisée:** Oui
- **Description:** La bibliothèque contient `ft_printf()`, une fonction émulant `printf()` de la libc.
- **Prototype:** `int ft_printf(const char *, ...);`
- **Exigences:**
  - Ne pas implémenter la gestion du tampon de `printf()` d'origine.
  - Gérer les conversions : `c`, `s`, `p`, `d`, `i`, `u`, `x`, `X`, `%`.
  - Comparer la fonction avec `printf()` d'origine.
  - Utiliser `ar` pour créer la bibliothèque.

### Partie Bonus

- Gérer les drapeaux `-0.` et la largeur minimale du champ sous toutes les conversions.
- Gérer les drapeaux `# +` (dont l'un est un espace).

## Tester le Programme

Pour vérifier la fonctionnalité de `ft_printf`, exécutez le script `testeur.sh` à la racine du projet :

```bash
./testeur.sh
```
- Si la commande `diff` ne génère aucune sortie, cela indique que la fonction `ft_printf` fonctionne correctement. Les valeurs de retour de `ft_printf` sont enregistrées dans le fichier `testoutput`, tandis que celles de `printf` sont sauvegardées dans le fichier `reeloutput`. En cas de divergences entre les deux, assurez-vous d'inspecter attentivement les résultats pour identifier la cause.



Ce projet a été développé en respectant la norme.


