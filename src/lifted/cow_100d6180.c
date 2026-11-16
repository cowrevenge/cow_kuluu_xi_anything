/* f_0x100d6180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100d6180(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((rd32(self + 0x840u) >> 8u & 1u << (arg1 & 0x1fu) & 0x3ffu) != 0u)
    {
        eax = rd32(self + 0x840u) >> 8u & 1u << (arg1 & 0x1fu);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x840u) >> 8u & 1u << (arg1 & 0x1fu);
        if (arg1 != 0u) goto L_100d61ac;
        eax = 0x32307721u;
L_100d61b6: ;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall(g, COW_IMG(0x100cef00u), self, 3, eax, 0u, 0u);
        t2 = g->edx;
        if ((uint8_t)t1 == 0u)
        {
            eax = t1;
            edx = t2;
        }
        else
        {
            edx = t2;
            t3 = rd32(self + 0x840u) | (1u << (arg1 & 0x1fu) & 0x3ffu) << 8u;
            wr32(self + 0x840u, t3);
            eax = t3;
        }
    }
L_100d61dd: ;
    g->edx = edx;
    return eax;
L_100d61ac: ;
    if (arg1 != 1u)
    {
        edx = in_edx;
        goto L_100d61dd;
    }
    eax = 0x32317721u;
    goto L_100d61b6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d6180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d6180(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
