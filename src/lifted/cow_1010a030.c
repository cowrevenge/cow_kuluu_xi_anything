/* f_0x1010a030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1010a030(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    int64_t q1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 < 0x64u) goto L_1010a070;
    q1 = (uint64_t)cow_mulu(0x51eb851fu, arg1);
    if (cow_qhi(q1) >> 5u < 1u)
    {
        eax = 1u;
        edx = cow_qhi(q1) >> 5u;
        esi = 2u;
        goto L_1010a07a;
    }
    eax = 1u;
    edx = cow_qhi(q1) >> 5u;
    esi = 2u;
L_1010a058: ;
    if (eax * 0xau <= edx)
    {
        eax = eax * 0xau;
        esi = esi + 1u;
        goto L_1010a058;
    }
    eax = eax * 0xau;
    esi = esi + 1u;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10109fe0u), self, 3, arg1, esi, 0u);
    return;
L_1010a070: ;
    if (arg1 < 0xau)
    {
        eax = in_eax;
        edx = in_edx;
        esi = 1u;
    }
    else
    {
        eax = in_eax;
        edx = in_edx;
        esi = 2u;
    }
L_1010a07a: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10109fe0u), self, 3, arg1, esi, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010a030(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1010a030(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
