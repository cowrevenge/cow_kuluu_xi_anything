/* f_0x1026f180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1026f180(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)rd32(rd32(arg1 + 0xa8u) + 0x44u) <= 0) goto L_1026f1c2;
    eax = rd32(arg1 + 0xa8u);
    ecx = rd32(rd32(arg1 + 0xa8u) + 0x44u);
    edx = in_edx;
    esi = 0u;
    edi = 0u;
L_1026f19d: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x10279890u), 2, eax, esi);
    t2 = g->edx;
    if (rd32(t1) != 0xb0001u)
    {
        ecx = rd32(t1);
        edx = t2;
        goto L_1026f1b6;
    }
    eax = t1;
    ecx = rd32(t1);
    edx = t2;
    if (edi == arg2) goto L_1026f1c4;
    edi = edi + 1u;
L_1026f1b6: ;
    if ((int32_t)(esi + 1u) < (int32_t)rd32(rd32(arg1 + 0xa8u) + 0x44u))
    {
        eax = rd32(arg1 + 0xa8u);
        esi = esi + 1u;
        goto L_1026f19d;
    }
L_1026f1c2: ;
    eax = 0u;
L_1026f1c4: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026f180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1026f180(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
