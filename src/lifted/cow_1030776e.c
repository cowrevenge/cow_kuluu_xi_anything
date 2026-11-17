/* f_0x1030776e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1030776e(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;

    t1 = rd32(in_eax + 0x1a4u);
    g->esp = sp0 - 8u;
    t2 = cow_thiscall_cdecl(g, rd32(rd32(in_eax + 4u)), rd32(in_eax + 4u), 3, in_eax, 1u, 0x7fcu);
    wr32(t1 + 0x28u, t2 + 0x3fcu);
    eax = t2 + 0x3fcu;
    ecx = 0u;
    edx = 0u;
    esi = t2 + 0x3fcu;
    edi = 0u;
L_10307796: ;
    wr32(eax + ecx * 4u, edx);
    wr32(esi, edi);
    if ((int32_t)(ecx + 1u) < 16)
    {
        ecx = ecx + 1u;
        edx = edx + 1u;
        esi = esi - 4u;
        edi = edi - 1u;
        goto L_10307796;
    }
    ecx = ecx + 1u;
    edx = edx + 1u;
    if ((int32_t)ecx < 48)
    {
        esi = eax - (ecx << 2u);
L_103077b6: ;
        wr32(eax + ecx * 4u, edx);
        wr32(esi, -edx);
        if ((int32_t)(ecx + 1u) < 48)
        {
            edx = edx + (~(ecx + 1u) & 1u);
            ecx = ecx + 1u;
            esi = esi - 4u;
            goto L_103077b6;
        }
        edx = edx + (~(ecx + 1u) & 1u);
        ecx = ecx + 1u;
    }
    if ((int32_t)ecx <= 255)
    {
        esi = eax - (ecx << 2u);
        edi = -edx;
L_103077ea: ;
        wr32(eax + ecx * 4u, edx);
        wr32(esi, edi);
        if ((int32_t)(ecx + 1u) <= 255)
        {
            ecx = ecx + 1u;
            esi = esi - 4u;
            goto L_103077ea;
        }
    }
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030776e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1030776e(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
