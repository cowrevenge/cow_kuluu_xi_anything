/* f_0x1012f500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1012f500(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if ((rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7d0u) & 0x4000000u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7d0u);
        edx = rd32(COW_IMG(0x104dfd98u));
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7d0u);
        edx = rd32(COW_IMG(0x104dfd98u));
        wr32(edx + 0x2c7d0u, eax & 0xfbffffffu);
        if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7c8u) == 7u)
        {
            eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7c8u);
            edx = rd32(COW_IMG(0x104dfd98u));
            goto L_1012f534;
        }
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7c8u);
        edx = rd32(COW_IMG(0x104dfd98u));
        if (eax != 1u) goto L_1012f562;
L_1012f534: ;
        if (rd32(edx + 0x2c7ccu) != 2u)
        {
            wr32(self + 0x1c0u, 0xffffffffu);
            t1 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2ca18u) - 1u;
            t2 = rd32(COW_IMG(0x104dfd98u));
            wr32(t2 + 0x2ca18u, t1);
            wr16(self + 0x1b4u, 3u);
            eax = t2;
            edx = t1;
        }
    }
L_1012f562: ;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10130150u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012f500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1012f500(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
