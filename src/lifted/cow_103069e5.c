/* f_0x103069e5 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_103069e5(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg4 <= 0)
    {
        eax = rd32(sp0 + 4u);
        edx = in_edx;
        goto L_10306a4c;
    }
    edx = in_edx;
    ebx = rd32(rd32(sp0 + 4u) + 0x5cu);
    esi = rd32(rd32(rd32(sp0 + 4u) + 0x1a4u) + 0x18u);
    edi = 0u;
L_10306a01: ;
    if (ebx == 0u)
    {
        eax = arg2;
    }
    else
    {
        ecx = rd32(arg2 + edi * 4u);
        wr32(sp0 + 4u, ebx);
L_10306a0e: ;
        t1 = rd8(ecx + 1u);
        t2 = rd8(ecx + 2u);
        t3 = rd32(esi + (rd8(ecx) >> 3u) * 4u);
        wr16((t1 >> 2u) * 0x40u + (t2 >> 3u) * 2u + t3, (uint16_t)(rd16((t1 >> 2u) * 0x40u + (t2 >> 3u) * 2u + t3) + 1u));
        if (rd16((t1 >> 2u) * 0x40u + (t2 >> 3u) * 2u + t3) != 0u)
        {
            eax = (t1 >> 2u) * 0x40u + (t2 >> 3u) * 2u + t3;
            edx = rd16((t1 >> 2u) * 0x40u + (t2 >> 3u) * 2u + t3);
        }
        else
        {
            eax = (t1 >> 2u) * 0x40u + (t2 >> 3u) * 2u + t3;
            edx = rd16((t1 >> 2u) * 0x40u + (t2 >> 3u) * 2u + t3);
            wr16(eax, (uint16_t)(edx - 1u));
            edx = edx - 1u;
        }
        wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
        if (rd32(sp0 + 4u) != 1u)
        {
            ecx = ecx + 3u;
            goto L_10306a0e;
        }
    }
    if ((int32_t)(edi + 1u) < (int32_t)arg4)
    {
        edi = edi + 1u;
        goto L_10306a01;
    }
L_10306a4c: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103069e5(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103069e5(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
