# TP : Gestion d'exceptions en C++

Ce TP regroupe quatre exercices pratiques pour apprendre à gérer les exceptions en C++.

---

## Exercice 1 – Division sécurisée

### Objectif
Intercepter une division par zéro avec `try-catch`.

### Travail demandé
- Écrire une fonction `diviser(int a, int b)` qui lance une exception si `b == 0`.
- Tester la fonction dans `main` avec différents cas de division.
- Afficher un message d’erreur propre en cas d’exception.
<img width="552" height="96" alt="image" src="https://github.com/user-attachments/assets/24680a25-c5e0-4671-a7e8-9c8add0a50b9" />

---

## Exercice 2 – Gestion d’un stock de produits

### Objectif
Créer et manipuler une exception personnalisée.

### Travail demandé
- Créer une classe `Produit` avec un stock initial.
- Ajouter une méthode `vendre(int quantite)` qui décrémente le stock.
- Lever `StockInsuffisantException` si la quantité demandée dépasse le stock.
- Tester la classe dans `main` et capturer l’exception.
<img width="585" height="98" alt="image" src="https://github.com/user-attachments/assets/286fb30e-c98c-4f5e-9755-b399d398720e" />

---

## Exercice 3 – Lecture d’un fichier avec gestion d’erreurs

### Objectif
Gérer les erreurs lors de la lecture d’un fichier texte.

### Travail demandé
- Créer une fonction `lireFichier(string nomFichier)` qui ouvre et lit un fichier ligne par ligne.
- Lever une exception si le fichier est introuvable.
- Afficher un message d’erreur propre dans `main`.
<img width="674" height="99" alt="image" src="https://github.com/user-attachments/assets/9cf1d903-78ac-4a31-8be7-e31c5ab43445" />

---

## Exercice 4 – Simulation bancaire avec plusieurs exceptions

### Objectif
Maîtriser la gestion de plusieurs types d’exceptions.

### Travail demandé
- Créer une classe `Compte` avec les méthodes `deposer(int)` et `retirer(int)`.
- Lever des exceptions dans les cas suivants :
  - Dépôt ou retrait négatif → `MontantInvalideException`
  - Solde insuffisant pour un retrait → `SoldeInsuffisantException`
- Simuler plusieurs opérations dans `main` et capturer les exceptions.
<img width="547" height="123" alt="image" src="https://github.com/user-attachments/assets/734efd7c-3659-4930-94e6-5f479bff0f39" />


---

### Compétences développées
- Utilisation de `try-catch` pour intercepter des erreurs.
- Définition et utilisation d’exceptions personnalisées.
- Vérification et validation des opérations avant exécution.
- Gestion sécurisée des entrées et opérations sensibles.
