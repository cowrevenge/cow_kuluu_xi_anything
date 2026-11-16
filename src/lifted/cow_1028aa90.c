/* f_0x1028aa90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1028aa90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;

    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0x994u) != 0u)
    {
        eax = rd32(COW_IMG(0x1099d200u));
    }
    else
    {
        eax = rd32(COW_IMG(0x1099d200u));
        wr32(eax + 0x994u, 0xc00u);
        if (rd32(rd32(COW_IMG(0x1099d200u)) + 0x2d0u) == 0u)
        {
            eax = rd32(COW_IMG(0x1099d200u));
            t3 = rd32(eax + 0x994u) * 2u;
            g->esp = sp0 - 4u;
            cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x60u), rd32(COW_IMG(0x1066941cu)), 6, rd32(COW_IMG(0x1066941cu)), t3, 0x208u, 0x65u, 0u, eax + 0x990u);
        }
        else
        {
            eax = rd32(COW_IMG(0x1099d200u));
            ecx = rd32(rd32(COW_IMG(0x1099d200u)) + 0x2d0u);
            t1 = rd32(eax + 0x994u) * 2u;
            g->esp = sp0 - 4u;
            t2 = cow_cdecl(g, COW_IMG(0x10312fd6u), 1, t1);
            wr32(rd32(COW_IMG(0x1099d200u)) + 0x99cu, t2);
        }
        eax = rd32(COW_IMG(0x1099d200u));
    }
    if (rd32(eax + 0x2d0u) != 0u) goto L_1028ab5e;
    t4 = rd32(eax + 0x990u);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x154u), rd32(COW_IMG(0x1066941cu)), 3, rd32(COW_IMG(0x1066941cu)), t4, 0u);
    t5 = rd32(COW_IMG(0x1099d200u)) + 0x99cu;
    t6 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x994u) * 2u;
    t7 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x990u);
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1099d200u)) + 0x990u)) + 0x2cu), t7, 5, t7, 0u, t6, t5, 0x2000u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x998u, 0u);
    return;
L_1028ab5e: ;
    wr32(eax + 0x998u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028aa90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1028aa90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
