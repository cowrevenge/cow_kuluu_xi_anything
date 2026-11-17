/* f_0x10298200 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10298200(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;

    wr32(rd32(COW_IMG(0x1099d200u)) + 0x144u, 0u);
    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0x13cu) == 0u)
    {
        eax = rd32(COW_IMG(0x1099d200u)) + 0x13cu;
        g->esp = sp0;
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x5cu), rd32(COW_IMG(0x1066941cu)), 6, rd32(COW_IMG(0x1066941cu)), 0xafc80u, 0x208u, 2u, 0u, eax);
    }
    t1 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x13cu);
    g->eax = rd32(COW_IMG(0x1066941cu));
    g->edx = t1;
    t2 = rd32(COW_IMG(0x1066941cu));
    t3 = rd32(rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0;
    t4 = cow_thiscall(g, rd32(t3 + 0x14cu), t3, 4, t2, 0u, t1, 0xcu);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        edx = t6;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        g->edx = edx;
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x102858b0u), 1, COW_IMG(0x103bbc54u));
        t7 = g->edx;
        edx = t7;
    }
    g->eax = rd32(COW_IMG(0x1066941cu));
    g->edx = edx;
    t8 = rd32(COW_IMG(0x1066941cu));
    t9 = rd32(rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0;
    t10 = cow_thiscall(g, rd32(t9 + 0x130u), t9, 2, t8, 2u);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 != 0u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x102858b0u), 1, COW_IMG(0x103bbc38u));
    }
    t13 = rd32(COW_IMG(0x1099d200u)) + 0x140u;
    t14 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x13cu);
    g->esp = sp0;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1099d200u)) + 0x13cu)) + 0x2cu), t13, 5, t14, 0u, 0u, t13, 0x2000u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10298200(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10298200(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
