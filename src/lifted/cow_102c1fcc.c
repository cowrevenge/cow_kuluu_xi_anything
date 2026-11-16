/* f_0x102c1fcc - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102c1fcc(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(sp0 + 4u));
    if (rd8(rd32(sp0 + 4u) + 8u) != 2u)
    {
        eax = t1;
        ecx = (self & 0xffffff00u) | rd8(rd32(sp0 + 4u) + 8u);
        edi = rd32(sp0 + 4u);
        loc_8 = t1;
        goto L_102c2056;
    }
    eax = t1;
    ecx = (self & 0xffffff00u) | rd8(rd32(sp0 + 4u) + 8u);
    edi = rd32(sp0 + 4u);
    loc_8 = t1;
    if (arg3 == 0u) goto L_102c2056;
    if (rd8(edi + 9u) != 8u) goto L_102c2056;
    t2 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t2);
    if (eax == 0u) goto L_102c2037;
    edx = t2;
    wr32(sp0 + 4u, eax);
L_102c2001: ;
    t3 = rd8(edx);
    t4 = rd8(edx + 1u);
    t5 = rd8(arg3 + (((rd8(edx) & 0xf8u) << 5u | (rd8(edx + 1u) & 0xf8u)) << 2u | ((uint32_t)((int32_t)rd8(edx + 2u) >> 3u) & 0x1fu)));
    t6 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t6 + 1u);
    t7 = rd32(sp0 + 8u);
    wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
    t8 = rd32(sp0 + 4u);
    wr8(t6, (uint8_t)t5);
    if (t8 != 1u)
    {
        edx = edx + 3u;
        goto L_102c2001;
    }
L_102c2034: ;
    eax = loc_8;
    ecx = 0xf8u;
L_102c2037: ;
    t16 = rd8(edi + 9u);
    wr8(edi + 8u, 3u);
    wr8(edi + 0xbu, (uint8_t)t16);
    wr8(edi + 0xau, 1u);
    t17 = ((uint8_t)t16 * eax + 7u) >> 3u;
    wr32(edi + 4u, t17);
L_102c20d4: ;
    return;
L_102c2056: ;
    if ((uint8_t)ecx != 6u) goto L_102c20af;
    if (arg3 == 0u) goto L_102c20af;
    if (rd8(edi + 9u) != 8u) goto L_102c20af;
    t9 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t9);
    if (eax == 0u) goto L_102c2037;
    edx = t9;
    wr32(sp0 + 4u, eax);
L_102c2079: ;
    t10 = rd8(edx);
    t11 = rd8(edx + 1u);
    t12 = rd8(arg3 + (((rd8(edx) & 0xf8u) << 5u | (rd8(edx + 1u) & 0xf8u)) << 2u | ((uint32_t)((int32_t)rd8(edx + 2u) >> 3u) & 0x1fu)));
    t13 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t13 + 1u);
    t14 = rd32(sp0 + 8u);
    wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
    t15 = rd32(sp0 + 4u);
    wr8(t13, (uint8_t)t12);
    if (t15 != 1u)
    {
        edx = edx + 4u;
        goto L_102c2079;
    }
    goto L_102c2034;
L_102c20af: ;
    if ((uint8_t)ecx == 3u)
    {
        if (arg4 != 0u)
        {
            if (rd8(edi + 9u) == 8u)
            {
                if (eax == 0u) goto L_102c20d4;
                ecx = rd32(sp0 + 8u);
L_102c20c8: ;
                wr8(ecx, rd8(arg4 + rd8(ecx)));
                if (eax != 1u)
                {
                    eax = eax - 1u;
                    ecx = ecx + 1u;
                    goto L_102c20c8;
                }
            }
        }
    }
    goto L_102c20d4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c1fcc(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c1fcc(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
