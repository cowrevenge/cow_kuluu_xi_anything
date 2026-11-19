/* f_0x1011cb50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1011cb50(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1011cb6bu: ecx = g->ecx; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cb6b;
    case 0x1011cb75u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cb75;
    case 0x1011cb7cu: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cb7c;
    case 0x1011cb8eu: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cb8e;
    case 0x1011cb95u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cb95;
    case 0x1011cba7u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cba7;
    case 0x1011cbaeu: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cbae;
    case 0x1011cbc0u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cbc0;
    case 0x1011cbc7u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cbc7;
    case 0x1011cbd9u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cbd9;
    case 0x1011cbe0u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cbe0;
    case 0x1011cbf2u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cbf2;
    case 0x1011cbf9u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cbf9;
    case 0x1011cc0bu: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cc0b;
    case 0x1011cc12u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cc12;
    case 0x1011cc24u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cc24;
    case 0x1011cc2bu: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cc2b;
    case 0x1011cc3du: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cc3d;
    case 0x1011cc44u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cc44;
    case 0x1011cc56u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cc56;
    case 0x1011cc5du: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cc5d;
    case 0x1011cc6fu: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cc6f;
    case 0x1011cc76u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cc76;
    case 0x1011cc88u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cc88;
    case 0x1011cc8fu: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cc8f;
    case 0x1011cca1u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cca1;
    case 0x1011cca8u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cca8;
    case 0x1011ccbau: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011ccba;
    case 0x1011ccc1u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011ccc1;
    case 0x1011ccd3u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011ccd3;
    case 0x1011ccdau: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011ccda;
    case 0x1011ccecu: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011ccec;
    case 0x1011ccf3u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011ccf3;
    case 0x1011cd05u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cd05;
    case 0x1011cd0cu: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cd0c;
    case 0x1011cd1eu: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cd1e;
    case 0x1011cd25u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cd25;
    case 0x1011cd37u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cd37;
    case 0x1011cd3eu: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cd3e;
    case 0x1011cd50u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cd50;
    case 0x1011cd57u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cd57;
    case 0x1011cd66u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cd66;
    case 0x1011cd6du: eax = g->eax; ecx = g->ecx; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cd6d;
    case 0x1011cd76u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cd76;
    case 0x1011cd7du: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cd7d;
    case 0x1011cd8cu: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cd8c;
    case 0x1011cd93u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cd93;
    case 0x1011cda2u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cda2;
    case 0x1011cda9u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cda9;
    case 0x1011cdb8u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cdb8;
    case 0x1011cdbfu: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cdbf;
    case 0x1011cdceu: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cdce;
    case 0x1011cdd8u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cdd8;
    case 0x1011cde3u: eax = g->eax; ecx = g->ecx; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011cde3;
    case 0x1011cdf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); goto E_1011cdf8;
    case 0x1011ce09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_1011ce09;
    case 0x1011ce1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_1011ce1b;
    case 0x1011ce1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_1011ce1c;
    case 0x1011ce2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); goto E_1011ce2e;
    case 0x1011ce37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); goto E_1011ce37;
    case 0x1011ce39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); goto E_1011ce39;
    case 0x1011ce41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); goto E_1011ce41;
    case 0x1011ce47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); goto E_1011ce47;
    case 0x1011ce4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); goto E_1011ce4e;
    case 0x1011ce63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); goto E_1011ce63;
    case 0x1011ce64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); goto E_1011ce64;
    case 0x1011ce73u: eax = g->eax; edx = g->edx; g->ebp = rd32(sp0 - 4u); goto E_1011ce73;
    default: break;
    }
#endif

    COW_AT(1011cb50)
    wr8(arg2, 0u);
    wr8(arg2 + 1u, 0u);
    if ((uint16_t)arg1 != 0xcbu) goto L_1011cb75;
    COW_AT(1011cb6b)
    eax = 0u;
    ecx = 0x8181u;
L_1011cde3: ;
    COW_AT(1011cde3)
    if ((int32_t)eax <= 0)
    {
        edx = (uint8_t)ecx;
        ebx = ecx >> 8u;
        goto L_1011ce64;
    }
    edi = ecx >> 8u;
    ecx = (uint8_t)ecx;
    COW_AT(1011cdf8)
    if ((int32_t)(0xfcu - (uint32_t)(int16_t)ecx) >= (int32_t)eax)
    {
        esi = 0u;
    }
    else
    {
        edx = (uint32_t)(int16_t)ecx;
    COW_AT(1011ce09)
        if ((int16_t)ecx > 127)
        {
            eax = eax + edx - 0xfdu;
            esi = 1u;
        }
        else
        {
            eax = eax + edx - 0xfdu;
    COW_AT(1011ce1b)
            eax = eax + 1u;
            esi = 1u;
        }
    }
    COW_AT(1011ce1c)
    t1 = cow_divs(g, eax, 0xbcu);
    t2 = cow_mods(g, eax, 0xbcu);
    if ((int32_t)(esi + t1) <= 0)
    {
        edx = t2;
        ebx = edi + esi + t1;
        goto L_1011ce39;
    }
    edx = t2;
    ebx = edi + esi + t1;
    COW_AT(1011ce2e)
    if ((int16_t)(edx + 0x40u) < 127)
    {
        edx = edx + 0x40u;
        goto L_1011ce64;
    }
    edx = edx + 0x40u;
    COW_AT(1011ce37)
L_1011ce47: ;
    COW_AT(1011ce47)
    if ((uint16_t)edx != 0xfcu) goto L_1011ce63;
    COW_AT(1011ce4e)
    wr8(arg2, (uint8_t)(ebx + 1u));
    wr8(arg2 + 1u, 0x40u);
    return 2u;
L_1011cb75: ;
    COW_AT(1011cb75)
    if ((int16_t)arg1 < 8126) goto L_1011cb8e;
    COW_AT(1011cb7c)
    eax = (uint32_t)(int16_t)arg1 - 0x1fbeu;
    ecx = 0xed3fu;
    goto L_1011cde3;
L_1011cb8e: ;
    COW_AT(1011cb8e)
    if ((int16_t)arg1 < 5399) goto L_1011cba7;
    COW_AT(1011cb95)
    eax = (uint32_t)(int16_t)arg1 - 0x1517u;
    ecx = 0xe040u;
    goto L_1011cde3;
L_1011cba7: ;
    COW_AT(1011cba7)
    if ((int16_t)arg1 < 3989) goto L_1011cbc0;
    COW_AT(1011cbae)
    eax = (uint32_t)(int16_t)arg1 - 0xf95u;
    ecx = 0x989fu;
    goto L_1011cde3;
L_1011cbc0: ;
    COW_AT(1011cbc0)
    if ((int16_t)arg1 < 1024) goto L_1011cbd9;
    COW_AT(1011cbc7)
    eax = (uint32_t)(int16_t)arg1 - 0x400u;
    ecx = 0x889fu;
    goto L_1011cde3;
L_1011cbd9: ;
    COW_AT(1011cbd9)
    if ((int16_t)arg1 < 989) goto L_1011cbf2;
    COW_AT(1011cbe0)
    eax = (uint32_t)(int16_t)arg1 - 0x3ddu;
    ecx = 0x877eu;
    goto L_1011cde3;
L_1011cbf2: ;
    COW_AT(1011cbf2)
    if ((int16_t)arg1 < 966) goto L_1011cc0b;
    COW_AT(1011cbf9)
    eax = (uint32_t)(int16_t)arg1 - 0x3c6u;
    ecx = 0x875fu;
    goto L_1011cde3;
L_1011cc0b: ;
    COW_AT(1011cc0b)
    if ((int16_t)arg1 < 936) goto L_1011cc24;
    COW_AT(1011cc12)
    eax = (uint32_t)(int16_t)arg1 - 0x3a8u;
    ecx = 0x8740u;
    goto L_1011cde3;
L_1011cc24: ;
    COW_AT(1011cc24)
    if ((int16_t)arg1 < 704) goto L_1011cc3d;
    COW_AT(1011cc2b)
    eax = (uint32_t)(int16_t)arg1 - 0x2c0u;
    ecx = 0x8540u;
    goto L_1011cde3;
L_1011cc3d: ;
    COW_AT(1011cc3d)
    if ((int16_t)arg1 < 622) goto L_1011cc56;
    COW_AT(1011cc44)
    eax = (uint32_t)(int16_t)arg1 - 0x26eu;
    ecx = 0x859fu;
    goto L_1011cde3;
L_1011cc56: ;
    COW_AT(1011cc56)
    if ((int16_t)arg1 < 741) goto L_1011cc6f;
    COW_AT(1011cc5d)
    eax = (uint32_t)(int16_t)arg1 - 0x2e5u;
    ecx = 0x815fu;
    goto L_1011cde3;
L_1011cc6f: ;
    COW_AT(1011cc6f)
    if ((int16_t)arg1 < 588) goto L_1011cc88;
    COW_AT(1011cc76)
    eax = (uint32_t)(int16_t)arg1 - 0x24cu;
    ecx = 0x849fu;
    goto L_1011cde3;
L_1011cc88: ;
    COW_AT(1011cc88)
    if ((int16_t)arg1 < 555) goto L_1011cca1;
    COW_AT(1011cc8f)
    eax = (uint32_t)(int16_t)arg1 - 0x22bu;
    ecx = 0x8470u;
    goto L_1011cde3;
L_1011cca1: ;
    COW_AT(1011cca1)
    if ((int16_t)arg1 < 522) goto L_1011ccba;
    COW_AT(1011cca8)
    eax = (uint32_t)(int16_t)arg1 - 0x20au;
    ecx = 0x8440u;
    goto L_1011cde3;
L_1011ccba: ;
    COW_AT(1011ccba)
    if ((int16_t)arg1 < 498) goto L_1011ccd3;
    COW_AT(1011ccc1)
    eax = (uint32_t)(int16_t)arg1 - 0x1f2u;
    ecx = 0x83bfu;
    goto L_1011cde3;
L_1011ccd3: ;
    COW_AT(1011ccd3)
    if ((int16_t)arg1 < 474) goto L_1011ccec;
    COW_AT(1011ccda)
    eax = (uint32_t)(int16_t)arg1 - 0x1dau;
    ecx = 0x839fu;
    goto L_1011cde3;
L_1011ccec: ;
    COW_AT(1011ccec)
    if ((int16_t)arg1 < 388) goto L_1011cd05;
    COW_AT(1011ccf3)
    eax = (uint32_t)(int16_t)arg1 - 0x184u;
    ecx = 0x8340u;
    goto L_1011cde3;
L_1011cd05: ;
    COW_AT(1011cd05)
    if ((int16_t)arg1 < 305) goto L_1011cd1e;
    COW_AT(1011cd0c)
    eax = (uint32_t)(int16_t)arg1 - 0x131u;
    ecx = 0x829fu;
    goto L_1011cde3;
L_1011cd1e: ;
    COW_AT(1011cd1e)
    if ((int16_t)arg1 < 279) goto L_1011cd37;
    COW_AT(1011cd25)
    eax = (uint32_t)(int16_t)arg1 - 0x117u;
    ecx = 0x8281u;
    goto L_1011cde3;
L_1011cd37: ;
    COW_AT(1011cd37)
    if ((int16_t)arg1 < 253) goto L_1011cd50;
    COW_AT(1011cd3e)
    eax = (uint32_t)(int16_t)arg1 - 0xfdu;
    ecx = 0x8260u;
    goto L_1011cde3;
L_1011cd50: ;
    COW_AT(1011cd50)
    if ((int16_t)arg1 < 243) goto L_1011cd66;
    COW_AT(1011cd57)
    eax = (uint32_t)(int16_t)arg1 - 0xf3u;
    ecx = 0x824fu;
    goto L_1011cde3;
L_1011cd66: ;
    COW_AT(1011cd66)
    if ((uint16_t)arg1 != 0xf2u) goto L_1011cd76;
    COW_AT(1011cd6d)
    eax = 0u;
    ecx = 0x819bu;
    goto L_1011cde3;
L_1011cd76: ;
    COW_AT(1011cd76)
    if ((int16_t)arg1 < 234) goto L_1011cd8c;
    COW_AT(1011cd7d)
    eax = (uint32_t)(int16_t)arg1 - 0xeau;
    ecx = 0x81f0u;
    goto L_1011cde3;
L_1011cd8c: ;
    COW_AT(1011cd8c)
    if ((int16_t)arg1 < 219) goto L_1011cda2;
    COW_AT(1011cd93)
    eax = (uint32_t)(int16_t)arg1 - 0xdbu;
    ecx = 0x81dau;
    goto L_1011cde3;
L_1011cda2: ;
    COW_AT(1011cda2)
    if ((int16_t)arg1 < 212) goto L_1011cdb8;
    COW_AT(1011cda9)
    eax = (uint32_t)(int16_t)arg1 - 0xd4u;
    ecx = 0x81c8u;
    goto L_1011cde3;
L_1011cdb8: ;
    COW_AT(1011cdb8)
    if ((int16_t)arg1 < 204) goto L_1011cdce;
    COW_AT(1011cdbf)
    eax = (uint32_t)(int16_t)arg1 - 0xccu;
    ecx = 0x81b8u;
    goto L_1011cde3;
L_1011cdce: ;
    COW_AT(1011cdce)
    if ((int16_t)arg1 < 96) goto L_1011ce73;
    COW_AT(1011cdd8)
    eax = (uint32_t)(int16_t)arg1 - 0x60u;
    ecx = 0x8140u;
    goto L_1011cde3;
L_1011ce39: ;
    COW_AT(1011ce39)
    if ((int16_t)(ecx + edx) < 127)
    {
        edx = ecx + edx;
        goto L_1011ce64;
    }
    edx = ecx + edx;
    COW_AT(1011ce41)
    if ((int16_t)ecx >= 127) goto L_1011ce64;
    goto L_1011ce47;
L_1011ce63: ;
    COW_AT(1011ce63)
    edx = edx + 1u;
L_1011ce64: ;
    COW_AT(1011ce64)
    wr8(arg2, (uint8_t)ebx);
    wr8(arg2 + 1u, (uint8_t)edx);
    return 2u;
L_1011ce73: ;
    COW_AT(1011ce73)
    wr8(arg2, (uint8_t)((uint8_t)arg1 + 0x20u));
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1011cb50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1011cb6bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->eax = 0u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cb75u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cb7cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cb8eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cb95u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cba7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cbaeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cbc0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cbc7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cbd9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cbe0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cbf2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cbf9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cc0bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cc12u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cc24u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cc2bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cc3du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cc44u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cc56u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cc5du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cc6fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cc76u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cc88u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cc8fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cca1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cca8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011ccbau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011ccc1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011ccd3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011ccdau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011ccecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011ccf3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cd05u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cd0cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cd1eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cd25u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cd37u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cd3eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cd50u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cd57u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cd66u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cd6du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cd76u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cd7du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cd8cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cd93u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cda2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cda9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cdb8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cdbfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cdceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cdd8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cde3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011cdf8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011ce09u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011ce1bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = arg2;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1011ce1cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011ce2eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011ce37u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011ce39u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011ce41u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011ce47u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011ce4eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011ce63u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011ce64u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011ce73u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ecx = (g->ecx & 0xffff0000u) | (uint16_t)arg1;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1011cb50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1011cb50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
