<h1>Arduino-Project</h1>
<ul>
<li><a href="#1">1. Einleitung</a></li>
<li><a href="#2">2. Die ersten Versuche mit LED's</a></li>
<li><a href="#3">3. Der Transistor</a></li>
<li><a href="#4">4. Die Windmaschinenampel</a></li>
<li><a href="#5">5. Der Motor</a></li>
<li><a href="#6">6. Der Ultraschallsensor</a></li>
<li><a href="#7">7. Fazit</a></li>
<li><a href="#8">8. Zeitliche Übersicht</a></li>
</ul>


<h3>
<a id="1">1. Einleitung</a>
</h3>



<p>Zu Beginn der Unterrichtseinheit haben wir uns erst damit beschäftig, welches Projekt für uns geeignet ist. Dabei haben wir zum einen darauf geachtet, welches Projekt von dem Schwierigkeitsgrad zu uns passt. Zum anderen wollten wir ein Projekt beginnen, welches nicht nur fiktiv auf einem Bildschirm sichtbar ist, sondern real ist. Nach einer kurzen Rücksprache mit unserem Informatiklehrer sind wir schlussendlich auf den Arduino gekommen, da dieser genau zu unseren Kriterien passt. Unser Ziel ist es, am Ende unserer Projektreihe einen alleine Fahrenden Roboter zu programmieren und zu bauen. Dieser soll in einem abgesteckten Parkour ohne Einwirkungen von außen seinen Weg finden. Da unsere Informatikvorkenntnisse sehr begrenzt waren, haben wir uns am Anfang mit einfachen Schaltungen und Skripts auseinander gesetzt. Hierbei haben wir die verschiedenen Bauteile und Möglichkeiten des Arduino, welche für den Bau unseres Roboters notwendig sind, besser kennengelernt und deren Benutzung erlernt. Am Ende dieser Reihe ist es unser Ziel mit unseren neu erworbenen Fähigkeiten einen wie oben beschriebenen Roboter herzustellen. Folgend werden wir unsere Schritte hierzu genauer erläutern.</p>

<h3>
<a id="2">2. Die ersten Versuche mit LED's</a>
</h3>

<p>
<img src="Bilder/IMG_1838.JPG" alt="Bild1" style="width:100px;border:0;">
<img src="Bilder script/Taster.PNG" alt="Bild1" style="width:100px;border:0;">
</p>
<p><a href="https://github.com/Stormarnschule12/Arduino-car/blob/master/sketch_Taster.ino">Sketch Taster</a></p>
<p>Als erstes kleines Projekt haben wir eine einfache Ampel mit einem Knopf als Auslöser programmiert und aufgebaut. Zu Beginn brennt die grüne LED und die rote ist nicht in betrieb. Bei Benutzung der Taste geht die grüne LED aus und die rote LED beginnt zu leuchten. Nach einer in dem Skript fest definierten Zeit, wird dieser Vorgang revidiert und die LED's sind in ihrem Ausgangszustand. Dieser erste Aufbau hat es uns ermöglicht die Benutzung der Arduino Software zu erlernen. Zudem haben wir die Grundlegenden Formeln für die Programmierung kennengelernt.</p>

<h3>
<a id="3">3. Der Transistor</a>
</h3>

<p>
<img src="Bilder/IMG_1843.JPG" alt="Bild2" style="width:400px;border:0;">
<img src="Bilder script/Transistor.PNG" alt="Bild4" style="width:372px;border:0;">
</p>
<p><a href="https://github.com/Stormarnschule12/Arduino-car/blob/master/sketch_Transistor.ino">Sketch Transistor</a></p>
<p>Der nächste Schritt beinhaltete, dass wir beide uns mit einem Motor auseinander gesetzt haben. Die Schaltung, sowie der Skript sind nicht besonders komplex, doch es ging uns in erster Linie darum, die Funktionalität eines Motors sowie die Energieversorgung durch eine Externe Stromquelle zu erlernen. Damit die Batterie, über den Arduino gesteuert, den Motor mit Energie versorgen kann, haben wir einen Transistor verbaut. Dieser ermöglicht bei einer anliegenden Potenzialdifferenz, welche vom Arduino ausgeht, dass der Masseanschluss von der Batterie zum Motor hergestellt wird. Bei Fehlender Spannung an dem Transistor wird die Verbindung unterbrochen und der Batterie-Motor-Stromkreislauf ist nicht mehr geschlossen. Das Skript haben wir so geschrieben, dass der Motor sich beginnt zu Drehen und nach einer bestimmten Zeit wieder stoppt. Zudem haben wir festgestellt, wenn man den Zeitlichen Abstand zwischen Drehen und Stopp sehr kurz hält, so scheint es als sei der Motor gedrosselt. Folglich erscheint es dem Menschen, als würde sich der Motor langsam drehen und nicht an und ausgehen.</p>

<h3>
<a id="4">4. Die Windmaschienenampel</a>
</h3>

<p>
<img src="Bilder/IMG_1849.JPG" alt="Bild2" style="width:400px;border:0;">
<img src="Bilder script/Ampel_1.PNG" alt="Bild4" style="width:372px;border:0;">
</p>
<p><a href="https://github.com/Stormarnschule12/Arduino-car/blob/master/sketch_Amepl.ino">Sketch Ampel</a></p>

