# RoAE23
Robotter og Automatisering, Valgfag, Efterår 2023

# 1. Tirsdag den 22. august 2023

# 2. Fredag den 25. august 2023

# 3. Tirsdag den 29. august 2023

# 4. Torsdag den 31. august 2023

# 5. Tirsdag den 5. september 2023

# 6. Torsdag den 7.  september 2023

# 7. Tirsdag den 12. september 2023

# 8. Fredag den 15. september 2023

# 9. Tirsdag den 19. september 2023

# 10. Onsdag den 20. september 2023

# 11. Torsdag den 21. september 2023

# 12. Fredag den 22. september 2023

# 13. Tirsdag den 26. september 2023

# 14. Fredag den 29. september 2023

# 15. Tirsdag den 3. oktober 2023

# 16. Fredag den 6. oktober 2023

# 17. Tirsdag den 10. oktober 2023

# 18. Onsdag den 11. oktober 2023

# 19. Torsdag den 12. oktober 2023

# 20. Fredag den 13. oktober 2023
Der blev lavet endnu et testprint af låget. Udfordringen ligger i hvordan det printes med mindst mulig support og alle forsøg på et godt print har slået fejl indtil videre. Nået hertil er det åbenlyst at designet simpelthen skulle have været lavet med det faktum i mente, at vi ville undgå nødvendigheden af support fuldstændig, men den erfaring er selvfølgelig kun opnået ved at løbe hoved mod muren et antal gange, så det er nemt at være bagklog nu.
Der blev lavet en mindre ændring ift til dioderne, da de hidtil alle har kørt på samme udgang hvilket resulterede i at lysintensiteten dalede diode for diode og man kunne tydeligt se hvor kredsløbet begyndte og endte. Løsningen blev at fordele det over to udgange, så de alle nu lyser lige kraftigt.

Derudover gik vi i gang med at refactorere hele koden, så man fremover kan bruge contructoren til instatiere en kiste på de ønskede mål fremfor at det hele er manuelt indtastede tal, der også skal manuelt genberegnes i hver metode for at komponenterne flyttes tilsvarende korrekt. Vi nåede at tage hul på TopChest klassen, og jeg sørger for at refactorere resten i ferien.

![ElektroSlut.jpg](Images/ElektroSlut.jpg)

# 21. Onsdag den 18. oktober 2023
Jeg har arbejdet på at refactorere resten af koden siden i fredags, og nu er den nye version merged ind i main.
Man kan nu bruge contructoren til BottomChest klassen og TopChest klassen og instantiere en kistebund og en kistetop på et hvilket som helst givet mål. Det oprindelige firkantede låg har fået lov til at blive i koden, og man kan så vælge om man ønsker et rundt eller et firkantet låg ved instantieringen af TopChest . Alle komponenterne rykker sig relativt ift de ydre mål samt at der kastes et par exceptions, hvis der indtastes mål, der vil resultere i at komponenterne begynder at overlappe eller hvis top og bund ikke matcher i størrelse. Det tager nu længere tid end nogensinde at rendere i OpenSCAD, men det er klart også den mest præcis og generaliserede version af koden vi har haft indtil videre. Det har dertil været ret tilfredsstillende at forsøge at gennemtænke hver linje af koden ift hvorfor der stod lige præcis det tal der gjorde. Nu kører langt det meste på variabler der låser sig til en sammenhæng med de overordnede mål eller ift nogle andre komponenter der indgår, hvilket gør at sandsynligheden for fejl i beregningerne bør være minimeret.

Der er stadig mange ting man kunne overveje at forfine både i kode, design og prints, men her slutter projektet for denne gang. Jeg fik en sjov tanke om at det kunne være et bestillingsprodukt, hvor en kunde kunne plotte sine ønskede mål ind på en hjemmeside samt oploade et billede, der ville blive til lithophane printet og så til sidst vælge en sang, og så kunne man få tilsendt sin lille æske, som var helt personlig. Nu blev vores version så til en skattekiste, men det kunne jo i virkeligheden have haft et hvilket som helst tema.

![VariousChests1.png](Images/VariousChests1.png)
![VariousChests2.png](Images/VariousChests2.png)