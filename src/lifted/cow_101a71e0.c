/* f_0x101a71e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101a71e0(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = rd32(self + 0x14u);
    g->edx = in_edx;
    t1 = rd32(self + 0x14u);
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x101a8a90u), in_eax, g->ecx, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
    }
    else
    {
        eax = t2;
        edx = t4;
        t5 = (eax & 0xffffff00u) | rd8(self + 0x24u);
        g->edx = edx;
        t6 = rd32(self + 0x14u);
        g->esp = sp0 - 4u;
        t7 = cow_call_regs(g, COW_IMG(0x101a88d0u), t5, t6, g->edx, 0, 1, t5);
        t8 = g->ecx;
        t9 = g->edx;
        eax = t7;
        ecx = t8;
        edx = t9;
    }
    t10 = rd8(self + 0x24u);
    wr8(self + 0x24u, (uint8_t)(t10 + 1u));
    if ((uint8_t)(t10 + 1u) < 0xau)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)(t10 + 1u);
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t10 + 1u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | (uint8_t)(t10 + 1u);
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t10 + 1u);
        wr8(self + 0x24u, 0u);
    }
    t11 = (ecx & 0xffffff00u) | rd8(self + 0x24u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t12 = cow_call_regs(g, COW_IMG(0x101a8820u), eax, rd32(self + 0x14u), g->edx, 0, 1, t11);
    t13 = g->edx;
    if ((uint8_t)t12 == 0u)
    {
        eax = t12;
        edx = t13;
        t14 = (edx & 0xffffff00u) | rd8(self + 0x24u);
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x101a87a0u), eax, rd32(self + 0x14u), t14, 0, 1, t14);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a71e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101a71e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
