/* f_0x1018bbe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1018bbe0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    int64_t q1;
    int64_t q2;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 <= 0x6f3c9000u)
    {
        eax = in_eax;
        edx = in_edx;
        esi = arg1;
    }
    else
    {
        q1 = (uint64_t)cow_mulu(0x934a28fbu, arg1 - 0x6f3c9001u);
        eax = (uint32_t)(q1);
        edx = (cow_qhi(q1) >> 0x1eu) + 1u;
        esi = arg1;
L_1018bc00: ;
        if (edx != 1u)
        {
            edx = edx - 1u;
            esi = esi - 0x6f3c9000u;
            goto L_1018bc00;
        }
        edx = edx - 1u;
        esi = esi - 0x6f3c9000u;
    }
    ebx = 0x18u;
    edi = esi;
L_1018bc10: ;
    if (edi + esi <= 0x6f3c9000u)
    {
        esi = edi + esi;
    }
    else
    {
        esi = edi + esi;
        q2 = (uint64_t)cow_mulu(0x934a28fbu, esi - 0x6f3c9001u);
        eax = (uint32_t)(q2);
        edx = (cow_qhi(q2) >> 0x1eu) + 1u;
L_1018bc2b: ;
        if (edx != 1u)
        {
            edx = edx - 1u;
            esi = esi - 0x6f3c9000u;
            goto L_1018bc2b;
        }
        edx = edx - 1u;
        esi = esi - 0x6f3c9000u;
    }
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        goto L_1018bc10;
    }
    wr32(self, esi);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018bbe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018bbe0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
