/* f_0x1026d1d4 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1026d1d4(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 8u, 0xccccccccu);
    t1 = rd32(arg1 + 0x4000u);
    wr32(sp0 - 8u, t1);
    if ((t1 + 1u & 0x3ffu) != rd32(arg1 + 0x4004u))
    {
        loc_8 = t1;
        wr32(arg2 + 0xcu, 0u);
        wr32(sp0 - 0x10u, 0x10u);
        wr32(sp0 - 0x14u, arg2);
        t8 = arg1 + loc_8 * 0x10u;
        wr32(sp0 - 0x18u, t8);
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x103169e0u), 5, t8, arg2, 0x10u, in_esi, loc_8);
        t9 = rd32(sp0 - 8u) + 1u & 0x3ffu;
        wr32(sp0 - 8u, t9);
        wr32(arg1 + 0x4000u, t9);
        eax = 0u;
        ecx = t9;
        edx = t9;
    }
    else
    {
        ecx = t1;
        edx = t1 + 1u & 0x3ffu;
        wr32(sp0 - 0x10u, COW_IMG(0x103b0fb8u));
        g->eax = arg1;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t2 = cow_thiscall(g, rd32(COW_IMG(0x103291f0u)), ecx, 1, COW_IMG(0x103b0fb8u));
        t3 = g->ecx;
        t4 = g->edx;
        g->cf = 0u;
        g->pf = PARITY(0u);
        g->af = 0u;
        g->zf = 1u;
        g->sf = 0u;
        g->of = 0u;
        g->ecx = t3;
        g->edx = t4;
        t5 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
        t6 = g->ecx;
        t7 = g->edx;
        eax = 0xffffffffu;
        ecx = t6;
        edx = t7;
    }
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    t10 = rd32(sp0 - 0xcu);
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    g->esi = t10;
    g->ebp = rd32(sp0 - 4u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026d1d4(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1026d1d4(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
