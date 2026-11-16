/* f_0x100087d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_100087d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 != 6u) goto L_100087e3;
    if (arg2 == 0u) goto L_100087e3;
    ecx = (self & 0xffffff00u) | 1u;
L_100087e5: ;
    if (rd32(rd32(COW_IMG(0x10455c20u)) + 0x88u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10455c20u)) + 0x88u);
        if ((uint8_t)ecx == 0u)
        {
            loc_4 = eax;
            g->edx = rd32(eax);
            t2 = rd32(eax);
            g->esp = sp0;
            cow_thiscall(g, rd32(t2 + 0x20u), ecx, 1, loc_4);
            t3 = g->edx;
            edx = t3;
        }
        else
        {
            loc_4 = eax;
            g->edx = in_edx;
            g->esp = sp0;
            cow_thiscall(g, rd32(rd32(eax) + 0x1cu), rd32(eax), 1, loc_4);
            t1 = g->edx;
            edx = t1;
        }
    }
    if (rd32(rd32(COW_IMG(0x10455c20u)) + 0x90u) != 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10455c20u)) + 0x90u);
        g->esp = sp0;
        cow_thiscall(g, rd32(rd32(eax) + 0x1cu), rd32(eax), 1, eax);
    }
    return;
L_100087e3: ;
    ecx = self & 0xffffff00u;
    goto L_100087e5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100087d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100087d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
