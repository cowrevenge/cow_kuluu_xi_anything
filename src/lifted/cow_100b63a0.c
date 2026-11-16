/* f_0x100b63a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b63a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = (self & 0xffff0000u) | rd16(self + 0x256u);
    t2 = rd8((uint16_t)t1 + rd32(self + 0x20u) + 1u);
    if (t2 == 0u)
    {
        eax = t2;
        ecx = t1;
        edx = rd32(self + 0x20u);
        goto L_100b63e2;
    }
    eax = t2;
    ecx = t1;
    if (eax == 1u)
    {
        eax = eax - 1u;
        if (rd8(COW_IMG(0x104855a8u)) == 0u)
        {
            wr16(self + 0x256u, (uint16_t)(ecx + 2u));
        }
    }
L_100b63d8: ;
    wr8(self + 0x25au, 1u);
    return;
L_100b63e2: ;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t3 = cow_stdcall(g, COW_IMG(0x100a0510u), 0);
    if ((uint8_t)t3 == 0u) goto L_100b63d8;
    wr8(COW_IMG(0x104855a8u), 1u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 2u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b63a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b63a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
