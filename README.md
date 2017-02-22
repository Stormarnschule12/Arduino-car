<h1>Arduino-Project</h1>

1.Einleitung
2.Die ersten Versuche mit LED's
3.Der Transistor
4.Die Windmaschinenampel
5.Der Motor
6.Der Ultraschallsensor
7.Fazit

Einleitung

Zu Beginn der Unterrichtseinheit haben wir uns erst damit beschäftig, welches Projekt für uns geeignet ist. Dabei haben wir zum einen darauf geachtet, welches Projekt von dem Schwierigkeitsgrad zu uns passt. Zum anderen wollten wir ein Projekt beginnen, welches nicht nur fiktiv auf einem Bildschirm sichtbar ist, sondern real ist. Nach einer kurzen Rücksprache mit unserem Informatiklehrer sind wir schlussendlich auf den Arduino gekommen, da dieser genau zu unseren Kriterien passt. Unser Ziel ist es, am Ende unserer Projektreihe einen alleine Fahrenden Roboter zu programmieren und zu bauen. Dieser soll in einem abgesteckten Parkour ohne Einwirkungen von außen seinen Weg finden. Da unsere Informatikvorkenntnisse sehr begrenzt waren, haben wir uns am Anfang mit einfachen Schaltungen und Skripts auseinander gesetzt. Hierbei haben wir die verschiedenen Bauteile und Möglichkeiten des Arduino, welche für den Bau unseres Roboters notwendig sind, besser kennengelernt und deren Benutzung erlernt. Am Ende dieser Reihe ist es unser Ziel mit unseren neu erworbenen Fähigkeiten einen wie oben beschriebenen Roboter herzustellen. Folgend werden wir unsere Schritte hierzu genauer erläutern.

Die Ersten Versuche mit LED's

exampleexample Skript LED's

Als erstes kleines Projekt haben wir eine einfache Ampel mit einem Knopf als Auslöser programmiert und aufgebaut. Zu Beginn brennt die grüne LED und die rote ist nicht in betrieb. Bei Benutzung der Taste geht die grüne LED aus und die rote LED beginnt zu leuchten. Nach einer in dem Skript fest definierten Zeit, wird dieser Vorgang revidiert und die LED's sind in ihrem Ausgangszustand. Dieser erste Aufbau hat es uns ermöglicht die Benutzung der Arduino Software zu erlernen. Zudem haben wir die Grundlegenden Formeln für die Programmierung kennengelernt.

Der Transistor

exampleexample Skript Transistor

Der nächste Schritt beinhaltete, dass wir beide uns mit einem Motor auseinander gesetzt haben. Die Schaltung, sowie der Skript sind nicht besonders komplex, doch es ging uns in erster Linie darum, die Funktionalität eines Motors sowie die Energieversorgung durch eine Externe Stromquelle zu erlernen. Damit die Batterie, über den Arduino gesteuert, den Motor mit Energie versorgen kann, haben wir einen Transistor verbaut. Dieser ermöglicht bei einer anliegenden Potenzialdifferenz, welche vom Arduino ausgeht, dass der Masseanschluss von der Batterie zum Motor hergestellt wird. Bei Fehlender Spannung an dem Transistor wird die Verbindung unterbrochen und der Batterie-Motor-Stromkreislauf ist nicht mehr geschlossen. Das Skript haben wir so geschrieben, dass der Motor sich beginnt zu Drehen und nach einer bestimmten Zeit wieder stoppt. Zudem haben wir festgestellt, wenn man den Zeitlichen Abstand zwischen Drehen und Stopp sehr kurz hält, so scheint es als sei der Motor gedrosselt. Folglich erscheint es dem Menschen, als würde sich der Motor langsam drehen und nicht an und ausgehen.

Die Windmaschinenampel

exampleexample exampleexample Skript Ampel

Als 3. Miniprojekt wollten wir nun unsere Erkenntnisse und Erfolge aus den beiden vorangegangenen Aufbauten zu einem größeren und komplexeren zusammenfügen. Wir steckten also wie im vorangehenden Aufbau den Drehmotor mit Transistor zusammen, zusätzlich bauten wir auch noch vier LEDs und den Druckknopf in dem Aufbau zusammen. Unser Ziel war es, dass man von den LEDs den Betrieb des Motors ablesen kann. So leuchtet die grüne LED, wenn der Motor läuft. Bei drücken des Knopfes hört die LED auf zu leuchten, eine andere beginnt zu blinken, der Motor geht aus und die rote LED beginnt zu leuchten. Nach einer bestimmten Zeit geht die rote LED wieder aus, Grün leuchtet und der Motor dreht sich wieder. In diesem Zwischenschritt, konnten wir verschiedene Mechanismen mit einander zu verbinden.

Der Motor

exampleexample Skript Schrittmotor

In unserem nun folgenden Schritt beschäftigten wir uns mit dem Motorschild, einem Aufsteckmodul für den Arduino, dieser ermöglicht es, eine externe Stromquelle mit stärkerer Spannung direkt anzuschließen. Zusätzlich bietet das Modul Anschlussmöglichkeiten für zwei Drehmotoren, welche jeweils zwei positiv und negativ Anschlüsse brauchen. Wir fügten der Softwarelibaire einen Ordner hinzu, welcher die Befehlsbasis des Arduino erweitert um die einfache Programmierung des Arduinos ermöglicht. Nach Aufbau und Programmierung führten wir das Programm mit verschiedenen Schrittweiten und Geschwindigkeiten aus.

Der Ultraschallsensor

exampleexample exampleexample Skript Ultraschallsensor

In unserem, bis zu diesem Zeitpunkt, letzten Aufbau beschäftigten wir uns mit dem, für unseren selbstfahrenden Roboter, unerlässlichem Steuerelement. Dem Ultraschallsensor. Im Vorfeld dieses Schrittes mussten wir uns mehr einlesen, da dies, dass bis jetzt komplizierteste Element war. Bei der Arbeit mit ihm, muss man nämlich auch den Umgang mit Variablen und einige rechnerische Elemente beachten. Nach einer gewissen Einlesezeit begannen wir. Der Sensor sendet ein Signal aus, das von einem Objekt zurückgeworfen wird, auf das es trifft. Der dann eingehende Impuls ist erstmal für den Code nicht zu verarbeiten. Die Zeit zwischen aussenden und empfangen wird gemessen. Die Zeit wird durch die Schallgeschwindigkeit geteilt, um ein Distanz heraus zu bekommen. Darauffolgend wird diese durch 2 geteilt, da man nur die Streck in eine Richtung haben möchte. Wir schrieben den Code so, dass in einem definierten Bereich vor dem Sensor eine grüne LED leuchtet, ist das Objekt zu dicht vor dem Sensor wechselt das Licht von grün auf rot.

Fazit

Abschließend würden wir selbsteinschätzend sagen, dass wir bis zum jetzigen Punkt gute Fortschritte gemacht haben und insbesondere in der Arbeit mit Programmierung viele neue Kenntnisse gesammelt haben. Wir sind mir der Wahl unseres Projektes immer noch sehr zufrieden und motiviert unser finales Ziel zu erreichen. Unsere Zusammenarbeit hat sehr gut funktioniert und in den Aufgaben haben wir regelmäßig gewechselt, so dass beide einen gleichen Anteil am Projekt haben.
