/* f_0x10101950 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
void cow_fn_10101950(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t esi;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t zf;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int16_t)arg4 > 0)
    {
        eax = arg6;
        ebx = in_ebx & 0xffffff00u;
        esi = 0u;
        cf = 0u;
        pf = PARITY((uint8_t)arg4);
        zf = (uint32_t)(int16_t)arg4 == 0u;
        sf = (int16_t)arg4 < 0;
        of = 0u;
L_1010196d: ;
        if (((uint32_t)(int16_t)rd16(arg2 + 0xau) & 1u << (esi & 0x1fu)) != 0u)
        {
            ecx = (uint32_t)(int16_t)rd16(arg2 + 0xau);
            if ((uint8_t)arg7 != 0u)
            {
                if ((uint8_t)ebx != 0u)
                {
                    wr32(arg1 + eax * 8u, 0x7cfu);
                    wr32(arg1 + eax * 8u + 4u, 1u);
                    eax = eax + 1u;
                }
            }
            t1 = rd16(arg5 + esi * 2u);
            wr32(arg1 + eax * 8u, t1);
            t2 = (uint32_t)(int16_t)rd16(arg2 + arg3 * 2u + 0xcu);
            wr32(arg1 + eax * 8u + 4u, t2);
            eax = eax + 1u;
            ebx = (arg5 & 0xffffff00u) | 1u;
        }
        if ((int32_t)(esi + 1u) < (int16_t)arg4)
        {
            cf = esi + 1u < (uint32_t)(int16_t)arg4;
            pf = PARITY((uint8_t)(esi + 1u - (uint32_t)(int16_t)arg4));
            zf = esi + 1u == (uint32_t)(int16_t)arg4;
            sf = (int32_t)(esi + 1u - (uint32_t)(int16_t)arg4) < 0;
            of = ((esi + 1u ^ (uint32_t)(int16_t)arg4) & (esi + 1u ^ esi + 1u - (uint32_t)(int16_t)arg4)) >> 0x1fu;
            esi = esi + 1u;
            goto L_1010196d;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10101950(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10101950(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
