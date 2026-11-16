/* f_0x101c7660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101c7660(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((int32_t)(rd32(self + 8u) * rd32(self + 4u)) <= 0)
    {
        edx = in_edx;
    }
    else
    {
        ebp = rd32(self + 8u) * rd32(self + 4u);
        ebx = 1u;
        esi = 0u;
        loc_8 = 0u;
L_101c7687: ;
        if ((int32_t)ebx >= (int32_t)ebp)
        {
            edx = rd32(esi * 4u + rd32(self + 0xcu));
            edi = rd32(self + 0xcu);
            eax = 0u;
        }
        else
        {
            edx = rd32(esi * 4u + rd32(self + 0xcu));
            edi = rd32(self + 0xcu);
            eax = rd32(edi + esi * 4u + 4u);
            ebx = ebx + 1u;
            esi = esi + 1u;
        }
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t1 = cow_stdcall(g, COW_IMG(0x101c75e0u), 2, edx, eax);
        t2 = g->edx;
        wr32(edi + loc_8, t1);
        if ((int32_t)(esi + 1u) < (int32_t)ebp)
        {
            ebx = ebx + 1u;
            esi = esi + 1u;
            loc_8 = loc_8 + 4u;
            goto L_101c7683;
        }
        edx = t2;
    }
    g->edx = edx;
    return 0u;
L_101c7683: ;
    goto L_101c7687;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c7660(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c7660(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
