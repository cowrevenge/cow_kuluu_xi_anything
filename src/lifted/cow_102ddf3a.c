/* f_0x102ddf3a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_102ddf3a(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(sp0 + 8u) + rd32(sp0 + 0x10u) * arg5;
    if (rd32(sp0 + 8u) < rd32(sp0 + 8u) + rd32(sp0 + 0x10u) * arg5)
    {
        edx = rd32(sp0 + 8u);
        loc_1c = t1;
        t2 = arg3 * 4u + edx;
        wr32(sp0 + 0x10u, t2);
L_102ddf6f: ;
        t3 = rd32(sp0 + 4u);
        if (edx < rd32(sp0 + 0x10u))
        {
            loc_c = t3;
            t4 = ((rd32(sp0 + 0x10u) - edx - 1u) >> 3u) + 1u;
            ecx = edx + 4u;
            loc_14 = edx + 4u;
            loc_18 = t4;
L_102ddf91: ;
            t5 = rd32(arg5 + ecx - 4u);
            t6 = rd32(arg5 + ecx);
            t7 = rd32(ecx - 4u);
            t8 = ((t5 >> 2u & 0xffc03fc0u) + (t6 >> 2u & 0xffc03fc0u) + (t7 >> 2u & 0xffc03fc0u) + (rd32(ecx) >> 2u & 0xffc03fc0u) - 0x7fff80u ^ ((t5 & 0xff00ffu) + (t6 & 0xff00ffu) + (t7 & 0xff00ffu) + (rd32(ecx) & 0xff00ffu) + 0x20002u) >> 2u) & 0xff00ffu;
            t9 = t8 ^ (t5 >> 2u & 0x3fc03fc0u) + (t6 >> 2u & 0x3fc03fc0u) + (t7 >> 2u & 0x3fc03fc0u) + (rd32(ecx) >> 2u & 0x3fc03fc0u) + 0x800080u;
            wr32(loc_c, t9);
            if (loc_18 != 1u)
            {
                ecx = loc_14 + 8u;
                loc_c = loc_c + 4u;
                loc_14 = loc_14 + 8u;
                loc_18 = loc_18 - 1u;
                goto L_102ddf91;
            }
            edx = rd32(sp0 + 8u);
        }
        wr32(sp0 + 4u, arg6 + rd32(sp0 + 4u));
        wr32(sp0 + 0x10u, arg5 * 2u + rd32(sp0 + 0x10u));
        t10 = arg5 * 2u + edx;
        wr32(sp0 + 8u, t10);
        if (arg5 * 2u + edx < loc_1c)
        {
            edx = t10;
            goto L_102ddf6f;
        }
    }
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ddf3a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ddf3a(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
