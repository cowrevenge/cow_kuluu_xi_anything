/* f_0x10204c60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10204c60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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

    if (rd32(COW_IMG(0x10664494u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664494u));
        if (rd32(COW_IMG(0x104dfd98u)) != 0u)
        {
            eax = rd32(COW_IMG(0x104dfd98u));
            if (rd8(COW_IMG(0x10485824u)) & 1u)
            {
                g->edx = in_edx;
                g->esp = sp0 - 4u;
                cow_thiscall(g, COW_IMG(0x1020a600u), ecx, 1, 1u);
                t1 = g->ecx;
                t2 = g->edx;
                t3 = rd32(COW_IMG(0x10664494u)) + 0x5cu;
                g->edx = t2;
                t4 = rd32(COW_IMG(0x10664494u));
                t5 = cow_cdecl(g, COW_IMG(0x10107e70u), 2, t3, 0x8020u);
                t6 = g->edx;
                g->edx = t6;
                t7 = rd32(COW_IMG(0x10664494u));
                t8 = cow_call_regs(g, COW_IMG(0x1020a9d0u), t5, t7, g->edx, 0, 6, 1u, t3, 1u, 0u, 0u, 0u);
                t9 = g->ecx;
                t10 = g->edx;
                g->edx = t10;
                g->esp = sp0 - 8u;
                t11 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0x13u);
                t12 = g->edx;
                g->esp = sp0 - 4u;
                cow_stdcall(g, COW_IMG(0x10150cc0u), 2, t11, 2u);
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10204c60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10204c60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
