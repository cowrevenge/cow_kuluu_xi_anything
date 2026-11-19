/* f_0x1026e060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1026e060(Guest* g)
{
    double d26;
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 64u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1026e06eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1026e06e;
    case 0x1026e07du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026e07d;
    case 0x1026e089u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026e089;
    case 0x1026e092u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026e092;
    case 0x1026e09cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026e09c;
    case 0x1026e0a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026e0a8;
    case 0x1026e0aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026e0ae;
    case 0x1026e0b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026e0b8;
    case 0x1026e0c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026e0c4;
    case 0x1026e0cau: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026e0ca;
    case 0x1026e0ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026e0dd;
    case 0x1026e0e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026e0e3;
    case 0x1026e0f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026e0f1;
    case 0x1026e0f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026e0f9;
    case 0x1026e104u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026e104;
    case 0x1026e107u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026e107;
    default: break;
    }
#endif

    COW_AT(1026e060)
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, arg3);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1026e06e)
    wr32(sp0 - 0x18u, arg1);
    wr32(sp0 - 0x1cu, COW_IMG(0x103b10d8u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b10d8u), arg1);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(1026e07d)
    if ((int32_t)arg2 >= 1)
    {
    COW_AT(1026e089)
        wr32(sp0 - 0x14u, arg3 + 1u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t7 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t8 = g->ecx;
        t9 = g->edx;
        eax = t7;
        ecx = t8;
        edx = t9;
    COW_AT(1026e092)
        wr32(sp0 - 0x18u, COW_IMG(0x103b10ccu));
        g->ebx = arg2;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b10ccu), rd32(sp0 - 0x14u));
        t10 = g->ecx;
        t11 = g->edx;
        ecx = t10;
        edx = t11;
    COW_AT(1026e09c)
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, arg2);
        wr32(sp0 - 0x24u, arg1 + 0x5cu);
        g->eax = arg1 + 0x5cu;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t12 = cow_cdecl(g, COW_IMG(0x10274ad0u), 3, arg1 + 0x5cu, arg2, 0u);
        t13 = g->ecx;
        t14 = g->edx;
        eax = t12;
        ecx = t13;
        edx = t14;
    COW_AT(1026e0a8)
        wr32(sp0 - 0x28u, arg3 + 1u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t15 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
        t16 = g->ecx;
        t17 = g->edx;
        eax = t15;
        ecx = t16;
        edx = t17;
    COW_AT(1026e0ae)
        wr32(sp0 - 0x2cu, COW_IMG(0x103b10c0u));
        g->ebx = arg2;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t18 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b10c0u), rd32(sp0 - 0x28u));
        t19 = g->edx;
        eax = t18;
        edx = t19;
    COW_AT(1026e0b8)
        wr32(sp0 - 0x30u, 0u);
        wr32(sp0 - 0x34u, arg2);
        wr32(sp0 - 0x38u, arg1 + 0x68u);
        g->eax = eax;
        g->ecx = arg1 + 0x68u;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        t20 = cow_cdecl(g, COW_IMG(0x1027b4a0u), 3, arg1 + 0x68u, arg2, 0u);
        t21 = g->ecx;
        t22 = g->edx;
        eax = t20;
        ecx = t21;
        edx = t22;
    COW_AT(1026e0c4)
        wr32(sp0 - 0x3cu, arg3 + 1u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t23 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u));
        t24 = g->ecx;
        t25 = g->edx;
        eax = t23;
        ecx = t24;
        edx = t25;
    COW_AT(1026e0ca)
        d26 = (double)rdf32(arg1 + 0x78u);
        wrf64(sp0 - 0x18u, d26);
        wr32(sp0 - 0x1cu, COW_IMG(0x103b10b0u));
        g->ebx = arg2;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t27 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b10b0u), cow_dlo(d26));
        t28 = g->ecx;
        t29 = g->edx;
        eax = t27;
        ecx = t28;
        edx = t29;
    COW_AT(1026e0dd)
        wr32(sp0 - 0x20u, arg3 + 1u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t30 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103b10b0u), rd32(sp0 - 0x18u));
        t31 = g->ecx;
        t32 = g->edx;
        eax = t30;
        ecx = t31;
        edx = t32;
    COW_AT(1026e0e3)
        wr32(sp0 - 0x24u, arg1 + 0x1cu);
        wr32(sp0 - 0x28u, COW_IMG(0x103b10a0u));
        g->ebx = arg2;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t33 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b10a0u), arg1 + 0x1cu);
        t34 = g->ecx;
        t35 = g->edx;
        eax = t33;
        ecx = t34;
        edx = t35;
    COW_AT(1026e0f1)
        if ((int32_t)arg2 >= 2)
        {
    COW_AT(1026e0f9)
            wr32(sp0 - 0x14u, arg3 + 2u);
            wr32(sp0 - 0x18u, arg2);
            wr32(sp0 - 0x1cu, arg1 + 0x1cu);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0;
            t36 = cow_cdecl(g, COW_IMG(0x10280d30u), 7, arg1 + 0x1cu, arg2, arg3 + 2u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
            t37 = g->edx;
            eax = t36;
            edx = t37;
    COW_AT(1026e104)
        }
    }
    COW_AT(1026e107)
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1026e060(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1026e06eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = arg3;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1026e07du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1cu;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1026e089u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1026e092u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x14u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1026e09cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1026e0a8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x24u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1026e0aeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x28u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1026e0b8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x2cu;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1026e0c4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x38u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1026e0cau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x3cu;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1026e0ddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1cu;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg3 + 1u;
        g->edi = arg1;
        wr32(sp0 - 0x1cu, COW_IMG(0x103b10b0u));
        (void)sp0;
        return 1;
    }
    case 0x1026e0e3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x20u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1026e0f1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x28u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg1 + 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1026e0f9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg1 + 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1026e104u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1026e107u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1026e060(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1026e060(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
