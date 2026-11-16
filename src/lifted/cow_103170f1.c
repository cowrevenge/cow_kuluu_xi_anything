/* f_0x103170f1 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_103170f1(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x109f9420u)) != 0u)
    {
        eax = rd32(COW_IMG(0x109f9420u));
        goto L_10317105;
    }
    eax = 0x200u;
L_1031710b: ;
    wr32(COW_IMG(0x109f9420u), eax);
L_10317110: ;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x103175f0u), g->eax, self, in_edx, 1, 2, eax, 4u);
    t2 = g->edx;
    wr32(COW_IMG(0x109f8414u), t1);
    if (t1 == 0u)
    {
        edx = t2;
        wr32(COW_IMG(0x109f9420u), 0x14u);
        g->esp = sp0 - 4u;
        t3 = cow_call_regs(g, COW_IMG(0x103175f0u), g->eax, 4u, edx, 1, 2, 0x14u, 4u);
        t4 = g->edx;
        wr32(COW_IMG(0x109f8414u), t3);
        if (t3 == 0u)
        {
            edx = t4;
            g->esp = sp0 - 4u;
            cow_cdecl(g, COW_IMG(0x1031680cu), 1, 0x1au);
        }
    }
    eax = COW_IMG(0x103d03a0u);
    ecx = 0u;
L_1031714b: ;
    wr32(ecx + rd32(COW_IMG(0x109f8414u)), eax);
    if ((int32_t)(eax + 0x20u) < (int32_t)COW_IMG(0x103d0620u))
    {
        eax = eax + 0x20u;
        ecx = ecx + 4u;
        goto L_1031714b;
    }
    ecx = 0u;
    edx = COW_IMG(0x103d03b0u);
L_10317168: ;
    if (rd32((ecx & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)ecx >> 5u) * 4u)) == 0xffffffffu)
    {
        eax = rd32((ecx & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)ecx >> 5u) * 4u));
        goto L_10317188;
    }
    eax = rd32((ecx & 0x1fu) * 0x24u + rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)ecx >> 5u) * 4u));
    if (eax != 0u) goto L_1031718b;
L_10317188: ;
    wr32(edx, 0xffffffffu);
L_1031718b: ;
    if ((int32_t)(edx + 0x20u) < (int32_t)COW_IMG(0x103d0410u))
    {
        ecx = ecx + 1u;
        edx = edx + 0x20u;
        goto L_10317168;
    }
    edx = edx + 0x20u;
    g->edx = edx;
    return eax;
L_10317105: ;
    if ((int32_t)eax >= 20) goto L_10317110;
    eax = 0x14u;
    goto L_1031710b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103170f1(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103170f1(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
