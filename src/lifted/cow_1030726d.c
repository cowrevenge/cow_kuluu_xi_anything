/* f_0x1030726d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
void cow_fn_1030726d(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 572u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x230u, in_edi);
    edi = sp0 - 0x22cu;
    eax = 0x7fffffffu;
    ecx = 0x80u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if ((int32_t)arg5 > 0)
    {
        wr32(sp0 - 0x234u, in_ebx);
        wr32(sp0 - 0x238u, in_esi);
        loc_c = 0u;
L_10307299: ;
        t1 = arg3 * 3u - rd8(rd8(arg6 + loc_c) + rd32(rd32(arg1 + 0x74u) + 4u)) * 3u;
        wr32(sp0 - 8u, t1);
        t2 = arg4 - rd8(rd8(arg6 + loc_c) + rd32(rd32(arg1 + 0x74u) + 8u));
        t3 = arg2 * 2u - rd8(rd8(arg6 + loc_c) + rd32(rd32(arg1 + 0x74u))) * 2u;
        wr32(sp0 - 0x14u, sp0 - 0x22cu);
        wr32(sp0 - 0x20u, arg7);
        t4 = t3 * 0x20u + 0x100u;
        wr32(sp0 - 8u, t4);
        wr32(sp0 - 0x28u, 4u);
        eax = t1 * t1 + t2 * t2 + t3 * t3;
        edx = t2 * 0x10u + 0x40u;
        ebx = rd8(arg6 + loc_c);
        esi = t1 * 0x18u + 0x90u;
        loc_8 = t4;
        loc_14 = sp0 - 0x22cu;
        loc_20 = arg7;
        loc_28 = 4u;
L_10307314: ;
        wr32(sp0 - 0x1cu, eax);
        wr32(sp0 - 0x10u, esi);
        wr32(sp0 - 0x2cu, 8u);
        loc_1c = eax;
        loc_10 = esi;
        loc_2c = 8u;
L_10307321: ;
        wr32(sp0 - 0x18u, edx);
        wr32(sp0 - 0x24u, 4u);
        ecx = loc_1c;
        loc_18 = edx;
        loc_24 = 4u;
L_1030732e: ;
        if ((int32_t)ecx < (int32_t)rd32(loc_14))
        {
            edi = loc_14;
            wr32(edi, ecx);
            wr8(loc_20, (uint8_t)ebx);
        }
        wr32(sp0 - 0x18u, loc_18 + 0x80u);
        wr32(sp0 - 0x14u, loc_14 + 4u);
        wr32(sp0 - 0x20u, loc_20 + 1u);
        wr32(sp0 - 0x24u, loc_24 - 1u);
        if (loc_24 != 1u)
        {
            ecx = ecx + loc_18;
            loc_14 = loc_14 + 4u;
            loc_20 = loc_20 + 1u;
            loc_18 = loc_18 + 0x80u;
            loc_24 = loc_24 - 1u;
            goto L_1030732e;
        }
        loc_14 = loc_14 + 4u;
        loc_20 = loc_20 + 1u;
        wr32(sp0 - 0x1cu, loc_10 + loc_1c);
        wr32(sp0 - 0x10u, loc_10 + 0x120u);
        wr32(sp0 - 0x2cu, loc_2c - 1u);
        if (loc_2c != 1u)
        {
            loc_1c = loc_10 + loc_1c;
            loc_10 = loc_10 + 0x120u;
            loc_2c = loc_2c - 1u;
            goto L_10307321;
        }
        wr32(sp0 - 8u, loc_8 + 0x200u);
        wr32(sp0 - 0x28u, loc_28 - 1u);
        if (loc_28 != 1u)
        {
            eax = eax + loc_8;
            loc_8 = loc_8 + 0x200u;
            loc_28 = loc_28 - 1u;
            goto L_10307314;
        }
        wr32(sp0 - 0xcu, loc_c + 1u);
        if ((int32_t)(loc_c + 1u) < (int32_t)arg5)
        {
            loc_c = loc_c + 1u;
            goto L_10307299;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030726d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1030726d(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
