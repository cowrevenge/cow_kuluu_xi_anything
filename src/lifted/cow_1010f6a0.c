/* f_0x1010f6a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1010f6a0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t self = g->ecx;

    if (rd32(rd32(self + 8u) + 4u) == 0u) goto L_1010f779;
    eax = rd32(rd32(self + 8u) + 4u);
    edx = rd32(self + 8u);
    if (rd32(edx + 8u) == 0u) goto L_1010f779;
    wr32(self + 8u, eax);
    if (rd32(eax + 4u) == 0u) goto L_1010f779;
    if (rd32(eax + 8u) == 0u) goto L_1010f779;
    if (self + 0xcu != rd32(eax))
    {
        edx = rd32(eax);
        eax = self + 0xcu;
        edx = edx - (self + 0xcu);
        esi = 3u;
L_1010f6e8: ;
        t1 = rd32(eax + edx);
        wr32(eax, t1);
        if (esi != 1u)
        {
            eax = eax + 4u;
            esi = esi - 1u;
            goto L_1010f6e8;
        }
    }
    if (self + 0x18u != rd32(rd32(self + 8u)) + 0xcu)
    {
        edx = rd32(rd32(self + 8u)) + 0xcu;
        eax = self + 0x18u;
        edx = edx - (self + 0x18u);
        esi = 3u;
L_1010f70b: ;
        t2 = rd32(eax + edx);
        wr32(eax, t2);
        if (esi != 1u)
        {
            eax = eax + 4u;
            esi = esi - 1u;
            goto L_1010f70b;
        }
    }
L_1010f716: ;
    if (rd32(rd32(self + 8u) + 4u) != 0u)
    {
        eax = rd32(rd32(self + 8u) + 4u);
        wr32(self + 8u, eax);
    }
    if (rd32(rd32(self + 8u) + 4u) == 0u)
    {
        edx = rd32(rd32(self + 8u) + 4u);
        goto L_1010f765;
    }
    eax = rd32(self + 8u);
    if (rd32(eax + 8u) == 0u)
    {
        edx = rd32(eax + 8u);
        goto L_1010f765;
    }
    edx = self + 0xcu;
    edi = rd32(eax);
    eax = 0u;
L_1010f73a: ;
    if (rd32(edx) != rd32(eax * 4u + edi)) goto L_1010f765;
    if ((int32_t)(eax + 1u) < 3)
    {
        eax = eax + 1u;
        edx = edx + 4u;
        goto L_1010f73a;
    }
    eax = 0u;
    edx = edi + 0xcu;
    esi = self + 0x18u;
L_1010f751: ;
    if (rd32(esi) != rd32(edx)) goto L_1010f765;
    if ((int32_t)(eax + 1u) < 3)
    {
        eax = eax + 1u;
        edx = edx + 4u;
        esi = esi + 4u;
        goto L_1010f751;
    }
    goto L_1010f716;
L_1010f765: ;
    if (rd32(rd32(self + 8u) + 8u) == 0u)
    {
        eax = rd32(rd32(self + 8u) + 8u);
    }
    else
    {
        eax = rd32(rd32(self + 8u) + 8u);
        wr32(self + 8u, eax);
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1010f779: ;
    wr32(self + 0xcu, 0u);
    wr32(self + 0x10u, 0u);
    wr32(self + 0x14u, 0u);
    wr32(self + 0x18u, 0u);
    wr32(self + 0x1cu, 0u);
    wr32(self + 0x20u, 0u);
    g->edx = 0u;
    return self + 0x18u & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010f6a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010f6a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
