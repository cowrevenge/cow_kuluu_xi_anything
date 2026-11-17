/* f_0x100289f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100289f0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    edx = in_edx;
    esi = arg1;
    edi = 0u;
L_100289fd: ;
    if (rd32(esi + 4u) == 0u)
    {
        eax = rd32(esi + 4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t1 = cow_thiscall(g, COW_IMG(0x10028b90u), esi, 0);
        t2 = g->edx;
        if ((int32_t)edi >= (int32_t)t1)
        {
            edx = t2;
        }
        else
        {
            eax = t1;
            edx = t2;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t3 = cow_thiscall(g, COW_IMG(0x10028b90u), esi, 0);
            t4 = g->edx;
            edx = t4;
            edi = t3;
        }
    }
    if (rd32(esi + 0x10u) != arg2)
    {
        esi = rd32(esi + 0x10u);
        goto L_100289fd;
    }
    g->edx = edx;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100289f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100289f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
