/* f_0x10325f1b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10325f1b(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_20;
    uint32_t loc_8;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 64u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10325f3eu: self = g->ecx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_10325f3e;
    case 0x10325f42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_10325f42;
    case 0x10325f50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10325f50;
    case 0x10325f56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10325f56;
    case 0x10325f60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10325f60;
    case 0x10325f66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10325f66;
    case 0x10325f81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10325f81;
    case 0x10325f8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10325f8c;
    case 0x10325f8fu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10325f8f;
    case 0x10325f94u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10325f94;
    case 0x10325fbcu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10325fbc;
    case 0x10325fc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_10325fc1;
    case 0x10325fc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_10325fc6;
    case 0x10325fccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_10325fcc;
    case 0x10325fd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_10325fd6;
    default: break;
    }
#endif

    COW_AT(10325f1b)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 8u, 0x404eu);
    t1 = rd32(sp0 + 0xcu);
    wr32(t1, 0u);
    wr32(t1 + 4u, 0u);
    wr32(t1 + 8u, 0u);
    if (arg2 == 0u)
    {
        eax = arg2;
        ecx = self;
        ebx = t1;
        edi = in_edi;
    }
    else
    {
        ebx = t1;
    COW_AT(10325f3e)
        wr32(sp0 - 0x20u, in_edi);
        wr32(sp0 + 0xcu, arg2);
        eax = arg2;
        ecx = self;
        edx = 0u;
        loc_20 = in_edi;
L_10325f42: ;
    COW_AT(10325f42)
        esi = ebx;
        edi = sp0 - 0x14u;
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(sp0 - 0x24u, ebx);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t2 = cow_cdecl(g, COW_IMG(0x10325ec0u), 1, rd32(sp0 - 0x24u));
        t3 = g->ecx;
        t4 = g->edx;
        eax = t2;
        ecx = t3;
        edx = t4;
    COW_AT(10325f50)
        wr32(sp0 - 0x28u, ebx);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        cow_cdecl(g, COW_IMG(0x10325ec0u), 1, ebx);
        t5 = g->ecx;
        t6 = g->edx;
        ecx = t5;
        edx = t6;
    COW_AT(10325f56)
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        wr32(sp0 - 0x30u, ebx);
        g->eax = sp0 - 0x14u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t7 = cow_cdecl(g, COW_IMG(0x10325e62u), 6, ebx, sp0 - 0x14u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
        t8 = g->ecx;
        t9 = g->edx;
        eax = t7;
        ecx = t8;
        edx = t9;
    COW_AT(10325f60)
        wr32(sp0 - 0x34u, ebx);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        cow_cdecl(g, COW_IMG(0x10325ec0u), 1, ebx);
        t10 = g->ecx;
        t11 = g->edx;
        ecx = t10;
        edx = t11;
    COW_AT(10325f66)
        t12 = rd32(sp0 - 0x10u);
        wr32(sp0 - 0x10u, 0u);
        t13 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0xcu, 0u);
        t14 = (uint32_t)(int8_t)rd8(rd32(sp0 + 4u));
        wr32(sp0 - 0x14u, t14);
        wr32(sp0 - 0x38u, sp0 - 0x14u);
        wr32(sp0 - 0x3cu, ebx);
        g->eax = sp0 - 0x14u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t15 = cow_cdecl(g, COW_IMG(0x10325e62u), 6, ebx, sp0 - 0x14u, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), sp0 - 0x14u, rd32(sp0 - 0x28u));
        t16 = g->ecx;
        t17 = g->edx;
        eax = t15;
        ecx = t16;
        edx = t17;
    COW_AT(10325f81)
        t18 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t18 + 1u);
        t19 = rd32(sp0 + 0xcu);
        wr32(sp0 + 0xcu, t19 - 1u);
        if (t19 != 1u)
        {
            loc_20 = rd32(sp0 - 0x20u);
            goto L_10325f42;
        }
    COW_AT(10325f8c)
        edi = rd32(sp0 - 0x20u);
    }
L_10325f8f: ;
    COW_AT(10325f8f)
    t20 = rd32(ebx + 8u);
    if (t20 != 0u) goto L_10325fbc;
    COW_AT(10325f94)
    t21 = rd32(ebx + 4u);
    wr32(ebx + 8u, t21 >> 0x10u);
    t22 = rd32(sp0 - 8u);
    wr32(sp0 - 8u, t22 + 0xfff0u);
    t23 = rd32(ebx) >> 0x10u | t21 << 0x10u;
    t24 = rd32(ebx);
    wr32(ebx + 4u, t23);
    wr32(ebx, t24 << 0x10u);
    eax = t24 << 0x10u;
    ecx = t21 << 0x10u;
    goto L_10325f8f;
L_10325fbc: ;
    COW_AT(10325fbc)
    edx = 0u;
    loc_8 = rd32(sp0 - 8u);
L_10325fc1: ;
    COW_AT(10325fc1)
    t25 = rd32(ebx + 8u);
    if ((t25 & 0x8000u) != 0u) goto L_10325fd6;
    COW_AT(10325fc6)
    wr32(sp0 - 0x20u, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t26 = cow_cdecl(g, COW_IMG(0x10325ec0u), 1, ebx);
    t27 = g->edx;
    eax = t26;
    edx = t27;
    COW_AT(10325fcc)
    t28 = rd32(sp0 - 8u);
    wr32(sp0 - 8u, t28 + 0xffffu);
    ecx = rd32(sp0 - 0x20u);
    loc_8 = t28 + 0xffffu;
    goto L_10325fc1;
L_10325fd6: ;
    COW_AT(10325fd6)
    t29 = rd32(sp0 - 0x1cu);
    wr16(ebx + 0xau, (uint16_t)loc_8);
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = t29;
    g->edi = edi;
    g->ebp = rd32(sp0 - 4u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10325f1b(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10325f3eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        self = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->eax = arg2;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10325f42u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10325f50u:
    {
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
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10325f56u:
    {
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
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10325f60u:
    {
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
        g->esp = sp0 - 0x30u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10325f66u:
    {
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
        g->esp = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10325f81u:
    {
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
        g->esp = sp0 - 0x3cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, sp0 - 0x14u);
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10325f8cu:
    {
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
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, sp0 - 0x14u);
        wr32(sp0 - 0x2cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10325f8fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10325f94u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10325fbcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10325fc1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = 0x8000u;
        (void)sp0;
        return 1;
    }
    case 0x10325fc6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = 0x8000u;
        (void)sp0;
        return 1;
    }
    case 0x10325fccu:
    {
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
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        g->esi = 0x8000u;
        (void)sp0;
        return 1;
    }
    case 0x10325fd6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10325f1b(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10325f1b(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
