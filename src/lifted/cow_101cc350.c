/* f_0x101cc350 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101cc350(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), in_eax, g->ecx, g->edx, 1, 0);
    if (t1 == 0u)
    {
        eax = t1;
        goto L_101cc395;
    }
    eax = t1;
    if ((rd32(eax + 0x1d0u) >> 8u & 4u) == 0u) goto L_101cc395;
    ecx = rd32(eax + 0x1d0u);
    if ((uint8_t)arg1 == 0u)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)arg1;
        goto L_101cc37c;
    }
    ecx = (ecx & 0xffffff00u) | (uint8_t)arg1;
    if (rd8(eax + 0x1ffu) < 8u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x1ffu);
        goto L_101cc37c;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 0x1ffu);
    if ((uint8_t)ecx <= 9u) goto L_101cc395;
L_101cc37c: ;
    if ((uint8_t)arg2 == 0u) goto L_101cc392;
    if (rd8(eax + 0x1ffu) < 0x28u)
    {
        eax = (eax & 0xffffff00u) | rd8(eax + 0x1ffu);
        goto L_101cc392;
    }
    eax = (eax & 0xffffff00u) | rd8(eax + 0x1ffu);
    if ((uint8_t)eax <= 0x2bu) goto L_101cc395;
L_101cc392: ;
    return (eax & 0xffffff00u) | 1u;
L_101cc395: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cc350(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cc350(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
