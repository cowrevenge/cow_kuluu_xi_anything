/* f_0x10253e10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10253e10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = (rd32(rd32(sp0 + 8u)) + 1u) >> 1u;
    if ((t1 & 1u) != 1u)
    {
        eax = t1 & 1u;
        ecx = arg3 + (t1 >> 1u);
        edx = rd32(sp0 + 8u);
        esi = arg3 + t1;
        edi = t1;
    }
    else
    {
        ecx = arg3 + (t1 >> 1u);
        edx = rd32(sp0 + 8u);
        esi = arg3 + t1;
        edi = t1;
        t2 = rd8(ecx);
        t3 = rd8(COW_IMG(0x1033ce44u) + (rd8(ecx) >> 4u));
        wr8(esi - 1u, (uint8_t)t3);
        eax = (t2 >> 4u & 0xffffff00u) | t3;
        esi = esi - 1u;
    }
    if (ecx > arg3)
    {
L_10253e47: ;
        wr8(sp0 + 8u, rd8(ecx - 1u));
        t4 = (uint8_t)rd32(sp0 + 8u);
        wr8(esi - 1u, rd8(COW_IMG(0x1033ce44u) + (t4 & 0xfu)));
        t5 = rd8(COW_IMG(0x1033ce44u) + (t4 >> 4u));
        wr8(esi - 2u, (uint8_t)t5);
        if (ecx - 1u > arg3)
        {
            eax = (t4 >> 4u & 0xffffff00u) | t5;
            ecx = ecx - 1u;
            esi = esi - 2u;
            goto L_10253e47;
        }
        eax = (t4 >> 4u & 0xffffff00u) | t5;
    }
    wr32(edx + 4u, edi);
    wr8(edx + 9u, 4u);
    wr8(edx + 0xbu, 4u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 4u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10253e10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10253e10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
