/* f_0x101c8d10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101c8d10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    int64_t q2;
    uint32_t t1;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 12u);

    wr32(sp0 - 4u, in_esi);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1);
    if (t1 < 0x7fe81780u)
    {
        ecx = t1;
        edx = in_edx;
        esi = 0u;
    }
    else
    {
        eax = t1;
        ecx = t1;
        q2 = (uint64_t)cow_mulu(0x4dc56229u, eax - 0x4b3d3b00u);
        edx = cow_qhi(q2) >> 0x1cu;
        esi = (cow_qhi(q2) >> 0x1cu) * 0x1cu;
L_101c8d40: ;
        if (edx != 1u)
        {
            ecx = ecx - 0x34aadc80u;
            edx = edx - 1u;
            goto L_101c8d40;
        }
        ecx = ecx - 0x34aadc80u;
        edx = edx - 1u;
        wr32(sp0 + 4u, ecx);
    }
    wr32(sp0 - 8u, sp0 + 4u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x10314dd1u), 1, sp0 + 4u);
    t4 = g->edx;
    t5 = esi + rd32(t3 + 0x14u);
    wr32(t3 + 0x14u, t5);
    g->edx = t4;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c8d10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101c8d10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
