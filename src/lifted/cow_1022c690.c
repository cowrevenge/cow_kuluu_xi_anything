/* f_0x1022c690 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1022c690(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg3 > 0)
    {
        edx = rd32(COW_IMG(0x10667a74u));
        esi = 0u;
        edi = 0u;
        loc_8 = 0x80u;
L_1022c6b9: ;
        if (arg2 == 0u)
        {
            eax = rd16(loc_8 + rd32(COW_IMG(0x10667a7cu)));
            goto L_1022c6e0;
        }
        eax = rd16(loc_8 + rd32(COW_IMG(0x10667a7cu)));
        if (arg2 >> (rd8(eax * 0x64u + edx + 2u) & 0x1fu) & 1u) goto L_1022c711;
L_1022c6e0: ;
        if (arg1 == 0u) goto L_1022c6f7;
        if ((uint32_t)(int16_t)rd16(eax * 0x64u + edx + 2u) != arg1) goto L_1022c711;
L_1022c6f7: ;
        if ((int32_t)esi >= 0)
        {
            if ((int32_t)esi < (int32_t)rd32(self + 0x44u))
            {
                if (esi * 8u + rd32(self + 0x20u) != 0u)
                {
                    eax = esi * 8u + rd32(self + 0x20u);
                    wr32(eax, edi);
                    esi = esi + 1u;
                }
            }
        }
L_1022c711: ;
        if ((int32_t)(edi + 1u) < (int32_t)arg3)
        {
            edi = edi + 1u;
            loc_8 = loc_8 + 2u;
            goto L_1022c6b9;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022c690(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1022c690(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
