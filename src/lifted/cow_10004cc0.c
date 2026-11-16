/* f_0x10004cc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10004cc0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x10455afcu)) == 0u)
    {
        edx = in_edx;
        goto L_10004cec;
    }
    eax = rd32(COW_IMG(0x10455afcu));
    if (eax == 1u) goto L_10004cd0;
    eax = eax - 1u;
    return eax & 0xffffff00u;
L_10004cd0: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, COW_IMG(0x10004bd0u), self, 2, arg1, arg2);
    t1 = g->ecx;
    t2 = g->edx;
    g->edx = t2;
    cow_thiscall_cdecl(g, COW_IMG(0x10312800u), t1, 4, arg2, 0x2fu, arg1, arg2);
    t3 = g->edx;
    edx = t3;
L_10004cec: ;
    t4 = rd32(COW_IMG(0x10455b04u)) + 1u;
    wr32(COW_IMG(0x10455b04u), t4);
    g->edx = edx;
    return (t4 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10004cc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10004cc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
