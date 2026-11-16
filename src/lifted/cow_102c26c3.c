/* f_0x102c26c3 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102c26c3(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if ((rd8(rd32(sp0 + 4u) + 8u) & 2u) != 0u)
    {
        eax = rd32(sp0 + 4u);
        ecx = (self & 0xffffff00u) | rd8(rd32(sp0 + 4u) + 8u);
        if (rd8(eax + 9u) != 8u)
        {
            edi = rd32(eax);
            eax = (eax & 0xffffff00u) | rd8(eax + 9u);
            if ((uint8_t)eax == 0x10u)
            {
                if ((uint8_t)ecx != 2u) goto L_102c2726;
                wr32(sp0 + 4u, 6u);
L_102c272e: ;
                if (edi != 0u)
                {
                    eax = rd32(sp0 + 8u) + 1u;
L_102c273d: ;
                    t2 = rd8(eax + 1u) << 8u | rd8(eax + 2u);
                    t3 = (uint16_t)(t2 + (rd8(eax + 3u) << 8u | rd8(eax + 4u)));
                    t4 = rd8(eax - 1u);
                    t5 = rd8(eax);
                    wr32(sp0 + 8u, t3);
                    t6 = (uint16_t)(t2 + (t4 << 8u | t5));
                    wr8(eax, (uint8_t)t6);
                    t7 = rd32(sp0 + 8u);
                    wr8(eax - 1u, (uint8_t)(t6 >> 8u));
                    wr8(eax + 3u, (uint8_t)(t7 >> 8u));
                    wr8(eax + 4u, (uint8_t)t7);
                    if (edi != 1u)
                    {
                        eax = eax + rd32(sp0 + 4u);
                        edi = edi - 1u;
                        goto L_102c273d;
                    }
                }
            }
        }
        else
        {
            edi = rd32(eax);
            if ((uint8_t)ecx != 2u) goto L_102c26eb;
            loc_c = 3u;
L_102c26f6: ;
            if (edi != 0u)
            {
                edx = loc_c;
                eax = rd32(sp0 + 8u) + 2u;
L_102c2705: ;
                t1 = rd8(eax - 1u);
                wr8(eax - 2u, (uint8_t)(t1 + rd8(eax - 2u)));
                wr8(eax, (uint8_t)(rd8(eax) + (uint8_t)t1));
                if (edi != 1u)
                {
                    eax = eax + edx;
                    ecx = (ecx & 0xffffff00u) | t1;
                    edi = edi - 1u;
                    goto L_102c2705;
                }
            }
        }
    }
L_102c2781: ;
    return;
L_102c26eb: ;
    if ((uint8_t)ecx != 6u) goto L_102c2781;
    loc_c = 4u;
    goto L_102c26f6;
L_102c2726: ;
    if ((uint8_t)ecx != 6u) goto L_102c2781;
    wr32(sp0 + 4u, 8u);
    goto L_102c272e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c26c3(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c26c3(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
