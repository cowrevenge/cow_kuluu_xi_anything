/* f_0x100a5770 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100a5770(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(self + 8u, 0u);
    edx = in_edx;
    edi = 4u;
L_100a5785: ;
    if ((int32_t)(rd32(self + 8u) & 0x80000003u) >= 0)
    {
        eax = rd32(self + 8u) & 0x80000003u;
    }
    else
    {
        eax = rd32(self + 8u) & 0x80000003u;
        eax = (eax - 1u | 0xfffffffcu) + 1u;
    }
    t1 = eax * 0xcu + self + 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, t1, arg1);
    t2 = g->edx;
    t3 = rd32(self + 8u) + 1u;
    wr32(self + 8u, t3);
    if (edi != 1u)
    {
        edx = t2;
        edi = edi - 1u;
        goto L_100a5785;
    }
    edx = t2;
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a5770(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100a5770(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
