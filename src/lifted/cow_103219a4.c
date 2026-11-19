/* f_0x103219a4 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_103219a4(Guest* g)
{
    uint32_t eax;
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
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x103219b6u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_103219b6;
    case 0x103219bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_103219bb;
    case 0x103219deu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_103219de;
    case 0x103219e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_103219e0;
    case 0x10321a08u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10321a08;
    case 0x10321a10u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10321a10;
    default: break;
    }
#endif

    COW_AT(103219a4)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, self);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(COW_IMG(0x109f9434u)) != 0u)
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
    }
    else
    {
    COW_AT(103219b6)
        g->eax = in_eax;
        g->esp = sp0 - 0x18u;
        t1 = cow_fastcall(g, COW_IMG(0x103156d7u), self, in_edx, 0);
        t2 = g->ecx;
        t3 = g->edx;
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    COW_AT(103219bb)
    wr32(sp0 - 0x1cu, 0x104u);
    wr32(sp0 - 0x20u, COW_IMG(0x109b28d0u));
    wr32(sp0 - 0x24u, 0u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, rd32(COW_IMG(0x10329150u)), 3, 0u, COW_IMG(0x109b28d0u), 0x104u);   /* kernel32.dll!GetModuleFileNameA */
    t4 = g->ecx;
    t5 = g->edx;
    t6 = rd32(COW_IMG(0x109f9424u));
    wr32(COW_IMG(0x109b26f4u), COW_IMG(0x109b28d0u));
    if (rd8(t6) == 0u)
    {
        ecx = t4;
        edx = t5;
        edi = COW_IMG(0x109b28d0u);
    }
    else
    {
        eax = t6;
        ecx = t4;
        edx = t5;
    COW_AT(103219de)
        edi = eax;
    }
    COW_AT(103219e0)
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    wr32(sp0 - 0x20u, sp0 - 8u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, edi);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10321a3du), g->eax, g->ecx, edx, 1, 7, edi, 0u, 0u, sp0 - 8u, sp0 - 0xcu, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t7 = g->edx;
    t8 = rd32(sp0 - 0xcu) + rd32(sp0 - 8u) * 4u;
    wr32(sp0 - 0x30u, t8);
    g->eax = t8;
    t9 = rd32(sp0 - 8u);
    g->esp = sp0 - 0x24u;
    t10 = cow_call_regs(g, COW_IMG(0x10312fd6u), g->eax, t9, t7, 1, 3, t8, rd32(sp0 - 0x2cu), 0u);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 != 0u)
    {
        ecx = t11;
        edx = t12;
        esi = t10;
        goto L_10321a10;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(10321a08)
    wr32(sp0 - 0x1cu, 8u);
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, COW_IMG(0x1031680cu), 1, 8u);
    rt_fatal(g, COW_IMG(0x10321a0au), "no way on");
L_10321a10: ;
    COW_AT(10321a10)
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    wr32(sp0 - 0x20u, sp0 - 8u);
    t13 = esi + rd32(sp0 - 8u) * 4u;
    wr32(sp0 - 0x24u, t13);
    wr32(sp0 - 0x28u, esi);
    wr32(sp0 - 0x2cu, edi);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10321a3du), g->eax, g->ecx, edx, 1, 7, edi, esi, t13, sp0 - 8u, sp0 - 0xcu, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t14 = rd32(sp0 - 8u);
    wr32(COW_IMG(0x109b26dcu), esi);
    t15 = rd32(sp0 - 0x14u);
    t16 = rd32(sp0 - 0x18u);
    wr32(COW_IMG(0x109b26d8u), t14 - 1u);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t15;
    g->edi = t16;
    g->ebp = rd32(sp0 - 4u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_103219a4(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x103219b6u:
    {
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, self);
        wr32(sp0 - 8u, self);
        (void)sp0;
        return 1;
    }
    case 0x103219bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, self);
        (void)sp0;
        return 1;
    }
    case 0x103219deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103219e0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10321a08u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 - 8u);
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10321a10u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 - 8u);
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_103219a4(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_103219a4(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