<p>Als 3. Miniprojekt wollten wir nun unsere Erkenntnisse und Erfolge aus den beiden vorangegangenen Aufbauten zu einem größeren und komplexeren zusammenfügen. Wir steckten also wie im vorangehenden Aufbau den Drehmotor mit Transistor zusammen, zusätzlich bauten wir auch noch vier LEDs und den Druckknopf in dem Aufbau zusammen. Unser Ziel war es, dass man von den LEDs den Betrieb des Motors ablesen kann. So leuchtet die grüne LED, wenn der Motor läuft. Bei drücken des Knopfes hört die LED auf zu leuchten, eine andere beginnt zu blinken, der Motor geht aus und die rote LED beginnt zu leuchten. Nach einer bestimmten Zeit geht die rote LED wieder aus, Grün leuchtet und der Motor dreht sich wieder. In diesem Zwischenschritt, konnten wir verschiedene Mechanismen mit einander zu verbinden.</p>

<h3>
<a id="5">5. Der Motor</a>
</h3>

<p>
<img src="Bilder/IMG_1864.JPG" alt="Bild2" style="width:400px;border:0;">
<img src="Bilder script/Stepmotor.PNG" alt="Bild4" style="width:372px;border:0;">
</p>
<p><a href="https://github.com/Stormarnschule12/Arduino-car/blob/master/sketch_Stepmotor.ino">Sketch Stepmotor</a></p>

<p>In unserem nun folgenden Schritt beschäftigten wir uns mit dem Motorschild, einem Aufsteckmodul für den Arduino, dieser ermöglicht es, eine externe Stromquelle mit stärkerer Spannung direkt anzuschließen. Zusätzlich bietet das Modul Anschlussmöglichkeiten für zwei Drehmotoren, welche jeweils zwei positiv und negativ Anschlüsse brauchen. Wir fügten der Softwarelibaire einen Ordner hinzu, welcher die Befehlsbasis des Arduino erweitert um die einfache Programmierung des Arduinos ermöglicht. Nach Aufbau und Programmierung führten wir das Programm mit verschiedenen Schrittweiten und Geschwindigkeiten aus.</p>

<h3>
<a id="6">6. Der Ultraschallsensor</a>
</h3>

<p>
<img src="Bilder/IMG_1954.JPG" alt="Bild2" style="width:400px;border:0;">
<img src="Bilder script/Ultraschallsensor_1.PNG" alt="Bild4" style="width:372px;border:0;">
</p>
<p><a href="https://github.com/Stormarnschule12/Arduino-car/blob/master/sketch_Ultraschallsensor_mit_LED.ino">Sketch Ultraschallsensor</a></p>

<p>In unserem, bis zu diesem Zeitpunkt, letzten Aufbau beschäftigten wir uns mit dem, für unseren selbstfahrenden Roboter, unerlässlichem Steuerelement. Dem Ultraschallsensor. Im Vorfeld dieses Schrittes mussten wir uns mehr einlesen, da dies, dass bis jetzt komplizierteste Element war. Bei der Arbeit mit ihm, muss man nämlich auch den Umgang mit Variablen und einige rechnerische Elemente beachten. Nach einer gewissen Einlesezeit begannen wir. Der Sensor sendet ein Signal aus, das von einem Objekt zurückgeworfen wird, auf das es trifft. Der dann eingehende Impuls ist erstmal für den Code nicht zu verarbeiten. Die Zeit zwischen aussenden und empfangen wird gemessen. Die Zeit wird durch die Schallgeschwindigkeit geteilt, um ein Distanz heraus zu bekommen. Darauffolgend wird diese durch 2 geteilt, da man nur die Streck in eine Richtung haben möchte. Wir schrieben den Code so, dass in einem definierten Bereich vor dem Sensor eine grüne LED leuchtet, ist das Objekt zu dicht vor dem Sensor wechselt das Licht von grün auf rot.</p>

<h3>
<a id="7">7. Fazit</a>
</h3>

<p>Abschließend würden wir selbsteinschätzend sagen, dass wir bis zum jetzigen Punkt gute Fortschritte gemacht haben und insbesondere in der Arbeit mit Programmierung viele neue Kenntnisse gesammelt haben. Wir sind mir der Wahl unseres Projektes immer noch sehr zufrieden und motiviert unser finales Ziel zu erreichen. Unsere Zusammenarbeit hat sehr gut funktioniert und in den Aufgaben haben wir regelmäßig gewechselt, so dass beide einen gleichen Anteil am Projekt haben.</p>

<h3>
<a id="8">8.Zeitliche Übersicht</a>
</h3>

<table>
<thead>
<tr>
<th>Spalte 1</th>
<th align="center">Spalte 2</th>
<th align="center">Spalte 3</th>
</tr>
</thead>
<tbody>
<tr>
<td>Spalte 1.1</td>
<td align="center">Spalte 2.1</td>
<td align="center">Spalte 3.1</td>
</tr>
<tr>
<td>Spalte 1.2</td>
<td align="center">Spalte 2.2</td>
<td align="center">Spalte 2.3</td>
</tr>
<tr>
<td>Spalte 1.3</td>
<td align="center">Spalte 2.3</td>
<td align="center">Spalte 3.3</td>
</tr>
<tr>
<td>Spalte 1.4</td>
<td align="center">Spalte 2.4</td>
<td align="center">Spalte 3.4</td>
</tr>
</tbody>
</table>
