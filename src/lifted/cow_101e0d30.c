/* f_0x101e0d30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101e0d30(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t esi;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)((uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) - 1u) >= 0)
    {
        edi = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) - 1u;
        if ((int32_t)edi < 10)
        {
            eax = 0u;
            esi = self + 0x22u;
L_101e0d53: ;
            if (rd16(esi) != (uint16_t)arg2) goto L_101e0d6d;
            if (rd8(eax + self + 0x15u) != (uint8_t)arg1) goto L_101e0d6d;
            wr16(esi, 0u);
            wr8(eax + self + 0x15u, 0u);
            wr8(eax + self + 0x36u, 0u);
            if (eax == edi) goto L_101e0d87;
L_101e0d6d: ;
            if ((int32_t)(eax + 1u) < 10)
            {
                eax = eax + 1u;
                esi = esi + 2u;
                goto L_101e0d53;
            }
            wr16(edi * 2u + self + 0x22u, (uint16_t)arg2);
            wr8(edi + self + 0x15u, (uint8_t)arg1);
            wr8(edi + self + 0x36u, (uint8_t)arg3);
        }
    }
L_101e0d87: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e0d30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e0d30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
