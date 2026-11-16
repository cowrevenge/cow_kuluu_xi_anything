/* f_0x101777a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101777a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = rd32(COW_IMG(0x1065c4d4u));
    wr32(COW_IMG(0x1065c4ccu), 1u);
    wr32(COW_IMG(0x10621c80u), t1);
    if ((int32_t)t1 >= 1800)
    {
        eax = t1;
        t2 = eax - 0x708u & 0xfffu;
        wr32(COW_IMG(0x10621c7cu), t2);
        eax = t2;
    }
    else
    {
        eax = t1;
        wr32(COW_IMG(0x10621c7cu), 0u);
    }
    g->eax = eax;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, rd32(COW_IMG(0x10329400u)), self, 0);
    wr32(COW_IMG(0x10631f1cu), t3);
    edi = COW_IMG(0x10631f38u);
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101777a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101777a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
