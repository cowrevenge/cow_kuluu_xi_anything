/* f_0x101a87a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101a87a0(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    if (rd8(sp0 + 4u) < 0xau)
    {
        eax = (in_eax & 0xffffff00u) | rd8(sp0 + 4u);
        cf = rd8(sp0 + 4u) < 0xau;
        of = ((rd8(sp0 + 4u) ^ 0xau) & (rd8(sp0 + 4u) ^ (uint8_t)(rd8(sp0 + 4u) - 0xau))) >> 7u;
        ecx = (self & 0xffffff00u) | 0x14u;
        { /* imul cl */ { int32_t p = (int32_t)(int8_t)eax * (int32_t)(int8_t)(uint8_t)ecx; eax = (eax & 0xFFFF0000u) | ((uint32_t)p & 0xFFFFu); cf = of = p != (int32_t)(int8_t)p; } }
        wr8(sp0 + 4u, (uint8_t)eax);
        edx = in_edx;
        ebx = 0u;
        esi = 0u;
L_101a87b9: ;
        t1 = (edx & 0xffffff00u) | (uint8_t)((uint8_t)ebx + rd8(sp0 + 4u));
        t2 = esi + rd32(self + 4u) + 4u;
        g->ebx = ebx;
        g->edx = t1;
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x101a7530u), rd32(self + 4u), g->ecx, g->edx, 1, 2, t2, t1);
        t3 = g->edx;
        if ((int32_t)(esi + 0x50u) < 1600)
        {
            edx = t3;
            ebx = ebx + 1u;
            esi = esi + 0x50u;
            goto L_101a87b9;
        }
    }
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a87a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101a87a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
