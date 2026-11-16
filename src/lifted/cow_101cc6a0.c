/* f_0x101cc6a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101cc6a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if ((int32_t)rd32(self + 0x39cu) >= 100) goto L_101cc6c1;
    eax = rd32(self + 0x39cu);
    ecx = eax * 8u + self + 8u;
L_101cc6b2: ;
    if (rd16(ecx) == 0xffffu) goto L_101cc6d8;
    if ((int32_t)(eax + 1u) < 100)
    {
        eax = eax + 1u;
        ecx = ecx + 8u;
        goto L_101cc6b2;
    }
L_101cc6c1: ;
    eax = 0u;
    ecx = self + 0xau;
L_101cc6c6: ;
    if (!(rd8(ecx) & 1u)) goto L_101cc6de;
    if ((int32_t)(eax + 1u) < 100)
    {
        eax = eax + 1u;
        ecx = ecx + 8u;
        goto L_101cc6c6;
    }
    return 0u;
L_101cc6d8: ;
    return eax * 8u + self + 4u;
L_101cc6de: ;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101ccba0u), self, 1, eax);
    return self + 0x31cu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cc6a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cc6a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
