/* f_0x1010f7a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1010f7a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t self = g->ecx;

    if (rd32(rd32(self + 8u) + 4u) == 0u) goto L_1010f80e;
    eax = rd32(self + 8u);
    if (rd32(eax + 8u) == 0u) goto L_1010f80e;
    eax = rd32(eax + 8u);
    wr32(self + 8u, eax);
    if (rd32(eax + 4u) == 0u) goto L_1010f80e;
    if (rd32(eax + 8u) == 0u) goto L_1010f80e;
    ecx = rd32(eax + 8u);
L_1010f7cb: ;
    edx = self + 0xcu;
    edi = rd32(eax);
    eax = 0u;
L_1010f7d1: ;
    if (rd32(edx) != rd32(eax * 4u + edi)) goto L_1010f82d;
    if ((int32_t)(eax + 1u) < 3)
    {
        eax = eax + 1u;
        edx = edx + 4u;
        goto L_1010f7d1;
    }
    eax = 0u;
    edx = edi + 0xcu;
    esi = self + 0x18u;
L_1010f7e9: ;
    if (rd32(esi) != rd32(edx)) goto L_1010f82d;
    if ((int32_t)(eax + 1u) < 3)
    {
        eax = eax + 1u;
        edx = edx + 4u;
        esi = esi + 4u;
        goto L_1010f7e9;
    }
    wr32(self + 8u, ecx);
    if (rd32(ecx + 4u) == 0u) goto L_1010f80e;
    eax = ecx;
    if (rd32(ecx + 8u) != 0u)
    {
        ecx = rd32(ecx + 8u);
        goto L_1010f7cb;
    }
L_1010f80e: ;
    wr32(self + 0xcu, 0u);
    wr32(self + 0x10u, 0u);
    wr32(self + 0x14u, 0u);
    wr32(self + 0x18u, 0u);
    wr32(self + 0x1cu, 0u);
    wr32(self + 0x20u, 0u);
    return self + 0x18u & 0xffffff00u;
L_1010f82d: ;
    if (self + 0xcu != rd32(rd32(self + 8u)))
    {
        edx = rd32(rd32(self + 8u));
        eax = self + 0xcu;
        ecx = 3u;
        edx = edx - (self + 0xcu);
L_1010f83f: ;
        t1 = rd32(eax + edx);
        wr32(eax, t1);
        if (ecx != 1u)
        {
            eax = eax + 4u;
            ecx = ecx - 1u;
            goto L_1010f83f;
        }
    }
    if (self + 0x18u == rd32(rd32(self + 8u)) + 0xcu)
    {
        eax = self + 0x18u;
    }
    else
    {
        ecx = rd32(rd32(self + 8u)) + 0xcu;
        eax = self + 0x18u;
        ecx = ecx - (self + 0x18u);
        edx = 3u;
L_1010f860: ;
        t2 = rd32(eax + ecx);
        wr32(eax, t2);
        if (edx != 1u)
        {
            eax = eax + 4u;
            edx = edx - 1u;
            goto L_1010f860;
        }
        eax = eax + 4u;
    }
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010f7a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010f7a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
