/* f_0x1027e4b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1027e4b0(Guest* g)
{
    double d11;
    double d6;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1027e4c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1027e4c7;
    case 0x1027e4dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1027e4db;
    case 0x1027e4fau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); x0 = ST(0); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1027e4fa;
    case 0x1027e51au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); x0 = ST(0); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1027e51a;
    case 0x1027e524u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1027e524;
    case 0x1027e540u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1027e540;
    case 0x1027e559u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1027e559;
    case 0x1027e563u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1027e563;
    case 0x1027e574u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1027e574;
    default: break;
    }
#endif

    COW_AT(1027e4b0)
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x1027e460u), 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    COW_AT(1027e4c7)
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 8u;
        t4 = cow_cdecl(g, COW_IMG(0x102857f0u), 1, arg1 + 0x20u);
        t5 = g->ecx;
        if ((uint8_t)t4 != 0u)
        {
            eax = t4;
            ecx = t5;
    COW_AT(1027e4db)
            d6 = fr(g, fr(g, fr(g, (double)(int32_t)arg2 * (double)rdf32(arg1 + 4u)) * (double)rdf32(COW_IMG(0x1032a42cu))) + (double)rdf32(arg1 + 0x10u));
            d7 = (double)rdf32(arg1 + 0xcu);
            wrf32(arg1 + 0x10u, (float)d6);
            if ((cow_fsw(g, d6, d7, 1u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d6, d7, 1u) & 0x4100u;
                x0 = d6;
                goto L_1027e51a;
            }
            x0 = d6;
    COW_AT(1027e4fa)
            t8 = rd32(arg1 + 0xcu);
            wr32(rd32(arg1 + 0x14u) + 0xacu, t8);
            t9 = rd32(arg1 + 0x1cu);
            wr32(arg1 + 8u, 0u);
            t10 = rd32(t9 + 0x24u);
            wr32(arg1 + 0xcu, t10);
            eax = t10;
            ecx = t8;
            edx = t9;
L_1027e540: ;
    COW_AT(1027e540)
            wr32(arg1 + 0x10u, 0u);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_call_regs(g, COW_IMG(0x10285800u), eax, g->ecx, g->edx, 1, 2, arg1 + 0x20u, 0u);
            t15 = g->ecx;
            t16 = g->edx;
            if (rd32(arg1 + 0x60u) == 0u)
            {
                ecx = t15;
            }
            else
            {
                eax = rd32(arg1 + 0x60u);
                edx = t16;
    COW_AT(1027e559)
                t17 = rd32(arg1 + 0x64u);
                g->esp = sp0 - 8u;
                cow_thiscall_cdecl(g, eax, t17, 2, arg1, t17);
                t18 = g->ecx;
                ecx = t18;
            }
L_1027e563: ;
    COW_AT(1027e563)
            t19 = rd32(arg1 + 0x18u);
            g->esp = sp0 - 8u;
            cow_call_regs(g, COW_IMG(0x1027ddb0u), t19, ecx, arg2, 1, 2, t19, arg2);
        }
    }
    COW_AT(1027e574)
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_1027e51a: ;
    COW_AT(1027e51a)
    d11 = (double)rdf32(arg1 + 8u);
    if (!(x0 < d11)) goto L_1027e563;
    COW_AT(1027e524)
    t12 = rd32(arg1 + 8u);
    wr32(rd32(arg1 + 0x14u) + 0xacu, t12);
    t13 = rd32(arg1 + 0x1cu);
    wr32(arg1 + 8u, 0u);
    t14 = rd32(t13 + 0x24u);
    wr32(arg1 + 0xcu, t14);
    eax = t12;
    ecx = t13;
    edx = t14;
    goto L_1027e540;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1027e4b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1027e4c7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027e4dbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg1 + 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1027e4fau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg1 + 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1027e51au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg1 + 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1027e524u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg1 + 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1027e540u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        g->edi = arg1 + 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1027e559u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027e563u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027e574u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1027e4b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1027e4b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
