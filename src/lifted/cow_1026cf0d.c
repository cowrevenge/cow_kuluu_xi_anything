/* f_0x1026cf0d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1026cf0d(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x18u, 0xccccccccu);
    wr32(sp0 - 0x14u, 0xccccccccu);
    wr32(sp0 - 0x10u, 0xccccccccu);
    wr32(sp0 - 0xcu, 0xccccccccu);
    wr32(sp0 - 8u, 0xccccccccu);
    wr32(sp0 - 0x20u, sp0 - 0x14u);
    wr32(sp0 - 0x24u, arg1 + 0x4034u);
    g->eax = sp0 - 0x14u;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x1026d0eau), arg1 + 0x4034u, 3, arg1 + 0x4034u, sp0 - 0x14u, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int32_t)t1 < 0)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        eax = 0xffffffffu;
    }
    else
    {
        ecx = t2;
        wr32(sp0 - 0x18u, 0xccccccccu);
        wr32(sp0 - 0x20u, 0x10u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0xccccccccu);
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x10316dd0u), 3, 0xccccccccu, 0u, 0x10u);
        wr32(sp0 - 0x20u, 4u);
        wr32(sp0 - 0x24u, sp0 + 8u);
        wr32(sp0 - 0x28u, 0xccccccd0u);
        g->ecx = sp0 + 8u;
        g->edx = 0xccccccd0u;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x103169e0u), 5, 0xccccccd0u, sp0 + 8u, 4u, in_esi, 0xccccccccu);
        t4 = g->ecx;
        t5 = g->edx;
        wr16(0xccccccccu, 2u);
        t6 = (t4 & 0xffff0000u) | (uint16_t)arg3;
        wr32(sp0 - 0x20u, t6);
        g->eax = 0xccccccccu;
        g->edx = t5;
        g->esp = sp0 - 0x1cu;
        t7 = cow_thiscall(g, rd32(COW_IMG(0x10329480u)), t6, 1, t6);
        t8 = g->ecx;
        t9 = g->edx;
        t10 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
        wr16(0xccccccceu, (uint16_t)t10);
        wr32(sp0 - 0xcu, 1u);
        wr32(sp0 - 0x20u, sp0 - 0x14u);
        wr32(sp0 - 0x24u, arg1 + 0x2cu);
        g->edx = 0xccccccccu;
        g->esp = sp0 - 0x18u;
        cow_thiscall_cdecl(g, COW_IMG(0x1026d1d4u), arg1 + 0x2cu, 3, arg1 + 0x2cu, sp0 - 0x14u, in_esi);
        t11 = g->ecx;
        t12 = g->edx;
        eax = 0u;
        ecx = t11;
        edx = t12;
    }
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026cf0d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1026cf0d(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
