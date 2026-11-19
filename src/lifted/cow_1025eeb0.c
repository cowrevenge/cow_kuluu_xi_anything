/* f_0x1025eeb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_1025eeb0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1025eebeu: ecx = g->ecx; in_ebx = g->ebx; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_1025eebe;
    case 0x1025eec5u: ecx = g->ecx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; zf = g->zf; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_1025eec5;
    case 0x1025eedbu: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; in_edi = g->edi; zf = g->zf; goto E_1025eedb;
    case 0x1025eee4u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; zf = g->zf; goto E_1025eee4;
    case 0x1025eee6u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; zf = g->zf; goto E_1025eee6;
    case 0x1025eefcu: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; zf = g->zf; goto E_1025eefc;
    default: break;
    }
#endif

    COW_AT(1025eeb0)
    wr32(sp0 - 0x14u, in_esi);
    if (arg1 != 0u) goto L_1025eec5;
    COW_AT(1025eebe)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return arg1;
L_1025eec5: ;
    COW_AT(1025eec5)
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    wr32(sp0 - 0x20u, arg1);
    g->eax = arg1;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, rd32(rd32(self) + 0x58u), self, 3, arg1, sp0 - 0x10u, sp0 - 8u);
    t2 = g->ecx;
    if ((int32_t)t1 >= 0)
    {
        eax = t1;
        ecx = t2;
        zf = t1 == 0u;
        goto L_1025eee4;
    }
    COW_AT(1025eedb)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x14u);
    g->edi = in_edi;
    return 0u;
L_1025eee4: ;
    COW_AT(1025eee4)
    if (!zf) goto L_1025eefc;
    COW_AT(1025eee6)
    t3 = rd32(self + 0x54u);
    wr32(sp0 - 0x18u, t3);
    g->esp = sp0 - 0x14u;
    cow_stdcall(g, rd32(COW_IMG(0x103291c4u)), 1, t3);   /* kernel32.dll!SetEvent */
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x14u);
    g->edi = in_edi;
    return 1u;
L_1025eefc: ;
    COW_AT(1025eefc)
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, self + 0x68u);
    t4 = rd32(self + 0x54u);
    wr32(sp0 - 0x24u, t4);
    t5 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x28u, t5);
    t6 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x2cu, t6);
    t7 = rd32(self + 0x24u);
    wr32(sp0 - 0x30u, t7);
    t8 = rd32(self + 0x20u);
    wr32(sp0 - 0x34u, t8);
    t9 = rd32(self + 0x18u);
    wr32(sp0 - 0x38u, t9);
    g->eax = t9;
    g->esp = sp0 - 0x1cu;
    t10 = cow_thiscall(g, rd32(rd32(rd32(self + 0x18u)) + 0x10u), t6, 7, t9, t8, t7, t6, t5, t4, self + 0x68u);
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x14u);
    g->edi = in_edi;
    return (int32_t)t10 >= 0;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1025eeb0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1025eebeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1025eec5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        ecx = g->ecx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1025eedbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1025eee4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1025eee6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1025eefcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 - 0x10u);
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1025eeb0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1025eeb0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
