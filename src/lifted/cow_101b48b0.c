/* f_0x101b48b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101b48b0(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(self + 0x21e0u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x21e0u);
        if (rd32(self + 0x21d0u) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            ecx = rd32(self + 0x21d0u);
            g->eax = rd32(ecx);
            g->edx = in_edx;
            t1 = rd32(ecx);
            g->esp = sp0 - 8u;
            t2 = cow_thiscall(g, rd32(t1), ecx, 1, 3u);
            t3 = g->edx;
            eax = t2;
            edx = t3;
        }
        t4 = rd32(self + 0x21d8u);
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x101907d0u), g->eax, t4, edx, 1, 1, t4);
        t5 = g->edx;
        edx = t5;
    }
    wr8(self + 0x21e0u, 0u);
    wr32(self + 0x21ccu, 0u);
    wr32(self + 4u, 0u);
    edi = self + 0x3c8u;
    eax = 0u;
    ecx = 0x780u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b48b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101b48b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
