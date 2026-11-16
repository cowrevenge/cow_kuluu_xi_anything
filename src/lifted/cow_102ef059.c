/* f_0x102ef059 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102ef059(Guest* g)
{
    uint32_t eax;
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

    if ((int32_t)arg2 >= 0)
    {
        esi = rd32(arg1);
        goto L_102ef07e;
    }
    esi = rd32(arg1);
    if (rd32(esi + 0x6cu) == 0u) goto L_102ef074;
    if ((int32_t)rd32(esi + 0x68u) < 3)
    {
        eax = arg1;
        edx = in_edx;
        goto L_102ef079;
    }
L_102ef074: ;
    g->eax = arg1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall_cdecl(g, rd32(esi + 8u), arg2, 1, arg1);
    t2 = g->edx;
    eax = t1;
    edx = t2;
L_102ef079: ;
    wr32(esi + 0x6cu, rd32(esi + 0x6cu) + 1u);
    g->edx = edx;
    return eax;
L_102ef07e: ;
    if ((int32_t)rd32(esi + 0x68u) < (int32_t)arg2)
    {
        eax = arg1;
        edx = in_edx;
    }
    else
    {
        g->eax = arg1;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t3 = cow_thiscall_cdecl(g, rd32(esi + 8u), arg2, 1, arg1);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ef059(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ef059(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
