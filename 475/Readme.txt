This is a universal project, meaning this supports all current public cfw releases except those cfws built with mfwbuilders.

In order for those cfws to work with this source, those 64bit hashes are required to be ported in

modulespatch.h/c due to its hash check preventing unknown sprx/self modules to be patched on boot.

as a result it can cause issues with ps2/psp games when this cobra payload is applied without proper porting

Currently following CFWs are supported.

1. mine [unreleased]
2. HABIB 4.75 Starbucks 1.00
3. Ferrox 4.75 1.00 [Untested but it should work]

this source is made based on both REBUG 4.70.1 COBRA 7.1 and HABIB 4.70 1.03 [including his latest ps2netemu fix]
So on slim, there shouldn't be any problem with ps2games unless you don't follow tutorials.

All ps2 payloads are properly ported just like 4.70 cobra releases

the only thing that's not "FULLY" tested is those lv2 functions which I doubt it would make any issues. You could however try to verify those lv2 symbols.

and also, like REBUG COBRA, you can place webman inside dev_flash/vsh/module, so it could be auto loaded on boot, but not required to do that

you can use the old way to load webMAN as well just like previous non rebug cobra cfws.

however, I've found some bugs couple months ago but it seems like no one has reported as much.

Here's the list of bugs I've found

1. PSX region bypass issue with old backward compatible consoles. CECHA/B/C/E

2. The issue with ps2netemu on BC/Semi-BC consoles is currently resolved with new workaround discovered byhabib and aldostools


Other than that, I don't seem to find much issues.

I disabled that accidental ofw update feature code from mappath.c, due to its issue with game ripping from backup managers like multiMAN.

it prevents an access from multiMAN to copy PS3UPDAT.PUP file, so it caused a problem with ripping games

It was just my preference, but you could enable this back as mmCM/IRISMAN don't have this issue with ISO generations.

The only reason why I'm releasing this is because I'd like to benefit more people whom wanting to improve this scene including all developers and users,

plus I didn't want this to be wasted while I was waiting for DEX OFW to be delivered.

Hope this helped for those who want to learn.
