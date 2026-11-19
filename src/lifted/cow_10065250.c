/* f_0x10065250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10065250(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
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
    cow_frame(g, sp0, 1564u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1006527du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x610u); in_ebp = rd32(sp0 - 0x60cu); in_ebx = rd32(sp0 - 0x608u); g->ebp = rd32(sp0 - 0x60cu); g->ebx = rd32(sp0 - 0x608u); g->esi = rd32(sp0 - 0x610u); goto E_1006527d;
    case 0x10065292u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 0x610u); in_ebp = rd32(sp0 - 0x60cu); in_ebx = rd32(sp0 - 0x608u); g->ebp = rd32(sp0 - 0x60cu); g->ebx = rd32(sp0 - 0x608u); g->esi = rd32(sp0 - 0x610u); goto E_10065292;
    case 0x100652a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_100652a1;
    case 0x100652adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_100652ad;
    case 0x100652afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; edi = g->edi; goto E_100652af;
    case 0x100652cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100652ca;
    case 0x100652e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100652e1;
    default: break;
    }
#endif

    COW_AT(10065250)
    wr32(sp0 - 0x608u, in_ebx);
    wr32(sp0 - 0x60cu, in_ebp);
    wr32(sp0 - 0x610u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x610u;
    cow_thiscall(g, COW_IMG(0x10067e50u), sp0 - 0x604u, 0);
    t1 = g->edx;
    wr32(sp0 - 0x614u, arg1);
    g->eax = arg1;
    t2 = cow_fastcall(g, COW_IMG(0x10067e70u), sp0 - 0x604u, t1, 1, arg1);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        ebx = t2;
        goto L_10065292;
    }
    eax = t2;
    edx = t4;
    COW_AT(1006527d)
    g->esp = sp0 - 0x610u;
    cow_stdcall(g, COW_IMG(0x10067e60u), 0);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_10065292: ;
    COW_AT(10065292)
    wr32(sp0 - 0x614u, in_edi);
    wr32(sp0 - 0x618u, 0xcu);
    g->eax = eax;
    g->esp = sp0 - 0x60cu;
    t5 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0xcu, in_edi, in_esi);
    t6 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        edx = t6;
    COW_AT(100652ad)
        edi = 0u;
    }
    else
    {
        eax = t5;
        edx = t6;
    COW_AT(100652a1)
        wr32(eax, 0u);
        wr32(eax + 4u, 0u);
        wr32(eax + 8u, 0u);
        edi = eax;
    }
    COW_AT(100652af)
    wr32(sp0 - 0x618u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x614u;
    t7 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, 0u);
    t8 = g->edx;
    wr32(sp0 - 0x618u, t7);
    t9 = cow_fastcall(g, COW_IMG(0x100644c0u), edi, t8, 1, t7);
    t10 = g->edx;
    if ((int32_t)ebx <= 1)
    {
        eax = t9;
        edx = t10;
        goto L_100652e1;
    }
    eax = t9;
    edx = t10;
    esi = 1u;
L_100652ca: ;
    COW_AT(100652ca)
    wr32(sp0 - 0x618u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x614u;
    t11 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, esi);
    t12 = g->edx;
    wr32(sp0 - 0x618u, t11);
    g->edx = t12;
    t13 = cow_call_regs(g, COW_IMG(0x10064510u), t11, edi, g->edx, 0, 1, t11);
    t14 = g->edx;
    if ((int32_t)(esi + 1u) < (int32_t)ebx)
    {
        eax = t13;
        edx = t14;
        esi = esi + 1u;
        goto L_100652ca;
    }
    eax = t13;
    edx = t14;
L_100652e1: ;
    COW_AT(100652e1)
    wr32(sp0 - 0x618u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x614u;
    t15 = cow_thiscall(g, COW_IMG(0x1006baa0u), self + 0x100u, 1, edi);
    t16 = g->edx;
    cow_stdcall(g, COW_IMG(0x10067e60u), 0);
    g->ebx = rd32(sp0 - 0x608u);
    g->esi = rd32(sp0 - 0x610u);
    g->edi = rd32(sp0 - 0x614u);
    g->ebp = rd32(sp0 - 0x60cu);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10065250(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1006527du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x610u);
        in_ebp = rd32(sp0 - 0x60cu);
        in_ebx = rd32(sp0 - 0x608u);
        g->esp = sp0 - 0x610u;
        (void)sp0;
        return 1;
    }
    case 0x10065292u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x610u);
        in_ebp = rd32(sp0 - 0x60cu);
        in_ebx = rd32(sp0 - 0x608u);
        g->esp = sp0 - 0x610u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100652a1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x614u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100652adu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x614u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100652afu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x614u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100652cau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x614u;
        (void)sp0;
        return 1;
    }
    case 0x100652e1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x614u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10065250(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10065250(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
