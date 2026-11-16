/* f_0x10302bc1 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10302bc1(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
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
    const uint32_t in_esi = g->esi;

    if ((int32_t)rd32(in_esi + 0x20u) > 0)
    {
        eax = rd32(in_esi + 0xc4u);
        ebx = rd32(in_esi + 0x180u);
        edi = eax + 0xcu;
        loc_8 = 0u;
L_10302be2: ;
        t1 = rd32(edi + 0x18u) * rd32(edi);
        t2 = cow_divs(g, t1, rd32(in_esi + 0x114u));
        t3 = cow_mods(g, t1, rd32(in_esi + 0x114u));
        t4 = cow_divu(g, rd32(edi + 0x20u), t1);
        t5 = cow_modu(g, rd32(edi + 0x20u), t1);
        if (t5 != 0u)
        {
            loc_10 = t2;
            loc_c = t5;
        }
        else
        {
            ecx = t1;
            loc_10 = t2;
            loc_c = ecx;
        }
        if (loc_8 == 0u)
        {
            t6 = cow_divs(g, loc_c - 1u, loc_10);
            t7 = cow_mods(g, loc_c - 1u, loc_10);
            wr32(ebx + 0x48u, t6 + 1u);
        }
        if ((int32_t)(loc_10 * 2u) > 0)
        {
            eax = rd32(loc_8 * 4u + rd32(ebx + rd32(ebx + 0x40u) * 4u + 0x38u));
            ecx = loc_10 * 2u;
            t8 = eax + loc_c * 4u;
            eax = t8;
            edx = t8;
            loc_10 = ecx;
L_10302c38: ;
            t9 = rd32(eax - 4u);
            wr32(edx, t9);
            if (loc_10 != 1u)
            {
                edx = edx + 4u;
                loc_10 = loc_10 - 1u;
                goto L_10302c38;
            }
        }
        if ((int32_t)(loc_8 + 1u) < (int32_t)rd32(in_esi + 0x20u))
        {
            edi = edi + 0x54u;
            loc_8 = loc_8 + 1u;
            goto L_10302be2;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10302bc1(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10302bc1(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
