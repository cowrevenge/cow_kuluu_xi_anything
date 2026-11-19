/* f_0x1001dd00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1001dd00(Guest* g)
{
    double d1;
    double d2;
    uint32_t eax;
    uint32_t edx;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 132u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1001ddf2u: eax = g->eax; edx = g->edx; goto E_1001ddf2;
    case 0x1001de08u: eax = g->eax; edx = g->edx; goto E_1001de08;
    case 0x1001de20u: eax = g->eax; edx = g->edx; goto E_1001de20;
    case 0x1001de38u: eax = g->eax; edx = g->edx; goto E_1001de38;
    case 0x1001de50u: eax = g->eax; edx = g->edx; goto E_1001de50;
    case 0x1001de68u: eax = g->eax; edx = g->edx; goto E_1001de68;
    case 0x1001de80u: eax = g->eax; edx = g->edx; goto E_1001de80;
    case 0x1001de98u: eax = g->eax; edx = g->edx; goto E_1001de98;
    case 0x1001deb0u: eax = g->eax; edx = g->edx; goto E_1001deb0;
    case 0x1001dec8u: eax = g->eax; edx = g->edx; goto E_1001dec8;
    case 0x1001dee0u: eax = g->eax; edx = g->edx; goto E_1001dee0;
    case 0x1001def8u: eax = g->eax; edx = g->edx; goto E_1001def8;
    case 0x1001df0fu: eax = g->eax; edx = g->edx; goto E_1001df0f;
    case 0x1001df25u: eax = g->eax; edx = g->edx; goto E_1001df25;
    case 0x1001df3au: eax = g->eax; edx = g->edx; goto E_1001df3a;
    case 0x1001df50u: eax = g->eax; edx = g->edx; goto E_1001df50;
    default: break;
    }
#endif

    COW_AT(1001dd00)
    d1 = fr(g, (double)rdf32(sp0 + 4u) + (double)rdf32(COW_IMG(0x1032a344u)));
    wr32(sp0 - 0x70u, arg1);
    wr32(sp0 - 0x6cu, arg2);
    wrf32(sp0 - 0x54u, (float)(double)(float)d1);
    d2 = fr(g, (double)rdf32(sp0 + 8u) + (double)rdf32(COW_IMG(0x1032a344u)));
    wr32(sp0 - 0x50u, arg2);
    wr32(sp0 - 0x68u, 0x3f800000u);
    wr32(sp0 - 0x64u, 0x3f800000u);
    wr32(sp0 - 0x60u, 0x80808080u);
    wrf32(sp0 - 0x34u, (float)(double)(float)d2);
    wrf32(sp0 - 0x1cu, (float)(double)(float)d1);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x58u, 0u);
    wrf32(sp0 - 0x18u, (float)(double)(float)d2);
    wr32(sp0 - 0x4cu, 0x3f800000u);
    wr32(sp0 - 0x48u, 0x3f800000u);
    wr32(sp0 - 0x44u, 0x80808080u);
    wr32(sp0 - 0x40u, 0x3f800000u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x38u, arg1);
    wr32(sp0 - 0x30u, 0x3f800000u);
    wr32(sp0 - 0x2cu, 0x3f800000u);
    wr32(sp0 - 0x28u, 0x80808080u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x20u, 0x3f800000u);
    wr32(sp0 - 0x14u, 0x3f800000u);
    wr32(sp0 - 0x10u, 0x3f800000u);
    wr32(sp0 - 0xcu, 0x80808080u);
    wr32(sp0 - 8u, 0x3f800000u);
    wr32(sp0 - 4u, 0x3f800000u);
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x78u, 0xfu);
    t3 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x7cu, t3);
    g->esp = sp0 - 0x70u;
    cow_thiscall(g, rd32(rd32(t3) + 0xc8u), rd32(t3), 3, t3, 0xfu, 0u);
    COW_AT(1001ddf2)
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x78u, 7u);
    t4 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x7cu, t4);
    g->esp = sp0 - 0x70u;
    cow_thiscall(g, rd32(rd32(t4) + 0xc8u), rd32(t4), 3, t4, 7u, 0u);
    COW_AT(1001de08)
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x78u, 0xbu);
    wr32(sp0 - 0x7cu, 0u);
    t5 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x80u, t5);
    g->esp = sp0 - 0x70u;
    cow_thiscall(g, rd32(rd32(t5) + 0xfcu), rd32(t5), 4, t5, 0u, 0xbu, 0u);
    COW_AT(1001de20)
    wr32(sp0 - 0x74u, 1u);
    wr32(sp0 - 0x78u, 0x10u);
    wr32(sp0 - 0x7cu, 0u);
    t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x80u, t6);
    g->esp = sp0 - 0x70u;
    cow_thiscall(g, rd32(rd32(t6) + 0xfcu), rd32(t6), 4, t6, 0u, 0x10u, 1u);
    COW_AT(1001de38)
    wr32(sp0 - 0x74u, 1u);
    wr32(sp0 - 0x78u, 0x11u);
    wr32(sp0 - 0x7cu, 0u);
    t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x80u, t7);
    g->esp = sp0 - 0x70u;
    cow_thiscall(g, rd32(rd32(t7) + 0xfcu), rd32(t7), 4, t7, 0u, 0x11u, 1u);
    COW_AT(1001de50)
    wr32(sp0 - 0x74u, 3u);
    wr32(sp0 - 0x78u, 0xdu);
    wr32(sp0 - 0x7cu, 0u);
    t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x80u, t8);
    g->esp = sp0 - 0x70u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xfcu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 4, t8, 0u, 0xdu, 3u);
    COW_AT(1001de68)
    wr32(sp0 - 0x74u, 3u);
    wr32(sp0 - 0x78u, 0xeu);
    wr32(sp0 - 0x7cu, 0u);
    t9 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x80u, t9);
    g->esp = sp0 - 0x70u;
    cow_thiscall(g, rd32(rd32(t9) + 0xfcu), rd32(t9), 4, t9, 0u, 0xeu, 3u);
    COW_AT(1001de80)
    wr32(sp0 - 0x74u, 2u);
    wr32(sp0 - 0x78u, 1u);
    wr32(sp0 - 0x7cu, 0u);
    t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x80u, t10);
    g->esp = sp0 - 0x70u;
    cow_thiscall(g, rd32(rd32(t10) + 0xfcu), rd32(t10), 4, t10, 0u, 1u, 2u);
    COW_AT(1001de98)
    wr32(sp0 - 0x74u, 2u);
    wr32(sp0 - 0x78u, 2u);
    wr32(sp0 - 0x7cu, 0u);
    t11 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x80u, t11);
    g->esp = sp0 - 0x70u;
    cow_thiscall(g, rd32(rd32(t11) + 0xfcu), rd32(t11), 4, t11, 0u, 2u, 2u);
    COW_AT(1001deb0)
    wr32(sp0 - 0x74u, 1u);
    wr32(sp0 - 0x78u, 4u);
    wr32(sp0 - 0x7cu, 0u);
    t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x80u, t12);
    g->esp = sp0 - 0x70u;
    cow_thiscall(g, rd32(rd32(t12) + 0xfcu), rd32(t12), 4, t12, 0u, 4u, 1u);
    COW_AT(1001dec8)
    wr32(sp0 - 0x74u, 1u);
    wr32(sp0 - 0x78u, 4u);
    wr32(sp0 - 0x7cu, 1u);
    t13 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x80u, t13);
    g->esp = sp0 - 0x70u;
    cow_thiscall(g, rd32(rd32(t13) + 0xfcu), rd32(t13), 4, t13, 1u, 4u, 1u);
    COW_AT(1001dee0)
    wr32(sp0 - 0x74u, 1u);
    wr32(sp0 - 0x78u, 1u);
    wr32(sp0 - 0x7cu, 1u);
    t14 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x80u, t14);
    g->esp = sp0 - 0x70u;
    cow_thiscall(g, rd32(rd32(t14) + 0xfcu), rd32(t14), 4, t14, 1u, 1u, 1u);
    COW_AT(1001def8)
    wr32(sp0 - 0x74u, 0x144u);
    t15 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x78u, t15);
    g->eax = t15;
    g->esp = sp0 - 0x70u;
    t16 = cow_thiscall(g, rd32(rd32(t15) + 0x130u), rd32(t15), 2, t15, 0x144u);
    eax = t16;
    COW_AT(1001df0f)
    wr32(sp0 - 0x74u, 0x1cu);
    wr32(sp0 - 0x78u, sp0 - 0x70u);
    wr32(sp0 - 0x7cu, 2u);
    wr32(sp0 - 0x80u, 5u);
    g->edx = sp0 - 0x70u;
    g->esp = sp0 - 0x70u;
    cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, 2u, sp0 - 0x70u, 0x1cu);
    t17 = g->edx;
    edx = t17;
    COW_AT(1001df25)
    wr32(sp0 - 0x74u, 1u);
    wr32(sp0 - 0x78u, 0xfu);
    t18 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x7cu, t18);
    g->esp = sp0 - 0x70u;
    cow_thiscall(g, rd32(rd32(t18) + 0xc8u), rd32(t18), 3, t18, 0xfu, 1u);
    COW_AT(1001df3a)
    wr32(sp0 - 0x74u, 1u);
    wr32(sp0 - 0x78u, 7u);
    t19 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x7cu, t19);
    g->esp = sp0 - 0x70u;
    cow_thiscall(g, rd32(rd32(t19) + 0xc8u), rd32(t19), 3, t19, 7u, 1u);
    COW_AT(1001df50)
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1001dd00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1001ddf2u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001de08u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001de20u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001de38u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001de50u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001de68u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001de80u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001de98u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001deb0u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001dec8u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001dee0u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001def8u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001df0fu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001df25u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0x78u, sp0 - 0x70u);
        (void)sp0;
        return 1;
    }
    case 0x1001df3au:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001df50u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1001dd00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1001dd00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
