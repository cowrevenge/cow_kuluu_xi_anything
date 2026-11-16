/* f_0x101d8450 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101d8450(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((int16_t)rd16(self + 0x89eu) < 0)
    {
        eax = (in_eax & 0xffff0000u) | rd16(self + 0x89eu);
        edx = in_edx;
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | rd16(self + 0x89eu);
        if (rd32(self + 0x38u) == 0u)
        {
            ecx = (uint32_t)(int16_t)eax;
            edx = rd32(self + 0x38u);
            goto L_101d8489;
        }
        ecx = (uint32_t)(int16_t)eax;
        edx = rd32(self + 0x38u);
        if ((int32_t)ecx >= (int16_t)rd16(self + 0x20u)) goto L_101d8489;
        if (ecx * 0x54u + edx == 0u) goto L_101d8489;
        eax = ecx * 0x54u + edx;
        eax = rd32(eax + 0x48u);
L_101d848b: ;
        if (eax != 0u)
        {
            if (rd16(eax + 4u) != (uint32_t)(int16_t)rd16(self + 0x8a0u))
            {
                edx = (uint32_t)(int16_t)rd16(self + 0x8a0u);
            }
            else
            {
                edx = (uint32_t)(int16_t)rd16(self + 0x8a0u);
                g->edx = edx;
                g->esp = sp0 - 4u;
                t1 = cow_call_regs(g, COW_IMG(0x101f7080u), eax, self, g->edx, 0, 2, ecx, 0u);
                t2 = g->edx;
                eax = t1;
                edx = t2;
            }
        }
    }
    wr8(self + 0x89au, 1u);
    g->edx = edx;
    return eax;
L_101d8489: ;
    eax = 0u;
    goto L_101d848b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d8450(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d8450(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
