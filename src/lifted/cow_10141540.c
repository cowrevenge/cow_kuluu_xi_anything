/* f_0x10141540 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10141540(Guest* g)
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
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 92u);

    if (rd32(COW_IMG(0x1057876cu)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x1057876cu));
        g->esp = sp0 - 0x40u;
        t1 = cow_call_regs(g, COW_IMG(0x101597f0u), in_eax, ecx, in_edx, 1, 0);
        if (t1 == 0u)
        {
            eax = t1;
            edx = t1;
        }
        else
        {
            eax = t1;
            edx = t1;
            wr32(sp0 - 0x44u, in_edi);
            t2 = rd32(sp0 - 0x40u);
            t3 = rd8(COW_IMG(0x103d3c84u));
            edi = sp0 - 0x3fu;
            eax = 0u;
            ecx = 0xfu;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
            wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
            t4 = rd32(edx + 4u);
            wr32(sp0 - 0x48u, t4);
            wr32(sp0 - 0x4cu, COW_IMG(0x1036f5e8u));
            wr32(sp0 - 0x50u, sp0 - 0x40u);
            g->ecx = t4;
            g->edx = sp0 - 0x40u;
            g->esp = sp0 - 0x3cu;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x1036f5e8u), t4, in_edi, (t2 & 0xffffff00u) | t3);
            t5 = g->ecx;
            t6 = g->edx;
            wr32(sp0 - 0x54u, 0u);
            wr32(sp0 - 0x58u, sp0 - 0x40u);
            g->edx = t6;
            g->esp = sp0 - 0x50u;
            t7 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0x40u, 0u);
            t8 = g->edx;
            eax = t7;
            edx = t8;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10141540(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10141540(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
