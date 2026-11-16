/* f_0x1007a440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007a440(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg1 < 0) goto L_1007a4b1;
    if ((int32_t)arg1 >= 2304) goto L_1007a4b1;
    if ((int32_t)arg2 < 0) goto L_1007a4b1;
    if ((int32_t)arg2 > 2304) goto L_1007a4b1;
    if ((int32_t)arg2 < (int32_t)arg1) goto L_1007a4b1;
    if (arg3 == 0u) goto L_1007a4b1;
    if ((int32_t)arg1 >= (int32_t)arg2)
    {
        edx = in_edx;
        loc_4 = 0u;
        goto L_1007a4a7;
    }
    eax = in_eax;
    edx = in_edx;
    edi = arg1;
L_1007a47d: ;
    if (rd32(COW_IMG(0x10480af0u) + edi * 4u) == 0u) goto L_1007a494;
    esi = rd32(COW_IMG(0x10480af0u) + edi * 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x1008b380u), esi, 1, arg3);
    t2 = g->edx;
    if (t1 != 0u)
    {
        edx = t2;
        goto L_1007a4a3;
    }
    eax = t1;
    edx = t2;
L_1007a494: ;
    if ((int32_t)(edi + 1u) < (int32_t)arg2)
    {
        edi = edi + 1u;
        goto L_1007a47d;
    }
    g->edx = edx;
    return 0u;
L_1007a4a3: ;
    loc_4 = esi;
L_1007a4a7: ;
    g->edx = edx;
    return loc_4;
L_1007a4b1: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007a440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007a440(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
