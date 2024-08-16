<h1 align="center">
<img src="https://static.tumblr.com/ppdj5y9/Ae9mxmxtp/300coin.png" alt="Dedcoin" width="300"/>
<br/><br/>
Dedcoin Core [DEDC, Ð]  
</h1>

<div align="center">

[![DedcoinBadge](https://img.shields.io/badge/Ded-Coin-yellow.svg)](https://dedcoin.com)
[![MuchWow](https://img.shields.io/badge/Much-Wow-yellow.svg)](https://dedcoin.com)

</div>

Dedcoin est une crypto-monnaie communautaire qui s'inspire d'un mème de Shiba Inu. Le logiciel Dedcoin Core permet à quiconque d'exploiter un nœud dans les réseaux de la blockchain Dedcoin et utilise la méthode de hachage Scrypt pour la preuve de travail. Il est adapté de Bitcoin Core et d'autres crypto-monnaies.

Pour plus d'informations sur les frais par défaut utilisés sur le réseau Dedcoin, veuillez consulter la [recommandation sur les frais](doc/fee-recommendation.md).

**Site web:** [dedcoin.com](https://dedcoin.com)

## Utilisation 💻

Pour commencer votre voyage avec Dedcoin Core, consultez le [guide d'installation](INSTALL.md) et le [tutoriel de démarrage](doc/getting-started.md).

L'API JSON-RPC fournie par Dedcoin Core est auto-documentée et peut être parcourue avec `dedcoin-cli help`, tandis que des informations détaillées pour chaque commande peuvent être visualisées avec `dedcoin-cli help <command>`. Vous pouvez également consulter la [documentation Bitcoin Core](https://developer.bitcoin.org/reference/rpc/) - qui implémente un protocole similaire - pour obtenir une version consultable.

### Les ports

Dedcoin Core utilise par défaut le port `22556` pour la communication pair-à-pair qui est nécessaire pour synchroniser la blockchain au "mainnet" et rester informé des nouvelles transactions et blocs. De plus, un port JSONRPC peut être ouvert, dont par défaut le port `22555` est utilisé pour les nœuds du réseau principal. Il est fortement recommandé de ne pas exposer les ports RPC à l'Internet public.

| Function | mainnet | testnet | regtest |
| :------- | ------: | ------: | ------: |
| P2P      |   22556 |   44556 |   18444 |
| RPC      |   22555 |   44555 |   18332 |

## Développement continu - Moon plan 🌒

Dedcoin Core est un logiciel libre et communautaire. Le processus de développement est ouvert et publiquement visible; tout le monde peut voir, discuter et travailler sur le logiciel.

Principales ressources de développement :

* [GitHub Projects](https://github.com/dedcoin/dedcoin/projects) est utilisé pour
  suivre les travaux prévus et en cours pour les prochaines versions.

* [GitHub Discussion](https://github.com/dedcoin/dedcoin/discussions) est utilisé pour
  discuter des caractéristiques, planifiées et non planifiées, liées à la fois au développement du logiciel Dedcoin Core, les protocoles sous-jacents et l'actif DEDC.
  
* [Dedcoindev subreddit](https://www.reddit.com/r/dedcoindev/)

### Stratégie de version
Les numéros de version suivent la sémantique ```major.minor.patch```.

### Branches
Il y a 3 types de branches dans ce référentiel :

- **master:** Stable, contient la dernière version de la dernière *major.minor* version.
- **maintenance:** Stable, contient la dernière version des versions précédentes, qui sont toujours en maintenance active. Format : ```<version>-maint```
- **development:** Instable, contient du nouveau code pour les versions prévues. Format : ```<version>-dev```

*Les branches master et de maintenance sont exclusivement mutables par version. Les versions planifiées auront toujours une branche de développement et les demandes de pull doivent être soumises dans cette branche. Les branches de maintenance ne sont là **seulement pour corriger les bugs**, veuillez soumettre les nouvelles fonctionnalités dans la branche de développement avec la version la plus récente.*

## Contribution🤝

Si vous trouvez un bug ou rencontrez des problèmes avec ce logiciel, veuillez le signaler en utilisant le [système de gestion des problèmes](https://github.com/dedcoin/dedcoin/issues/new?assignees=&labels=bug&template=bug_report.md&title=%5Bbug%5D+).

Veuillez consulter [le guide de contribution](CONTRIBUTING.md) pour voir comment vous pouvez
participer au développement de Dedcoin Core. Il y a souvent
[des sujets demandant de l'aide](https://github.com/dedcoin/dedcoin/labels/help%20wanted)
où vos contributions auront un impact considérable et seront très appréciées. wow.

## Communautés 🚀🍾

Vous pouvez rejoindre les communautés sur différents réseaux sociaux.
Pour voir ce qu'il se passe, rencontrer des gens et discuter, trouver le dernier mème, apprendre sur le Dedcoin, donner ou demander de l'aide, pour partager votre projet.

Voici quelques endroits à visiter :

* [Dedcoin subreddit](https://www.reddit.com/r/dedcoin/)
* [Dedducation subreddit](https://www.reddit.com/r/dogeducation/)
* [Discord](https://discord.gg/dedcoin)
* [Dedcoin Twitter](https://twitter.com/dedcoin)

## Questions très fréquemment posées ❓

Vous avez une question concernant le Dedcoin ? Une réponse se trouve peut-être déjà dans la
[FAQ](doc/FAQ.md) ou dans la
[section Q&R](https://github.com/dedcoin/dedcoin/discussions/categories/q-a)
du forum de discussion !

## License - Much license ⚖️
Dedcoin Core est publié sous les termes de la licence MIT. Voir
[COPYING](COPYING) pour plus d'informations ou voir
[opensource.org](https://opensource.org/licenses/MIT)
