/* f_0x102de0b1 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_102de0b1(Guest* g)
{
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_1c;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(sp0 + 8u) + rd32(sp0 + 0x10u) * arg5;
    if (rd32(sp0 + 8u) >= rd32(sp0 + 8u) + rd32(sp0 + 0x10u) * arg5)
    {
        edx = in_edx;
    }
    else
    {
        edi = rd32(sp0 + 8u);
        loc_1c = t1;
        t2 = arg3 * 4u + edi;
        wr32(sp0 + 0x10u, t2);
L_102de0e6: ;
        t3 = rd32(sp0 + 4u);
        if (edi < rd32(sp0 + 0x10u))
        {
            loc_8 = t3;
            t4 = ((rd32(sp0 + 0x10u) - edi - 1u) >> 3u) + 1u;
            esi = edi + 4u;
            loc_14 = t4;
L_102de105: ;
            t5 = rd32(arg5 + esi);
            t6 = rd32(arg5 + esi - 4u);
            t7 = rd32(esi - 4u);
            t8 = (((t5 & 0xff00ffu) + (t6 & 0xff00ffu) + (t7 & 0xff00ffu) + (rd32(esi) & 0xff00ffu) + 0x20002u & 0x3fc03fcu) | ((t5 & 0xff00u) + (t6 & 0xff00u) + (t7 & 0xff00u) + (rd32(esi) & 0xff00u) + 0x200u & 0x3fc00u)) >> 2u;
            wr32(loc_8, t8);
            if (loc_14 != 1u)
            {
                esi = esi + 8u;
                loc_8 = loc_8 + 4u;
                loc_14 = loc_14 - 1u;
                goto L_102de105;
            }
            edi = rd32(sp0 + 8u);
        }
        wr32(sp0 + 4u, arg6 + rd32(sp0 + 4u));
        wr32(sp0 + 0x10u, arg5 * 2u + rd32(sp0 + 0x10u));
        t9 = arg5 * 2u + edi;
        wr32(sp0 + 8u, t9);
        if (arg5 * 2u + edi < loc_1c)
        {
            edi = t9;
            goto L_102de0e6;
        }
        edx = 0xff00ffu;
    }
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102de0b1(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102de0b1(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
