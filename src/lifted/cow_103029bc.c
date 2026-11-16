/* f_0x103029bc - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_103029bc(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t in_edi = g->edi;

    t1 = rd32(in_edi + 0x114u);
    t2 = rd32(in_edi + 0x180u);
    if ((int32_t)rd32(in_edi + 0x20u) > 0)
    {
        eax = rd32(in_edi + 0xc4u);
        ebx = t2;
        loc_20 = t1;
        loc_2c = t2;
        ecx = eax + 0xcu;
        loc_10 = 0u;
        loc_1c = eax + 0xcu;
        loc_18 = ebx + 8u;
L_103029fb: ;
        t3 = cow_divs(g, rd32(ecx + 0x18u) * rd32(ecx), rd32(in_edi + 0x114u));
        t4 = cow_mods(g, rd32(ecx + 0x18u) * rd32(ecx), rd32(in_edi + 0x114u));
        t5 = rd32(loc_10 * 4u + rd32(ebx + 0x38u));
        if ((int32_t)((loc_20 + 2u) * t3) <= 0)
        {
            eax = t3;
            edx = rd32(loc_10 * 4u + rd32(ebx + 0x3cu));
            esi = rd32(loc_18);
            loc_28 = t5;
            loc_24 = t3;
        }
        else
        {
            ecx = (loc_20 + 2u) * t3;
            edx = rd32(loc_10 * 4u + rd32(ebx + 0x3cu));
            esi = rd32(loc_18);
            loc_28 = t5;
            loc_24 = t3;
            eax = edx;
            ebx = loc_28 - edx;
            loc_8 = esi - edx;
            loc_14 = ecx;
L_10302a42: ;
            t6 = rd32(eax + loc_8);
            wr32(eax, t6);
            wr32(eax + ebx, t6);
            if (loc_14 != 1u)
            {
                eax = eax + 4u;
                loc_14 = loc_14 - 1u;
                goto L_10302a42;
            }
            eax = loc_24;
            ebx = loc_2c;
        }
        if ((int32_t)(eax * 2u) > 0)
        {
            t7 = edx + eax * loc_20 * 4u;
            t8 = esi + (loc_20 - 2u) * loc_24 * 4u;
            eax = loc_24;
            ecx = t8;
            loc_24 = loc_24 * 2u;
            loc_8 = esi - edx;
            loc_14 = edx - esi;
            loc_c = t7;
L_10302a94: ;
            t9 = rd32(loc_8 + loc_c);
            wr32(ecx + loc_14, t9);
            wr32(loc_c, rd32(ecx));
            if (loc_24 != 1u)
            {
                ecx = ecx + 4u;
                loc_24 = loc_24 - 1u;
                loc_c = loc_c + 4u;
                goto L_10302a94;
            }
        }
        if ((int32_t)eax > 0)
        {
            ecx = loc_28 - (eax << 2u);
            edx = loc_28;
L_10302ac8: ;
            wr32(ecx, rd32(edx));
            if (eax != 1u)
            {
                eax = eax - 1u;
                ecx = ecx + 4u;
                goto L_10302ac8;
            }
        }
        if ((int32_t)(loc_10 + 1u) < (int32_t)rd32(in_edi + 0x20u))
        {
            loc_10 = loc_10 + 1u;
            loc_1c = loc_1c + 0x54u;
            loc_18 = loc_18 + 4u;
            goto L_103029f8;
        }
    }
    return;
L_103029f8: ;
    ecx = loc_1c;
    goto L_103029fb;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103029bc(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_103029bc(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
