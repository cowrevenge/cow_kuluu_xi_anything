/* f_0x101c2700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c2700(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 4u) == 0u) goto L_101c27aa;
    eax = rd32(self + 4u);
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_101c2763;
    }
    eax = eax - 1u;
    if (eax != 1u) goto L_101c27ec;
    eax = eax - 1u;
    if (rd32(sp0 + 4u) < rd32(self + 0xc8u))
    {
        edx = rd32(sp0 + 4u);
        esi = rd32(self + 0xc8u);
        goto L_101c2732;
    }
    edx = rd32(sp0 + 4u);
    g->edx = edx;
    return 0xffffffffu;
L_101c2732: ;
    if (rd16(edx * 2u + rd32(self + 0xc4u)) == 0u)
    {
        ebp = 0u;
        goto L_101c27f0;
    }
    ecx = edx * 2u + rd32(self + 0xc4u);
    ebp = 0u;
L_101c2747: ;
    if (edx + 1u >= esi)
    {
        edx = edx + 1u;
        ebp = ebp + 1u;
        goto L_101c27f0;
    }
    ecx = ecx + 2u;
    edx = edx + 1u;
    ebp = ebp + 1u;
    if (rd16(ecx) != 0u) goto L_101c2747;
    g->edx = edx;
    return ebp;
L_101c2763: ;
    if (rd32(sp0 + 4u) < rd32(self + 0xc8u))
    {
        edx = rd32(sp0 + 4u);
        edi = rd32(self + 0xc8u);
        goto L_101c277b;
    }
    edx = rd32(sp0 + 4u);
    g->edx = edx;
    return 0xffffffffu;
L_101c277b: ;
    ebp = 0u;
    esi = edx * 2u + rd32(self + 0xc4u);
L_101c2786: ;
    if (rd16(esi) != 0u) goto L_101c2798;
    if (rd8(edx + rd32(self + 0xbcu)) == 0u) goto L_101c27f0;
L_101c2798: ;
    if (edx + 1u < edi)
    {
        edx = edx + 1u;
        ebp = ebp + 1u;
        esi = esi + 2u;
        goto L_101c2786;
    }
    edx = edx + 1u;
    ebp = ebp + 1u;
    g->edx = edx;
    return ebp;
L_101c27aa: ;
    edx = in_edx;
    ebp = 0u;
    edi = rd32(sp0 + 4u);
L_101c27b0: ;
    t1 = rd32(self + 0x80u);
    wr8(sp0 + 4u, 0u);
    if (t1 == 0u) goto L_101c27f0;
    ebx = t1;
    eax = rd32(self + 0x44u);
    esi = self + 0xcu;
L_101c27c5: ;
    if (eax > edi)
    {
        if (rd32(esi) == 0u)
        {
            edx = rd32(esi);
        }
        else
        {
            edx = rd32(esi);
            if (rd32(edi * 8u + edx) != 0u)
            {
                wr8(sp0 + 4u, 1u);
            }
        }
    }
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        esi = esi + 4u;
        goto L_101c27c5;
    }
    if (rd8(sp0 + 4u) == 0u) goto L_101c27f0;
    ebp = ebp + 1u;
    edi = edi + 1u;
    goto L_101c27b0;
L_101c27ec: ;
    edx = in_edx;
    ebp = rd32(sp0 + 4u);
L_101c27f0: ;
    g->edx = edx;
    return ebp;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c2700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c2700(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
