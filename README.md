Ohjelmointi 1 kurssille C:llä toteuttamani Hirsipuu peli syksyltä 2020.
Tarkempi tehtäväohje alla. 

---------------

Tee ohjelma, joka pelaa käyttäjän kanssa Hangman-peliä (hirsipuu).
Ohjelma lukee arvuutettavat sanat tekstitiedostosta (sanat.txt)
ja valitsee satunnaisesti yhden näistä sanoista arvattavaksi.

Käyttäjän tulee arvata sanaan kuuluvat kirjaimet ja jokaisesta väärästä arvauksesta
kone rankaisee rakentamalla "hirsipuuta" yhden osan lisää.
Käyttäjä antaa yhden kirjaimen kerralla ja kone tarkistaa onko kyseinen kirjain arvattavassa sanassa.

Peli päättyy kun pelaaja arvaa sanan ennen kuin hirsipuu on valmis tai kun pelaaja "hirtetään".

Oikean arvauksen jälkeen kaikki arvatut kirjaimet näytetään ja vielä arvaamattomien tilalla on alaviiva (_)
Esimerkki:

Arvaa kirjain: > s
_____s_________________

Arvaa kirjain: > e
_____s___e________e___e

Arvaa kirjain: > r
_____s___er_r_____e___e

Vääristä arvauksista näytetään kuvallinen esitys "hirsipuusta" seuraavasti:

Väärien vastausten määrä                         Kuvallinen esitys:

1					-------


2					   |
					   |
					   |
					   |
					   |
					-------

3 					   ____
  					   |
   					   |
   					   |
   					   |
   					   |
					-------

4  					   ______
   					   |    |
   					   |
   					   |
   					   |
   					   |
					-------

5
 					  ______
					  |    |
   					  |    O
   					  |
					  |
   					  |
				       -------

6
					  ______
   					  |    |
   					  |    O
   					  |    |
   					  |
   					  |
				       -------

7
					  ______
   					  |    |
   					  |    O
   					  |   /|\
   					  |
   					  |
				       -------

8
 					  ______
   					  |    |
   					  |    O
   					  |   /|\
   					  |   / \
   					  |
				       -------

Lopuksi tulostetaan joko onnitteluviesti

Hienoa, arvasit oikein!
tai oikea vastaus jos sitä ei arvattu

Arvattava sana oli: arvattavasana


Tiedosto sanat.txt on muotoa:

lumipalloheisi
matkapuhelinoperaattori
jauhelihaperunasoselaatikko
tablettiannostelija
ihonkuorintaseerumi
kaitafilmiprojektori */


