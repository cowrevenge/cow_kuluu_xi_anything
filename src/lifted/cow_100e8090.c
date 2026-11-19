/* f_0x100e8090 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e8090(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100e80a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100e80a1;
    case 0x100e80acu: ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100e80ac;
    case 0x100e80b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100e80b1;
    case 0x100e80b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100e80b4;
    case 0x100e80c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100e80c3;
    case 0x100e80c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100e80c8;
    case 0x100e80cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100e80cb;
    case 0x100e80dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100e80df;
    case 0x100e80fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_100e80fc;
    case 0x100e8105u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_100e8105;
    case 0x100e810bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100e810b;
    case 0x100e8117u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100e8117;
    case 0x100e8135u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100e8135;
    case 0x100e813au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100e813a;
    case 0x100e8144u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100e8144;
    case 0x100e814au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100e814a;
    default: break;
    }
#endif

    COW_AT(100e8090)
    t1 = rd32(rd32(COW_IMG(0x104df770u)) + 0x7f4u);
    g->ecx = t1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x10310ed5u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    ecx = t2;
    edx = t3;
    COW_AT(100e80a1)
    if ((int32_t)arg1 >= 0) goto L_100e80b4;
    COW_AT(100e80ac)
    g->eax = arg1;
    g->esp = sp0;
    t4 = cow_call_regs(g, COW_IMG(0x100e8160u), g->eax, g->ecx, edx, 1, 0);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(100e80b1)
    g->esi = in_esi;
    g->edx = edx;
    return eax & 0xffffff00u;
L_100e80b4: ;
    COW_AT(100e80b4)
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x808u) == 0u)
    {
        eax = rd32(COW_IMG(0x104df770u));
        goto L_100e80cb;
    }
    eax = rd32(COW_IMG(0x104df770u));
    ecx = rd32(rd32(COW_IMG(0x104df770u)) + 0x808u);
    COW_AT(100e80c3)
    g->eax = eax;
    g->esp = sp0;
    t6 = cow_call_regs(g, COW_IMG(0x100e8160u), g->eax, g->ecx, edx, 1, 0);
    t7 = g->edx;
    eax = t6;
    edx = t7;
    COW_AT(100e80c8)
    g->esi = in_esi;
    g->edx = edx;
    return eax & 0xffffff00u;
L_100e80cb: ;
    COW_AT(100e80cb)
    if (rd32(eax + 0x7fcu) == rd32(eax + 0x800u))
    {
        ecx = eax + 0x800u;
        edx = rd32(eax + 0x7fcu);
        goto L_100e810b;
    }
    ecx = eax + 0x800u;
    edx = rd32(eax + 0x7fcu);
    COW_AT(100e80df)
    g->eax = eax + 0x7f4u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t8 = cow_cdecl(g, COW_IMG(0x100f1280u), 3, 0xau, COW_IMG(0x100f19d0u), COW_IMG(0x100f19f0u));
    t9 = g->ecx;
    t10 = g->edx;
    edx = t10;
    loc_8 = ecx;
    ecx = t9;
    loc_c = eax + 0x7f4u;
    eax = t8;
    COW_AT(100e80fc)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t11 = cow_cdecl(g, COW_IMG(0x100f1340u), 4, eax, loc_c, loc_8, COW_IMG(0x100e8090u));
    t12 = g->edx;
    eax = t11;
    edx = t12;
    COW_AT(100e8105)
    g->esi = in_esi;
    g->edx = edx;
    return eax & 0xffffff00u;
L_100e810b: ;
    COW_AT(100e810b)
    t13 = rd32(eax + 0x7f8u);
    g->eax = t13;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t14 = cow_stdcall(g, COW_IMG(0x10310490u), 0);
    t15 = g->edx;
    eax = t14;
    edx = t15;
    COW_AT(100e8117)
    wr32(rd32(COW_IMG(0x104df770u)) + 0x804u, eax);
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x804u) != 0u)
    {
        eax = rd32(COW_IMG(0x104df770u));
        goto L_100e814a;
    }
    eax = rd32(COW_IMG(0x104df770u));
    ecx = rd32(rd32(COW_IMG(0x104df770u)) + 0x804u);
    COW_AT(100e8135)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0;
    t16 = cow_call_regs(g, COW_IMG(0x100e8160u), g->eax, g->ecx, edx, 1, 0);
    t17 = g->ecx;
    t18 = g->edx;
    eax = t16;
    ecx = t17;
    edx = t18;
    COW_AT(100e813a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t19 = cow_cdecl(g, COW_IMG(0x100182e0u), 1, 0x7d3u);
    t20 = g->edx;
    eax = t19;
    edx = t20;
    COW_AT(100e8144)
    g->esi = in_esi;
    g->edx = edx;
    return eax & 0xffffff00u;
L_100e814a: ;
    COW_AT(100e814a)
    wr32(eax + 0x5f0u, 2u);
    g->esi = in_esi;
    g->edx = edx;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100e8090(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100e80a1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100e80acu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e80b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100e80b4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100e80c3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100e80c8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100e80cbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100e80dfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100e80fcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 4u, COW_IMG(0x100e8090u));
        (void)sp0;
        return 1;
    }
    case 0x100e8105u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100e810bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100e8117u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100e8135u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100e813au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100e8144u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100e814au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100e8090(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100e8090(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
