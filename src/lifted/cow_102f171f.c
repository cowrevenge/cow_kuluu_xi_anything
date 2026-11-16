/* f_0x102f171f - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102f171f(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(sp0 + 4u));
    if (rd8(rd32(sp0 + 4u) + 8u) != 2u)
    {
        eax = t1;
        ecx = (self & 0xffffff00u) | rd8(rd32(sp0 + 4u) + 8u);
        edi = rd32(sp0 + 4u);
        loc_c = t1;
        goto L_102f17aa;
    }
    eax = t1;
    ecx = (self & 0xffffff00u) | rd8(rd32(sp0 + 4u) + 8u);
    edi = rd32(sp0 + 4u);
    loc_c = t1;
    if (arg3 == 0u) goto L_102f17aa;
    if (rd8(edi + 9u) != 8u) goto L_102f17aa;
    wr32(sp0 + 4u, arg2);
    if (eax == 0u)
    {
        edx = arg2;
        goto L_102f178b;
    }
    edx = arg2;
    loc_8 = eax;
L_102f1755: ;
    t2 = rd8(edx);
    t3 = rd8(edx + 1u);
    t4 = rd8(arg3 + (((rd8(edx) & 0xf8u) << 5u | (rd8(edx + 1u) & 0xf8u)) << 2u | ((uint32_t)((int32_t)rd8(edx + 2u) >> 3u) & 0x1fu)));
    t5 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t5 + 1u);
    wr8(t5, (uint8_t)t4);
    if (loc_8 != 1u)
    {
        edx = edx + 3u;
        loc_8 = loc_8 - 1u;
        goto L_102f1755;
    }
    edx = edx + 3u;
L_102f1788: ;
    eax = loc_c;
    ecx = 0xf8u;
L_102f178b: ;
    t10 = rd8(edi + 9u);
    wr8(edi + 0xbu, (uint8_t)t10);
    wr8(edi + 8u, 3u);
    wr8(edi + 0xau, 1u);
    t11 = ((uint8_t)t10 * eax + 7u) >> 3u;
    wr32(edi + 4u, t11);
L_102f1828: ;
    g->edx = edx;
    return;
L_102f17aa: ;
    if ((uint8_t)ecx != 6u) goto L_102f1803;
    if (arg3 == 0u) goto L_102f1803;
    if (rd8(edi + 9u) != 8u) goto L_102f1803;
    wr32(sp0 + 4u, arg2);
    if (eax == 0u)
    {
        edx = arg2;
        goto L_102f178b;
    }
    edx = arg2;
    loc_8 = eax;
L_102f17cd: ;
    t6 = rd8(edx);
    t7 = rd8(edx + 1u);
    t8 = rd8(arg3 + (((rd8(edx) & 0xf8u) << 5u | (rd8(edx + 1u) & 0xf8u)) << 2u | ((uint32_t)((int32_t)rd8(edx + 2u) >> 3u) & 0x1fu)));
    t9 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t9 + 1u);
    wr8(t9, (uint8_t)t8);
    if (loc_8 != 1u)
    {
        edx = edx + 4u;
        loc_8 = loc_8 - 1u;
        goto L_102f17cd;
    }
    edx = edx + 4u;
    goto L_102f1788;
L_102f1803: ;
    if ((uint8_t)ecx != 3u)
    {
        edx = in_edx;
    }
    else
    {
        if (arg4 == 0u)
        {
            edx = in_edx;
        }
        else
        {
            if (rd8(edi + 9u) != 8u)
            {
                edx = in_edx;
            }
            else
            {
                if (eax == 0u)
                {
                    edx = in_edx;
                    goto L_102f1828;
                }
                ecx = arg2;
L_102f181c: ;
                t12 = rd8(ecx);
                t13 = rd8(arg4 + rd8(ecx));
                wr8(ecx, (uint8_t)t13);
                if (eax != 1u)
                {
                    eax = eax - 1u;
                    ecx = ecx + 1u;
                    goto L_102f181c;
                }
                edx = (t12 & 0xffffff00u) | t13;
            }
        }
    }
    goto L_102f1828;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f171f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f171f(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
