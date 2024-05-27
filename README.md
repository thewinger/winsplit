# Winsplit

Inspired by the Boardrun Bizarre and Red herring. I wanted to be able to use a normal keyset, so no full ortho, but split.

![Keyboard](Resources/winsplit.webp)

## Disclaimer

This is my first designed keyboard from the grounds up.
I'm not responsible for any damage caused by using this keyboard or any production of this keyboard that doesn't work.

## Bill of materials

To be bought separately:

- 2x [RP2040 Pro Micro](https://es.aliexpress.com/item/1005006130019224.html).
- 70x pin headers
- 1x [Skyloong Rotary Encoder](https://es.aliexpress.com/item/1005005189266585.html?spm=a2g0o.order_list.order_list_main.122.376d194dW3x576&gatewayAdapt=glo2esp).
- 2x [TRRS Connector](https://es.aliexpress.com/item/33029465106.html).
- 2x [SMD Buttons](https://es.aliexpress.com/item/33013562004.html).
- 2x 128x32 [OLED panels](https://es.aliexpress.com/item/1005005973981064.html?spm=a2g0o.order_list.order_list_main.167.376d194dW3x576&gatewayAdapt=glo2esp).
- 73x [Kailh hotswap sockets](https://es.aliexpress.com/item/1005004290562374.html?spm=a2g0o.order_list.order_list_main.178.376d194dW3x576&gatewayAdapt=glo2esp).
- 73x [SK6812MINI-E leds](https://es.aliexpress.com/item/1005004908622116.html?spm=a2g0o.order_list.order_list_main.147.376d194dW3x576&gatewayAdapt=glo2esp).
- 4x 2u Stabilizers.
- 16x M2 6mm screws.

Diodes, capacitors, resistors and other small parts are to be soldered directly by JLCPCB. References in KiCad files.

## TODO

- [ ] **Rotate 180º right-side OLED connector.** Right now is not usable.
- [ ] **Rotary encoder.** As of now, it either works as a button when a normal switch is installed or as an encoder without button when the HS Skyloong encoder is installed.
- [ ] **Make screw holes in PCB 4mm instead of 2.2mm.** So they are passthrougth and bottom plate can be directly screwed to top plate, like lily58 or Corne keyboards.

## Notes

- Function keys (Right of B and left of N) are hard to reach.
