/* f_0x100dc270 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100dc270(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x104ae8acu)) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x104ae8acu));
        g->esp = sp0;
        cow_call_regs(g, COW_IMG(0x100dc2d0u), g->eax, g->ecx, in_edx, 1, 0);
        t1 = g->edx;
        edx = t1;
    }
    wr32(COW_IMG(0x104ae8acu), COW_IMG(0x10492e18u));
    edi = COW_IMG(0x10492e18u);
    eax = 0u;
    ecx = 0x6bf2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t2 = rd32(COW_IMG(0x104ae8acu)) + 0x1afc0u;
    g->eax = t2;
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x100dc3b0u), g->eax, ecx, edx, 1, 1, t2);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        eax = t3;
        goto L_100dc2b3;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    g->eax = eax;
    g->esp = sp0;
    t6 = cow_call_regs(g, COW_IMG(0x100dc2d0u), g->eax, g->ecx, edx, 1, 0);
    return t6 & 0xffffff00u;
L_100dc2b3: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100dc270(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100dc270(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
