/* f_0x10082b10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10082b10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x68u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_10082b26;
    }
    eax = in_eax;
    ecx = rd32(self + 0x68u);
    edx = in_edx;
L_10082b1a: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t1 = cow_fastcall(g, COW_IMG(0x1003b5e0u), ecx, edx, 0);
    t2 = g->edx;
    if (rd32(self + 0x68u) != 0u)
    {
        eax = t1;
        ecx = rd32(self + 0x68u);
        edx = t2;
        goto L_10082b1a;
    }
    eax = t1;
    edx = t2;
L_10082b26: ;
    if (rd32(self + 0x6cu) == 0u) goto L_10082b39;
    ecx = rd32(self + 0x6cu);
L_10082b2d: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t3 = cow_fastcall(g, COW_IMG(0x1003b610u), ecx, edx, 0);
    t4 = g->edx;
    if (rd32(self + 0x6cu) != 0u)
    {
        eax = t3;
        ecx = rd32(self + 0x6cu);
        edx = t4;
        goto L_10082b2d;
    }
L_10082b39: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10082b10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10082b10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
