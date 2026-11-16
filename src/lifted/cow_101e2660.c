/* f_0x101e2660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101e2660(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd8(arg1 + 5u);
    wr8(self + 5u, (uint8_t)t1);
    t2 = rd16(arg1 + 6u);
    wr16(self + 6u, (uint16_t)t2);
    t3 = rd16(arg1 + 8u);
    t4 = rd16(self + 8u);
    wr16(self + 8u, (uint16_t)(((t3 ^ t4) & 0x7fffu) ^ t4));
    eax = 8u;
    edx = self + 0xau;
    esi = ((t3 ^ t4) & 0x7fffu) ^ (((in_edx | t1 | t2) & 0xffff0000u) | t4);
L_101e269a: ;
    t5 = rd16(arg1 + edx - self);
    wr16(edx, (uint16_t)t5);
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = edx + 2u;
        esi = (esi & 0xffff0000u) | t5;
        goto L_101e269a;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e2660(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e2660(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
