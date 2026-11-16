/* f_0x101da6a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101da6a0(Guest* g)
{
    uint32_t eax;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        g->edx = in_edx;
        t1 = rd32(COW_IMG(0x10663428u));
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x1020a730u), t1, 0);
        t2 = g->edx;
        t3 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
        g->eax = rd32(COW_IMG(0x104dfd98u));
        g->ecx = t3;
        g->edx = t2;
        t4 = rd32(COW_IMG(0x104dfd98u));
        t5 = cow_cdecl(g, COW_IMG(0x101d7280u), 1, t3);
        t6 = g->ecx;
        t7 = g->edx;
        g->ecx = t6;
        g->edx = t7;
        g->esp = sp0 - 0xcu;
        t8 = cow_call_regs(g, COW_IMG(0x10103f90u), t5, g->ecx, g->edx, 1, 2, t1 + 0x7ecu, t5);
        t9 = g->ecx;
        t10 = g->edx;
        g->edx = t10;
        g->esp = sp0 - 0x14u;
        t11 = cow_call_regs(g, COW_IMG(0x10103fa0u), t8, g->ecx, g->edx, 1, 2, t1 + 0x7ecu, arg1);
        t12 = g->edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x101d7780u), rd32(COW_IMG(0x10663448u)), 2, arg1, t1 + 0x7ecu);
        wr16(rd32(COW_IMG(0x10663428u)) + 0x8c8u, (uint16_t)arg1);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101da6a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101da6a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
