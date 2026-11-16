/* f_0x1030ae0d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_1030ae0d(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 92u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x50u, in_ebx);
    wr32(sp0 - 0x54u, in_esi);
    wr32(sp0 - 0x58u, in_edi);
    t1 = rd32(rd32(sp0 + 4u) + 0x11cu) + 0x80u;
    wr32(sp0 - 0xcu, t1);
    wr32(sp0 - 8u, sp0 - 0x4cu);
    t2 = rd32(arg2 + 0x50u);
    wr32(sp0 + 4u, 8u);
    ecx = t2 + 0x30u;
    ebx = t1;
    esi = arg3 + 0x30u;
    edi = sp0 - 0x4cu;
    loc_c = t1;
    loc_8 = sp0 - 0x4cu;
L_1030ae44: ;
    if (rd32(sp0 + 4u) != 6u)
    {
        if (rd32(sp0 + 4u) != 4u)
        {
            if (rd32(sp0 + 4u) != 2u)
            {
                t3 = rd16(esi + 0x40u) | rd16(esi + 0x20u);
                if ((uint16_t)(t3 | rd16(esi - 0x20u) | rd16(esi)) != 0u)
                {
                    eax = (uint32_t)(int16_t)rd16(ecx - 0x30u);
                    edx = (uint32_t)(int16_t)rd16(esi - 0x30u);
                    t5 = (uint32_t)(int16_t)(rd16(ecx + 0x20u) * rd16(esi + 0x20u)) * 0x1b37u + (uint32_t)(int16_t)(rd16(ecx - 0x20u) * rd16(esi - 0x20u)) * 0x73fcu - (uint32_t)(int16_t)(rd16(ecx + 0x40u) * rd16(esi + 0x40u)) * 0x1712u - (uint32_t)(int16_t)(rd16(ecx) * rd16(esi)) * 0x28bau + (eax * edx << 0xfu) + 0x1000u;
                    t6 = (eax * edx << 0xfu) - ((uint32_t)(int16_t)(rd16(ecx + 0x20u) * rd16(esi + 0x20u)) * 0x1b37u + (uint32_t)(int16_t)(rd16(ecx - 0x20u) * rd16(esi - 0x20u)) * 0x73fcu - (uint32_t)(int16_t)(rd16(ecx + 0x40u) * rd16(esi + 0x40u)) * 0x1712u - (uint32_t)(int16_t)(rd16(ecx) * rd16(esi)) * 0x28bau);
                    wr32(loc_8, (uint32_t)((int32_t)t5 >> 0xdu));
                    eax = (uint32_t)((int32_t)(t6 + 0x1000u) >> 0xdu);
                    ebx = loc_c;
                    edi = loc_8;
                }
                else
                {
                    eax = (uint32_t)(int16_t)rd16(ecx - 0x30u);
                    edx = (uint32_t)(int16_t)rd16(esi - 0x30u);
                    t4 = eax * edx * 4u;
                    wr32(edi, t4);
                    eax = t4;
                }
                wr32(edi + 0x20u, eax);
            }
        }
    }
    wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
    wr32(sp0 - 8u, edi + 4u);
    if ((int32_t)rd32(sp0 + 4u) > 0)
    {
        ecx = ecx + 2u;
        esi = esi + 2u;
        loc_8 = edi + 4u;
        edi = edi + 4u;
        goto L_1030ae44;
    }
    wr32(sp0 + 4u, 0u);
    eax = sp0 - 0x4cu;
L_1030af2c: ;
    if ((rd32(eax + 0x1cu) | rd32(eax + 0xcu) | rd32(eax + 4u) | rd32(eax + 0x14u)) != 0u)
    {
        ecx = rd32(eax);
        edi = arg5 + rd32(arg4 + rd32(sp0 + 4u) * 4u);
        t8 = (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(eax + 0x14u) * 0x1b37u + (uint32_t)(int16_t)rd16(eax + 4u) * 0x73fcu - (uint32_t)(int16_t)rd16(eax + 0xcu) * 0x28bau - (uint32_t)(int16_t)rd16(eax + 0x1cu) * 0x1712u + (ecx << 0xfu) + 0x80000u) >> 0x14u) & 0x3ffu;
        t9 = rd16(eax + 0x14u);
        t10 = rd16(eax + 4u);
        t11 = rd16(eax + 0xcu);
        t12 = rd16(eax + 0x1cu);
        wr8(edi, rd8(loc_c + t8));
        ecx = ((uint32_t)((int32_t)((ecx << 0xfu) - ((uint32_t)(int16_t)t9 * 0x1b37u + (uint32_t)(int16_t)t10 * 0x73fcu - (uint32_t)(int16_t)t11 * 0x28bau - (uint32_t)(int16_t)t12 * 0x1712u) + 0x80000u) >> 0x14u) & 0x300u) | rd8(loc_c + ((uint32_t)((int32_t)((ecx << 0xfu) - ((uint32_t)(int16_t)t9 * 0x1b37u + (uint32_t)(int16_t)t10 * 0x73fcu - (uint32_t)(int16_t)t11 * 0x28bau - (uint32_t)(int16_t)t12 * 0x1712u) + 0x80000u) >> 0x14u) & 0x3ffu));
        ebx = loc_c;
    }
    else
    {
        ecx = rd32(eax);
        edi = arg5 + rd32(arg4 + rd32(sp0 + 4u) * 4u);
        t7 = rd8(ebx + ((uint32_t)((int32_t)(ecx + 0x10u) >> 5u) & 0x3ffu));
        wr8(edi, (uint8_t)t7);
        ecx = ((uint32_t)((int32_t)(ecx + 0x10u) >> 5u) & 0x300u) | t7;
    }
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
    t13 = rd32(sp0 + 4u);
    wr8(edi + 1u, (uint8_t)ecx);
    if ((int32_t)t13 < 2)
    {
        eax = eax + 0x20u;
        goto L_1030af2c;
    }
    eax = eax + 0x20u;
    g->edx = 0x3ffu;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030ae0d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1030ae0d(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
