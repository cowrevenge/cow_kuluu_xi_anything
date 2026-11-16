/* f_0x10131030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10131030(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 24u);

    t1 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, in_esi);
    if (rd8(t1) == 0u)
    {
        eax = 0u;
        goto L_10131094;
    }
    ecx = t1;
    edx = (in_edx & 0xffffff00u) | rd8(t1);
L_10131050: ;
    wr32(sp0 - 0x10u, sp0 - 8u);
    wr32(sp0 - 0x14u, sp0 + 4u);
    g->ecx = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t2 = cow_cdecl(g, COW_IMG(0x1011ce80u), 3, sp0 + 4u, sp0 - 8u, in_esi);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 - 0x14u, t2);
    g->edx = t4;
    g->esp = sp0 - 0xcu;
    t5 = cow_call_regs(g, COW_IMG(0x1011d840u), t2, g->ecx, g->edx, 1, 2, t2, sp0 - 8u);
    t6 = g->edx;
    if (rd32(sp0 + 4u) == ecx)
    {
        eax = t5;
        goto L_1013108f;
    }
    edx = t6;
    esi = ecx;
    ecx = rd32(sp0 + 4u);
    if ((int32_t)(ecx - esi) > 2)
    {
        eax = ecx - esi;
        goto L_1013108f;
    }
    eax = ecx - esi;
    if ((int32_t)eax <= 1) goto L_1013108a;
    if (rd8(ecx + 1u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
        goto L_1013108f;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
L_1013108a: ;
    if (rd8(ecx) != 0u) goto L_10131050;
L_1013108f: ;
    eax = (eax & 0xffff0000u) | rd16(sp0 - 8u);
L_10131094: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10131030(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10131030(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
