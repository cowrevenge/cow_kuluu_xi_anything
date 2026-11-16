/* f_0x1017a6d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1017a6d0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    edx = in_edx;
    esi = arg1;
    edi = 0u;
L_1017a6db: ;
    if (rd32(esi) != 0u)
    {
        eax = rd32(esi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t1 = cow_stdcall(g, COW_IMG(0x10178720u), 1, eax);
        t2 = g->edx;
        wr32(esi + 4u, t1);
        if (t1 == 0u)
        {
            edx = t2;
        }
        else
        {
            eax = t1;
            edx = t2;
            wr8(COW_IMG(0x1065c4d8u) + edi, rd8(eax + 6u));
        }
    }
    if ((int32_t)(edi + 1u) < 256)
    {
        esi = esi + 0x4cu;
        edi = edi + 1u;
        goto L_1017a6db;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1017a6d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1017a6d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
