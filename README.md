# threeeasybuttons
A simple three button USB keyboard to quickly automate, well, whatever.

## Possible projects
* Service desk interaction statistics (easy, medium, hard)
* 'Call for backup' buttons (more staff, reference librarian, security)
* Patron-facing 'how did we do?' (😃, 😞, 😡)

## How it works
![Diagram of how the pieces fit together](/img/diagram.png)

The device connects via USB to a workstation (any OS will do).  Simulating a human interface device (HID), it sends keystrokes to the workstation, which listens using any of the myriad hotkey solutions out there.  It is the job of the hotkey program to trigger the desired effect when per button.

## Hardware recipe

* [Teensy 2.0](https://www.adafruit.com/products/199) ($15.95)
* [Large Arcade Button](https://www.adafruit.com/search?q=large%20arcade%20button&g=1) x3 ($5.95 each)
* [USB A/MiniB cable](https://www.adafruit.com/products/899) ($2.95)
* Wire
* Solder
* A case to put it all in

TODO: circuit diagram

## Recommended HotKey Programs

??

## Possible methods save the Data

* save to local file/mapped network drive
* HTTP GET/POST
 * Locally developed API
 * Google Sheets API
 * [Phant](http://phant.io)
 * [Thingspeak](http://thingspeak.org)

## Credits, References, Inspirations

* [Awesome Button](http://makezine.com/projects/make-32/the-awesome-button/)
* Ribaric, T. & Younker, J. (2013). Arduino-enabled Patron Interaction Counting. _Code4Lib Journal, Issue 20, 2013-04-17_. http://journal.code4lib.org/articles/8200.
