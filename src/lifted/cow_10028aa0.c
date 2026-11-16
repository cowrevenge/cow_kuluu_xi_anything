/* f_0x10028aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10028aa0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    t1 = rd32(sp0 + 4u);
    g->edx = in_edx;
    t2 = cow_cdecl(g, COW_IMG(0x10028730u), 1, t1);
    t3 = g->edx;
    wr32(sp0 + 4u, t2);
    edx = t3;
    if (rd32(rd32(sp0 + 4u) + 4u) == 0u)
    {
        eax = rd32(sp0 + 4u);
    }
    else
    {
        eax = rd32(sp0 + 4u);
        t4 = rd32(eax + 0xcu);
        wr32(eax + 4u, 0u);
        if (t4 != 0u)
        {
            ecx = t4;
            if (rd32(ecx + 4u) == 0u)
            {
                t5 = rd32(eax + 8u);
                wr32(ecx + 8u, t5);
                wr32(rd32(eax + 8u) + 0xcu, ecx);
                eax = ecx;
            }
        }
        if (rd32(rd32(eax + 8u) + 4u) == 0u)
        {
            ecx = rd32(eax + 8u);
            t6 = rd32(ecx + 8u);
            wr32(eax + 8u, t6);
            wr32(rd32(ecx + 8u) + 0xcu, eax);
        }
        if (rd32(eax + 0xcu) == 0u)
        {
            ecx = eax;
            goto L_10028b27;
        }
        ecx = eax;
        edx = rd32(eax + 0xcu);
L_10028b12: ;
        if (rd32(edx + 4u) == 0u) goto L_10028b24;
        if (rd32(edx + 0xcu) != 0u)
        {
            ecx = edx;
            edx = rd32(edx + 0xcu);
            goto L_10028b12;
        }
        ecx = edx;
L_10028b27: ;
        if (rd32(ecx + 0xcu) != 0u) goto L_10028b35;
        if (rd32(eax + 0xcu) == 0u) goto L_10028b3b;
L_10028b35: ;
        wr32(ecx + 0x10u, eax);
        wr32(eax + 0x14u, ecx);
L_10028b3b: ;
        if (rd32(eax + 8u) == 0u)
        {
            ecx = eax;
            goto L_10028b59;
        }
        ecx = eax;
        edx = rd32(eax + 8u);
L_10028b44: ;
        if (rd32(edx + 4u) == 0u) goto L_10028b56;
        if (rd32(edx + 8u) != 0u)
        {
            ecx = edx;
            edx = rd32(edx + 8u);
            goto L_10028b44;
        }
        ecx = edx;
L_10028b59: ;
        if (rd32(ecx + 8u) != 0u)
        {
            edx = rd32(ecx + 8u);
            goto L_10028b68;
        }
        if (rd32(eax + 8u) == 0u)
        {
            edx = rd32(eax + 8u);
            goto L_10028b6e;
        }
        edx = rd32(eax + 8u);
L_10028b68: ;
        wr32(ecx + 0x14u, eax);
        wr32(eax + 0x10u, ecx);
    }
L_10028b6e: ;
    g->edx = edx;
    return eax;
L_10028b24: ;
    ecx = rd32(ecx + 0xcu);
    goto L_10028b27;
L_10028b56: ;
    ecx = rd32(ecx + 8u);
    goto L_10028b59;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10028aa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10028aa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
