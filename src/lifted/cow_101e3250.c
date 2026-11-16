/* f_0x101e3250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101e3250(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;

    if (rd32(COW_IMG(0x106634c4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106634c4u));
        g->eax = in_eax;
        g->esp = sp0;
        t1 = cow_thiscall(g, COW_IMG(0x101f7100u), ecx, 0);
        if (rd32(rd32(COW_IMG(0x106634c4u)) + 0x38u) == 0u) goto L_101e328c;
        eax = t1;
        ecx = rd32(COW_IMG(0x106634c4u));
        edx = rd32(rd32(COW_IMG(0x106634c4u)) + 0x38u);
        if ((int32_t)eax >= (int16_t)rd16(ecx + 0x20u)) goto L_101e328c;
        if (eax * 0x54u + edx == 0u) goto L_101e328c;
        eax = eax * 0x54u + edx;
        eax = rd32(eax + 0x48u);
L_101e328e: ;
        if (eax != 0u)
        {
            wr8(eax + 9u, rd8(eax + 9u) & 0x7fu);
        }
    }
    return;
L_101e328c: ;
    eax = 0u;
    goto L_101e328e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e3250(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e3250(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
