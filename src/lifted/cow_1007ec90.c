/* f_0x1007ec90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007ec90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 532u);

    if (rd32(rd32(COW_IMG(0x103551e0u)) + 4u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
        wr32(sp0 - 0x204u, 0xc4u);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0x200u;
        t10 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xc4u);
        t11 = g->ecx;
        t12 = g->edx;
        wr32(sp0 - 0x204u, t10);
        wr32(sp0 - 0x208u, 0x13fu);
        wr32(sp0 - 0x20cu, 9u);
        g->ecx = t11;
        g->esp = sp0 - 0x204u;
        t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x13fu);
        t14 = g->ecx;
        wr32(sp0 - 0x208u, t13);
        wr32(sp0 - 0x20cu, sp0 - 0x200u);
        g->edx = sp0 - 0x200u;
        g->esp = sp0 - 0x1f8u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x200u, t13, rd32(sp0 - 0x204u), rd32(sp0 - 0x200u), rd32(sp0 - 0x1fcu));
        t15 = g->edx;
        edx = t15;
        esi = in_esi;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
        wr32(sp0 - 0x204u, in_esi);
        wr32(sp0 - 0x208u, eax);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x204u;
        t1 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), self, 1, eax);
        t2 = g->ecx;
        t3 = g->edx;
        if ((int32_t)t1 >= 1)
        {
            eax = t1;
            ecx = t2;
            edx = t3;
            esi = t1;
            if ((int32_t)esi > 100)
            {
                esi = 0x64u;
            }
        }
        else
        {
            eax = t1;
            ecx = t2;
            edx = t3;
            esi = 1u;
        }
        wr32(sp0 - 0x208u, esi);
        wr32(sp0 - 0x20cu, 0xc4u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x204u;
        t4 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0xc4u, esi);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(sp0 - 0x208u, esi);
        wr32(sp0 - 0x20cu, 0x13eu);
        wr32(sp0 - 0x210u, 9u);
        g->edx = t6;
        g->esp = sp0 - 0x208u;
        t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x13eu);
        t8 = g->edx;
        wr32(sp0 - 0x20cu, t7);
        wr32(sp0 - 0x210u, sp0 - 0x200u);
        g->edx = t8;
        g->esp = sp0 - 0x1fcu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x200u, t7, rd32(sp0 - 0x208u), rd32(sp0 - 0x204u), rd32(sp0 - 0x200u));
        t9 = g->edx;
        edx = t9;
        esi = rd32(sp0 - 0x204u);
    }
    wr32(sp0 - 0x204u, sp0 - 0x200u);
    g->edx = edx;
    g->esp = sp0 - 0x200u;
    cow_thiscall(g, COW_IMG(0x10129e80u), rd32(COW_IMG(0x10578158u)), 1, sp0 - 0x200u);
    t16 = g->edx;
    g->esi = esi;
    g->edx = t16;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007ec90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007ec90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
