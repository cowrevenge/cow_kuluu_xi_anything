/* f_0x1011c940 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1011c940(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1011c956u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011c956;
    case 0x1011c95bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011c95b;
    case 0x1011c960u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011c960;
    case 0x1011c969u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011c969;
    case 0x1011c96au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011c96a;
    case 0x1011c972u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011c972;
    case 0x1011c978u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011c978;
    case 0x1011c97bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011c97b;
    case 0x1011c98au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011c98a;
    case 0x1011c98fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011c98f;
    case 0x1011c997u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011c997;
    case 0x1011c9a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011c9a7;
    case 0x1011c9afu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011c9af;
    case 0x1011c9bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011c9bf;
    case 0x1011c9c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011c9c7;
    case 0x1011c9d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011c9d7;
    case 0x1011c9dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011c9df;
    case 0x1011c9e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011c9e7;
    case 0x1011c9efu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011c9ef;
    case 0x1011c9f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011c9f7;
    case 0x1011c9ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011c9ff;
    case 0x1011ca07u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011ca07;
    case 0x1011ca0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011ca0f;
    case 0x1011ca17u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011ca17;
    case 0x1011ca1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011ca1f;
    case 0x1011ca27u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011ca27;
    case 0x1011ca2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011ca2f;
    case 0x1011ca37u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011ca37;
    case 0x1011ca3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011ca3f;
    case 0x1011ca47u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011ca47;
    case 0x1011ca4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011ca4f;
    case 0x1011ca57u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011ca57;
    case 0x1011ca5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011ca5f;
    case 0x1011ca67u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011ca67;
    case 0x1011ca6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011ca6f;
    case 0x1011ca77u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011ca77;
    case 0x1011ca7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011ca7f;
    case 0x1011ca87u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011ca87;
    case 0x1011ca8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011ca8f;
    case 0x1011ca97u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011ca97;
    case 0x1011ca9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011ca9f;
    case 0x1011caa7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011caa7;
    case 0x1011caafu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011caaf;
    case 0x1011cab7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011cab7;
    case 0x1011cabfu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011cabf;
    case 0x1011cac7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011cac7;
    case 0x1011cacfu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011cacf;
    case 0x1011cad7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011cad7;
    case 0x1011cadfu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011cadf;
    case 0x1011cae7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011cae7;
    case 0x1011caefu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011caef;
    case 0x1011caf7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011caf7;
    case 0x1011caffu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011caff;
    case 0x1011cb04u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011cb04;
    case 0x1011cb0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011cb0c;
    case 0x1011cb11u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011cb11;
    case 0x1011cb19u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011cb19;
    case 0x1011cb1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011cb1e;
    case 0x1011cb26u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011cb26;
    case 0x1011cb2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011cb2b;
    case 0x1011cb33u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011cb33;
    case 0x1011cb38u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1011cb38;
    default: break;
    }
#endif

    COW_AT(1011c940)
    t1 = rd8(arg1 + 1u);
    if (rd8(arg1) > 0x9fu)
    {
        eax = rd8(arg1);
        ecx = t1;
    COW_AT(1011c95b)
        eax = eax - 0xb1u;
    }
    else
    {
        eax = rd8(arg1);
        ecx = t1;
    COW_AT(1011c956)
        eax = eax - 0x71u;
    }
    COW_AT(1011c960)
    if (ecx <= 0x7fu)
    {
        eax = (eax * 2u & 0xffffff00u) | (uint8_t)(eax * 2u | 1u);
    }
    else
    {
        eax = (eax * 2u & 0xffffff00u) | (uint8_t)(eax * 2u | 1u);
    COW_AT(1011c969)
        ecx = ecx - 1u;
    }
    COW_AT(1011c96a)
    if (ecx < 0x9eu)
    {
    COW_AT(1011c978)
        ecx = ecx - 0x1fu;
    }
    else
    {
    COW_AT(1011c972)
        eax = eax + 1u;
        ecx = ecx - 0x7du;
    }
    COW_AT(1011c97b)
    if ((eax << 8u | ecx) < 0x9320u)
    {
        edx = eax << 8u | ecx;
        goto L_1011c98f;
    }
    edx = eax << 8u | ecx;
    COW_AT(1011c98a)
    g->edx = edx;
    return (eax & 0xffff0000u) | 0xcbu;
L_1011c98f: ;
    COW_AT(1011c98f)
    if (edx < 0x7921u) goto L_1011c9a7;
    COW_AT(1011c997)
    g->edx = eax * 0x30u - eax;
    return eax * 0x5eu + ecx - 0xcd1u;
L_1011c9a7: ;
    COW_AT(1011c9a7)
    if (edx < 0x5021u) goto L_1011c9bf;
    COW_AT(1011c9af)
    g->edx = eax * 0x30u - eax;
    return eax * 0x5eu + ecx - 0xdecu;
L_1011c9bf: ;
    COW_AT(1011c9bf)
    if (edx < 0x3021u) goto L_1011c9d7;
    COW_AT(1011c9c7)
    g->edx = eax * 0x30u - eax;
    return eax * 0x5eu + ecx - 0xdc1u;
L_1011c9d7: ;
    COW_AT(1011c9d7)
    if (edx < 0x2f21u) goto L_1011c9e7;
    COW_AT(1011c9df)
    g->edx = edx;
    return eax + ecx + 0x21eu;
L_1011c9e7: ;
    COW_AT(1011c9e7)
    if (edx < 0x2e21u) goto L_1011c9f7;
    COW_AT(1011c9ef)
    g->edx = edx;
    return eax + ecx + 0x271u;
L_1011c9f7: ;
    COW_AT(1011c9f7)
    if (edx < 0x2e46u) goto L_1011ca07;
    COW_AT(1011c9ff)
    g->edx = edx;
    return eax + ecx + 0x271u;
L_1011ca07: ;
    COW_AT(1011ca07)
    if (edx < 0x2d5fu) goto L_1011ca17;
    COW_AT(1011ca0f)
    g->edx = edx;
    return eax + ecx + 0x351u;
L_1011ca17: ;
    COW_AT(1011ca17)
    if (edx < 0x2d40u) goto L_1011ca27;
    COW_AT(1011ca1f)
    g->edx = edx;
    return eax + ecx + 0x359u;
L_1011ca27: ;
    COW_AT(1011ca27)
    if (edx < 0x2d21u) goto L_1011ca37;
    COW_AT(1011ca2f)
    g->edx = edx;
    return eax + ecx + 0x35au;
L_1011ca37: ;
    COW_AT(1011ca37)
    if (edx < 0x2a21u) goto L_1011ca47;
    COW_AT(1011ca3f)
    g->edx = edx;
    return eax + ecx + 0x223u;
L_1011ca47: ;
    COW_AT(1011ca47)
    if (edx < 0x2921u) goto L_1011ca57;
    COW_AT(1011ca4f)
    g->edx = edx;
    return eax + ecx + 0x276u;
L_1011ca57: ;
    COW_AT(1011ca57)
    if (edx < 0x2821u) goto L_1011ca67;
    COW_AT(1011ca5f)
    g->edx = edx;
    return eax + ecx + 0x203u;
L_1011ca67: ;
    COW_AT(1011ca67)
    if (edx < 0x2751u) goto L_1011ca77;
    COW_AT(1011ca6f)
    g->edx = edx;
    return eax + ecx + 0x1b3u;
L_1011ca77: ;
    COW_AT(1011ca77)
    if (edx < 0x2721u) goto L_1011ca87;
    COW_AT(1011ca7f)
    g->edx = edx;
    return eax + ecx + 0x1c2u;
L_1011ca87: ;
    COW_AT(1011ca87)
    if (edx < 0x2641u) goto L_1011ca97;
    COW_AT(1011ca8f)
    g->edx = edx;
    return eax + ecx + 0x18bu;
L_1011ca97: ;
    COW_AT(1011ca97)
    if (edx < 0x2621u) goto L_1011caa7;
    COW_AT(1011ca9f)
    g->edx = edx;
    return eax + ecx + 0x193u;
L_1011caa7: ;
    COW_AT(1011caa7)
    if (edx < 0x2521u) goto L_1011cab7;
    COW_AT(1011caaf)
    g->edx = edx;
    return eax + ecx + 0x13eu;
L_1011cab7: ;
    COW_AT(1011cab7)
    if (edx < 0x2421u) goto L_1011cac7;
    COW_AT(1011cabf)
    g->edx = edx;
    return eax + ecx + 0xecu;
L_1011cac7: ;
    COW_AT(1011cac7)
    if (edx < 0x2361u) goto L_1011cad7;
    COW_AT(1011cacf)
    g->edx = edx;
    return eax + ecx + 0x93u;
L_1011cad7: ;
    COW_AT(1011cad7)
    if (edx < 0x2341u) goto L_1011cae7;
    COW_AT(1011cadf)
    g->edx = edx;
    return eax + ecx + 0x99u;
L_1011cae7: ;
    COW_AT(1011cae7)
    if (edx < 0x2330u) goto L_1011caf7;
    COW_AT(1011caef)
    g->edx = edx;
    return eax + ecx + 0xa0u;
L_1011caf7: ;
    COW_AT(1011caf7)
    if (edx != 0x227fu) goto L_1011cb04;
    COW_AT(1011caff)
    g->edx = edx;
    return (eax & 0xffff0000u) | 0xf2u;
L_1011cb04: ;
    COW_AT(1011cb04)
    if (edx < 0x2272u) goto L_1011cb11;
    COW_AT(1011cb0c)
    g->edx = edx;
    return eax + ecx + 0x56u;
L_1011cb11: ;
    COW_AT(1011cb11)
    if (edx < 0x225cu) goto L_1011cb1e;
    COW_AT(1011cb19)
    g->edx = edx;
    return eax + ecx + 0x5du;
L_1011cb1e: ;
    COW_AT(1011cb1e)
    if (edx < 0x224au) goto L_1011cb2b;
    COW_AT(1011cb26)
    g->edx = edx;
    return eax + ecx + 0x68u;
L_1011cb2b: ;
    COW_AT(1011cb2b)
    if (edx < 0x223au) goto L_1011cb38;
    COW_AT(1011cb33)
    g->edx = edx;
    return eax + ecx + 0x70u;
L_1011cb38: ;
    COW_AT(1011cb38)
    g->edx = eax * 0x30u - eax;
    return eax * 0x5eu + ecx - 0xbdfu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1011c940(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1011c956u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011c95bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011c960u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011c969u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011c96au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011c972u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011c978u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011c97bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011c98au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011c98fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011c997u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011c9a7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011c9afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011c9bfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011c9c7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011c9d7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011c9dfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011c9e7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011c9efu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011c9f7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011c9ffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011ca07u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011ca0fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011ca17u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011ca1fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011ca27u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011ca2fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011ca37u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011ca3fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011ca47u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011ca4fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011ca57u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011ca5fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011ca67u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011ca6fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011ca77u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011ca7fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011ca87u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011ca8fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011ca97u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011ca9fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011caa7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011caafu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011cab7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011cabfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011cac7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011cacfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011cad7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011cadfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011cae7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011caefu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011caf7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011caffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011cb04u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011cb0cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011cb11u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011cb19u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011cb1eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011cb26u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011cb2bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011cb33u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1011cb38u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1011c940(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1011c940(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
