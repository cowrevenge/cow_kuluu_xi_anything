/* f_0x102a1db0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102a1db0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x109a2854u)) != 0u)
    {
        eax = rd32(COW_IMG(0x109a2854u));
        if ((int32_t)eax <= 0)
        {
            edx = in_edx;
            goto L_102a1dfe;
        }
        edx = in_edx;
        esi = 0u;
L_102a1dc0: ;
        t1 = rd32(esi * 4u + rd32(COW_IMG(0x109a284cu)));
        g->ecx = t1;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, t1, COW_IMG(0x103bc974u), 0x157u);
        t2 = g->ecx;
        t3 = rd32(esi * 4u + rd32(COW_IMG(0x109a2850u)));
        g->edx = rd32(COW_IMG(0x109a2850u));
        t4 = rd32(COW_IMG(0x109a2850u));
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, t3, COW_IMG(0x103bc974u), 0x158u);
        t5 = g->edx;
        if ((int32_t)(esi + 1u) < (int32_t)rd32(COW_IMG(0x109a2854u)))
        {
            edx = t5;
            esi = esi + 1u;
            goto L_102a1dc0;
        }
        edx = t5;
L_102a1dfe: ;
        g->ecx = rd32(COW_IMG(0x109a284cu));
        t6 = rd32(COW_IMG(0x109a284cu));
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, t6, COW_IMG(0x103bc974u), 0x15au);
        t7 = g->ecx;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, rd32(COW_IMG(0x109a2850u)), COW_IMG(0x103bc974u), 0x15bu);
    }
    wr32(COW_IMG(0x109a2854u), 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a1db0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102a1db0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
