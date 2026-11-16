/* f_0x10302aed - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10302aed(Guest* g)
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
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t in_edi = g->edi;

    t1 = rd32(in_edi + 0x180u);
    t2 = rd32(in_edi + 0x114u);
    if ((int32_t)rd32(in_edi + 0x20u) > 0)
    {
        eax = rd32(in_edi + 0xc4u);
        ecx = t1;
        esi = t2;
        loc_20 = t1;
        loc_1c = t2;
        ebx = eax + 0xcu;
        loc_c = 0u;
        loc_14 = eax + 0xcu;
L_10302b21: ;
        t3 = cow_divs(g, rd32(ebx + 0x18u) * rd32(ebx), rd32(in_edi + 0x114u));
        t4 = cow_mods(g, rd32(ebx + 0x18u) * rd32(ebx), rd32(in_edi + 0x114u));
        t5 = rd32(loc_c * 4u + rd32(ecx + 0x38u));
        if ((int32_t)t3 > 0)
        {
            eax = t3;
            edx = rd32(loc_c * 4u + rd32(ecx + 0x3cu));
            loc_10 = t3;
            loc_18 = t5;
            ecx = edx - (eax << 2u);
            ebx = edx + (esi + 2u) * eax * 4u;
            eax = edx + (esi + 1u) * loc_10 * 4u;
            esi = loc_18 - edx;
            loc_8 = edx;
L_10302b73: ;
            t6 = rd32(eax + esi);
            wr32(ecx + esi, t6);
            wr32(ecx, rd32(eax));
            t7 = rd32(esi + loc_8);
            wr32(ebx + esi, t7);
            wr32(ebx, rd32(loc_8));
            if (loc_10 != 1u)
            {
                eax = eax + 4u;
                ecx = ecx + 4u;
                ebx = ebx + 4u;
                loc_10 = loc_10 - 1u;
                loc_8 = loc_8 + 4u;
                goto L_10302b73;
            }
            ecx = loc_20;
            ebx = loc_14;
            esi = loc_1c;
        }
        if ((int32_t)(loc_c + 1u) < (int32_t)rd32(in_edi + 0x20u))
        {
            loc_c = loc_c + 1u;
            loc_14 = ebx + 0x54u;
            ebx = ebx + 0x54u;
            goto L_10302b21;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10302aed(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10302aed(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
