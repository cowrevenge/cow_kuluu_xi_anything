/* f_0x100eaf70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_100eaf70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)rd8(arg1 + 1u) <= 0)
    {
        eax = rd8(arg1 + 1u);
        goto L_100eaf99;
    }
    eax = rd8(arg1 + 1u);
    ecx = 0u;
    edx = arg1 + 4u;
    edi = (in_edi & 0xffff0000u) | rd16(arg2);
L_100eaf8c: ;
    if (rd16(edx) == (uint16_t)edi) goto L_100eafae;
    if ((int32_t)(ecx + 1u) < (int32_t)eax)
    {
        ecx = ecx + 1u;
        edx = edx + 8u;
        goto L_100eaf8c;
    }
L_100eaf99: ;
    wr32(arg1 + eax * 8u + 4u, rd32(arg2));
    t1 = rd32(arg2 + 4u);
    wr32(arg1 + eax * 8u + 8u, t1);
    wr8(arg1 + 1u, (uint8_t)(rd8(arg1 + 1u) + 1u));
L_100eafae: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100eaf70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100eaf70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
