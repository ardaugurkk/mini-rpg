# Mini RPG (C)

Bu program C dilinde yazdığım basit bir oyun. Oyunda temel olarak hasar alma ve iksir kullanarak can doldurma mekaniği mevcut.

Bu programı C dilinde **pointer(işaretçi)** ve fonksiyonlar arası veri güncellemeyi pratik etmek için geliştirdim.

## Nasıl oynanır?
* Başlangıçta 100 canın ve 3 iksirin var.
* **H:** Hasar verir ve canını azaltır.
* **C:** İksir harcayarak canını yeniler.
* Canın 0 olursa ve iksirin varsa otomatik dirilirsin, iksirin kalmadıysa oyun biter.

## 💻 Çalıştırma
Terminal veya komut satırına sırayla şunları yazın:

```bash
gcc minirpg.c -o minirpg
./minirpg
