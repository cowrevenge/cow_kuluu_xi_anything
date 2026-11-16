/* f_0x10039550 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10039550(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    ecx = self + 0xcu;
    edx = 8u;
L_1003955c: ;
    if (rd32(ecx) == 0u)
    {
        eax = rd32(ecx);
    }
    else
    {
        eax = rd32(ecx);
        wr8(eax + 5u, 1u);
    }
    if (edx != 1u)
    {
        ecx = ecx + 4u;
        edx = edx - 1u;
        goto L_1003955c;
    }
    edx = edx - 1u;
    esi = self + 0xcu;
    edi = 8u;
L_10039571: ;
    if (rd32(esi) != 0u)
    {
        ecx = rd32(esi);
        g->eax = eax;
        g->esp = sp0 - 8u;
        t1 = cow_fastcall(g, COW_IMG(0x100396a0u), ecx, edx, 0);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    if (edi != 1u)
    {
        esi = esi + 4u;
        edi = edi - 1u;
        goto L_10039571;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10039550(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10039550(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
