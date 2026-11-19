/* f_0x100f7790 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100f7790(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
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
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f77bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_100f77bb;
    case 0x100f77d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f77d5;
    case 0x100f77d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f77d8;
    case 0x100f77ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f77eb;
    case 0x100f7803u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f7803;
    case 0x100f780cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f780c;
    case 0x100f7812u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f7812;
    case 0x100f7817u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f7817;
    case 0x100f782fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f782f;
    case 0x100f7848u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f7848;
    case 0x100f7861u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f7861;
    case 0x100f788fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f788f;
    case 0x100f78a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_100f78a8;
    default: break;
    }
#endif

    COW_AT(100f7790)
    edi = COW_IMG(0x109f7640u);
    eax = 0u;
    ecx = 0x12u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(COW_IMG(0x104df90cu), COW_IMG(0x109f7640u));
    g->eax = eax;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100f1300u), 4, 3u, 0u, COW_IMG(0x100f18d0u), COW_IMG(0x100f1900u));
    eax = t1;
    COW_AT(100f77bb)
    t2 = rd32(COW_IMG(0x104df90cu));
    wr32(t2 + 0x30u, eax);
    if (rd32(rd32(COW_IMG(0x104df90cu)) + 0x30u) != 0u)
    {
        eax = rd32(rd32(COW_IMG(0x104df90cu)) + 0x30u);
        ecx = t2;
        edx = rd32(COW_IMG(0x104df90cu));
        goto L_100f77d8;
    }
    eax = rd32(rd32(COW_IMG(0x104df90cu)) + 0x30u);
    COW_AT(100f77d5)
    g->edi = in_edi;
    return eax & 0xffffff00u;
L_100f77d8: ;
    COW_AT(100f77d8)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t3 = cow_cdecl(g, COW_IMG(0x100f1300u), 4, 1u, 0u, COW_IMG(0x100f16b0u), COW_IMG(0x100f16c0u));
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(100f77eb)
    wr32(rd32(COW_IMG(0x104df90cu)) + 0x40u, eax);
    if (rd32(rd32(COW_IMG(0x104df90cu)) + 0x40u) != 0u)
    {
        eax = rd32(COW_IMG(0x104df90cu));
        ecx = rd32(rd32(COW_IMG(0x104df90cu)) + 0x40u);
        goto L_100f7812;
    }
    eax = rd32(COW_IMG(0x104df90cu));
    ecx = rd32(rd32(COW_IMG(0x104df90cu)) + 0x40u);
    COW_AT(100f7803)
    t5 = rd32(eax + 0x30u);
    g->eax = eax;
    g->esp = sp0;
    t6 = cow_cdecl(g, COW_IMG(0x100f10c0u), 1, t5);
    eax = t6;
    COW_AT(100f780c)
    g->edi = in_edi;
    return eax & 0xffffff00u;
L_100f7812: ;
    COW_AT(100f7812)
    g->eax = eax;
    g->esp = sp0;
    t7 = cow_stdcall(g, COW_IMG(0x100f1920u), 0);
    eax = t7;
    COW_AT(100f7817)
    t8 = rd32(COW_IMG(0x104df90cu));
    wr32(t8 + 0x18u, eax);
    t9 = rd32(rd32(COW_IMG(0x104df90cu)) + 0x18u);
    t10 = rd32(COW_IMG(0x104df90cu));
    wr32(t10, t9);
    g->eax = t10;
    g->esp = sp0;
    t11 = cow_stdcall(g, COW_IMG(0x100f1910u), 0);
    eax = t11;
    COW_AT(100f782f)
    t12 = rd32(COW_IMG(0x104df90cu));
    wr32(t12 + 0x1cu, eax);
    t13 = rd32(rd32(COW_IMG(0x104df90cu)) + 0x1cu);
    t14 = rd32(COW_IMG(0x104df90cu));
    wr32(t14 + 4u, t13);
    g->eax = t14;
    g->esp = sp0;
    t15 = cow_stdcall(g, COW_IMG(0x100f1940u), 0);
    eax = t15;
    COW_AT(100f7848)
    t16 = rd32(COW_IMG(0x104df90cu));
    wr32(t16 + 0x20u, eax);
    t17 = rd32(rd32(COW_IMG(0x104df90cu)) + 0x20u);
    t18 = rd32(COW_IMG(0x104df90cu));
    wr32(t18 + 8u, t17);
    g->eax = t18;
    g->esp = sp0;
    t19 = cow_stdcall(g, COW_IMG(0x100f1930u), 0);
    eax = t19;
    COW_AT(100f7861)
    wr32(rd32(COW_IMG(0x104df90cu)) + 0x24u, eax);
    t20 = rd32(rd32(COW_IMG(0x104df90cu)) + 0x24u);
    t21 = rd32(COW_IMG(0x104df90cu));
    wr32(t21 + 0xcu, t20);
    t22 = rd32(COW_IMG(0x104df90cu));
    wr32(t22 + 0x28u, 0xffffffffu);
    t23 = rd32(COW_IMG(0x104df90cu));
    wr32(t23 + 0x10u, 0xffffffffu);
    g->eax = 0xffffffffu;
    g->esp = sp0;
    t24 = cow_stdcall(g, COW_IMG(0x100f1950u), 0);
    eax = t24;
    COW_AT(100f788f)
    t25 = rd32(COW_IMG(0x104df90cu));
    wr32(t25 + 0x2cu, eax);
    t26 = rd32(rd32(COW_IMG(0x104df90cu)) + 0x2cu);
    t27 = rd32(COW_IMG(0x104df90cu));
    wr32(t27 + 0x14u, t26);
    g->eax = t27;
    g->esp = sp0;
    t28 = cow_stdcall(g, COW_IMG(0x100f1670u), 0);
    eax = t28;
    COW_AT(100f78a8)
    wr32(rd32(COW_IMG(0x104df90cu)) + 0x3cu, eax);
    t29 = rd32(rd32(COW_IMG(0x104df90cu)) + 0x3cu);
    t30 = rd32(COW_IMG(0x104df90cu));
    wr32(t30 + 0x38u, t29);
    g->edi = in_edi;
    return (t30 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f7790(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f77bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x100f77d5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100f77d8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100f77ebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100f7803u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100f780cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f7812u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100f7817u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100f782fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100f7848u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100f7861u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100f788fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100f78a8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100f7790(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f7790(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
