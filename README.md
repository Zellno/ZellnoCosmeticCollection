# Zellno Cosmetic Collection

A free cosmetic collection for DayZ, developed as an independent
community project.

The collection is designed to contain multiple cosmetic clothing items
while preserving the gameplay attributes of their corresponding vanilla
classes.

## Included items

### Zellno Wojtek T-Shirt

- Class name: `Zellno_WojtekTShirt`
- Front: Zellno emblem
- Back: original Wojtek commemorative artwork
- Base class: `TShirt_ColorBase`
- Gameplay attributes: inherited from the vanilla T-shirt
- Gameplay advantage: none

## Installation

This is a client-and-server mod. Both the DayZ server and every connecting
player must load it through the `-mod=` parameter.

Example:

```text
-mod="@ZellnoCosmeticCollection"
```

Copy the public key from the `keys` directory to the server key directory.

Do not load this package exclusively through `-serverMod=` because clients
need the packaged textures to display the cosmetic items.

## Building

The project includes a Linux build script that uses the official DayZ Tools
through Wine:

```bash
./build.sh
```

The build creates and signs:

```text
build/@ZellnoCosmeticCollection/
```

## Compatibility

- Existing item class preserved: `Zellno_WojtekTShirt`
- Current PBO: `ZellnoCosmeticCollection.pbo`
- Required vanilla addon: `DZ_Characters_Tops`
- Tested with DayZ 1.29 on Linux

## Licensing

- Code, configuration, scripts and documentation: [MIT License](LICENSE)
- Visual assets and DayZ-derived files: [Asset Licensing](ASSETS.md)
- Asset origins and historical references: [Provenance](PROVENANCE.md)
- Release history: [Changelog](CHANGELOG.md)

## Credits

- Project author and creative direction: Zellno
- Historical inspiration: Wojtek, the Polish Army bear
- Game and official tools: Bohemia Interactive

## Disclaimer

This is an unofficial community project and is not affiliated with or
endorsed by Bohemia Interactive.
